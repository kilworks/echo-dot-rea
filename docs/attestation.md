# Device attestation (amzn_dha_tool + amzn_dha_hmac)

DHA = Device Health Attestation: how the Echo proves its identity to Amazon.
Two small ARM64 CLI tools over a Keymaster-backed HAL. Recovered from
`decomp/amzn_dha_tool.c` (53 functions) and `decomp/amzn_dha_hmac.c` (24).

## The HAL

Both tools reach the hardware through the Android HAL:
`hw_get_module_by_class("amzn_dha")` loads the `amzn_dha` module, which is backed
by the **Amazon Keymaster** device (TrustZone). The private key and the HMAC
computation never leave the secure side; these tools only drive it and format
the output.

## amzn_dha_tool

An RSA-keypair provisioning + readout tool (links OpenSSL: `RSA`, `EVP_PKEY`,
`d2i_PUBKEY`, `BN_bn2hex`, `RAND_bytes`). Three operations:

```
-c, --create    Provisions Amazon DHA onto the device   (amzndha_tool_create)
-d, --display   Displays the public modulus + HMAC       (amzndha_tool_info)
-t, --test      Self-test on the provisioned DHA         (amzndha_tool_self_test)
```

`--display` prints the device serial (`DSN`), the SoC id (`SOC ID`), the RSA
public modulus (`Modulus (%zd-bit)`, `N = ...`) and the attestation HMAC
(`HMAC (256-bit)`). A warning fires if the DSN reads as `"0"`
(`WARNING: DSN is "0", this might result in incorrect HMAC!`), i.e. an
unprovisioned idme. Keymaster failures are explicit: `Unable to open/close Amazon
Keymaster device`, `Unable to verify data using Keymaster API`, `Unable to locate
Amazon DHA module`.

So the device identity is an RSA keypair provisioned into Keymaster, whose public
modulus is readable, plus a 256-bit HMAC bound to the DSN.

## amzn_dha_hmac

A one-shot that publishes the HMAC as a system property. From the earlier
analysis (`main` @ 0x100830): it loads the `amzn_dha` module, calls the HAL op
with a constant selector and no caller-supplied nonce, expects a 32-byte
(HMAC-SHA256) result, hex-encodes it to 64 chars, and does
`property_set("ro.amzn_dha.hmac", <hex>)`.

Two defensive observations, unchanged:

1. The attestation value lands in the **clear** in the `ro.amzn_dha.hmac` system
   property, readable by any process that can read properties.
2. The HAL op is called with a constant selector and **no caller nonce**, so the
   attestation is likely deterministic (replayable if captured) unless the HAL
   draws its own nonce internally, which is not visible from this binary. Verify
   in the HAL `.so` under `/system/lib/hw/amzn_dha.*.so`.

This is the same TrustZone/Keymaster root of trust that signs
`dopplerSignedAuthenticationInfo` in the AVS auth handshake
([avs-protocol.md](avs-protocol.md)).
