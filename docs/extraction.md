# Extraction

All paths below assume the OTA was downloaded to `fw/biscuit-272.5.6.4.bin`.

## 1. Unzip the OTA

The `.bin` is a ZIP signed with SignApk. Its payload:

```
boot.img                 kernel + ramdisk
images/lk.bin            Little Kernel bootloader
images/preloader.img     MediaTek preloader
images/tz.img            TrustZone / TEE
system.new.dat           system partition, Android block-OTA dat (~540 MB)
system.transfer.list     block map for system.new.dat
system/build.prop        device properties
META-INF/.../updater-script
```

## 2. Rebuild the system image

`system.new.dat` is a sparse-by-ranges stream described by `system.transfer.list`. Convert to a raw ext4 image:

```bash
python3 scripts/sdat2img.py extract/system.transfer.list extract/system.new.dat extract/system.img
```

## 3. Pull the filesystem

`debugfs` reads an ext4 image file without mounting and without root. The image root is the Android `/system` partition.

```bash
# list
debugfs -R 'ls -l /' extract/system.img
# dump one file
debugfs -R 'dump /bin/alexad targets/alexad' extract/system.img
# or dump the whole tree
debugfs -R 'rdump / rootfs' extract/system.img
```

## 4. Confirm the targets

```bash
file targets/*
# alexad: ELF 32-bit LSB shared object, ARM, EABI5, dynamically linked,
#         interpreter /system/bin/linker, stripped
```
