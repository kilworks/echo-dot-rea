// amzn_dha_tool  functions=76

// ==== FUN_00100ba0 @ 00100ba0 ====

void FUN_00100ba0(void)

{
  (*(code *)PTR_00111f08)();
  return;
}


// ==== printf @ 00100bc0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00111f10)((int)__format);
  return iVar1;
}


// ==== hw_get_module_by_class @ 00100bd0 ====

void hw_get_module_by_class(void)

{
  (*(code *)PTR_hw_get_module_by_class_00111f18)();
  return;
}


// ==== fputc @ 00100be0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00111f20)(__c);
  return iVar1;
}


// ==== free @ 00100bf0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00111f28)();
  return;
}


// ==== BN_get_word @ 00100c00 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong BN_get_word(BIGNUM *a)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_BN_get_word_00111f30)();
  return uVar1;
}


// ==== EVP_PKEY_type @ 00100c10 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EVP_PKEY_type(int type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_EVP_PKEY_type_00111f38)(type);
  return iVar1;
}


// ==== fprintf @ 00100c20 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00111f40)((int)__stream);
  return iVar1;
}


// ==== RAND_bytes @ 00100c30 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int RAND_bytes(uchar *buf,int num)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_RAND_bytes_00111f48)((int)buf,num);
  return iVar1;
}


// ==== RSA_free @ 00100c40 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RSA_free(RSA *r)

{
  (*(code *)PTR_RSA_free_00111f50)();
  return;
}


// ==== EVP_PKEY_free @ 00100c50 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EVP_PKEY_free(EVP_PKEY *pkey)

{
  (*(code *)PTR_EVP_PKEY_free_00111f58)();
  return;
}


// ==== __stack_chk_fail @ 00100c60 ====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00111f60)();
  return;
}


// ==== tolower @ 00100c70 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tolower_00111f68)(__c);
  return iVar1;
}


// ==== d2i_PUBKEY @ 00100c80 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_PKEY * d2i_PUBKEY(EVP_PKEY **a,uchar **pp,long length)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)(*(code *)PTR_d2i_PUBKEY_00111f70)();
  return pEVar1;
}


// ==== putchar @ 00100c90 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00111f78)(__c);
  return iVar1;
}


// ==== BN_bn2hex @ 00100ca0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * BN_bn2hex(BIGNUM *a)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_BN_bn2hex_00111f80)();
  return pcVar1;
}


// ==== EVP_PKEY_get1_RSA @ 00100cb0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

rsa_st * EVP_PKEY_get1_RSA(EVP_PKEY *pkey)

{
  rsa_st *prVar1;
  
  prVar1 = (rsa_st *)(*(code *)PTR_EVP_PKEY_get1_RSA_00111f88)();
  return prVar1;
}


// ==== fwrite @ 00100cc0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00111f90)();
  return sVar1;
}


// ==== puts @ 00100cd0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00111f98)((int)__s);
  return iVar1;
}


// ==== getopt_long @ 00100ce0 ====

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00111fa0)();
  return;
}


// ==== __libc_init @ 00100cf0 ====

void __libc_init(void)

{
  (*(code *)PTR___libc_init_00111fa8)();
  return;
}


// ==== memcmp @ 00100d00 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00111fb0)((int)__s1);
  return iVar1;
}


// ==== __cxa_atexit @ 00100d10 ====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00111fb8)();
  return;
}


// ==== strlen @ 00100d20 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00111fc0)();
  return sVar1;
}


// ==== main @ 00100d30 ====

void main(int param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  uchar *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  EVP_PKEY *pkey;
  rsa_st *r;
  ulong uVar9;
  size_t sVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  int local_74;
  long local_70;
  long local_68;
  uchar *local_60;
  long local_58;
  uchar *local_50;
  void *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  uchar local_28 [32];
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00111fd0;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  printf("[AMZN_DHA_TOOL]: Version %s\n",&DAT_001016c0);
  if (param_1 == 1) {
LAB_0010102c:
    uVar13 = 0xffffffff;
    FUN_0010145c(*param_2);
  }
  else {
    iVar6 = hw_get_module_by_class("amzn_dha",0,&local_68);
    if (iVar6 == 0) {
      iVar6 = (*(code *)**(undefined8 **)(local_68 + 0x20))(local_68,"amzn_dha",&local_70);
      if (iVar6 == 0) {
        bVar2 = false;
        while (iVar6 = getopt_long(param_1,param_2,&DAT_001019f8,&PTR_DAT_00112008,&local_74),
              lVar3 = local_70, iVar6 != -1) {
          if (iVar6 == 99) {
            iVar6 = (**(code **)(local_70 + 0x80))(local_70);
            if (iVar6 == 0) {
              uVar13 = 0;
              puts("[AMZN_DHA_TOOL]: Key creation success");
            }
            else {
              uVar13 = 0xffffffff;
              fprintf((FILE *)(PTR___sF_00111ff8 + 0x130),"%s: Unable to generate key-pair\n",
                      "amzndha_tool_create");
            }
            goto LAB_00101038;
          }
          if (99 < iVar6) {
            if (iVar6 != 100) {
              if (iVar6 != 0x74) goto LAB_0010102c;
              local_38 = (char *)0x0;
              local_28[0] = '\0';
              local_28[1] = '\0';
              local_28[2] = '\0';
              local_28[3] = '\0';
              local_28[4] = '\0';
              local_28[5] = '\0';
              local_28[6] = '\0';
              local_28[7] = '\0';
              local_28[8] = '\0';
              local_28[9] = '\0';
              local_28[10] = '\0';
              local_28[0xb] = '\0';
              local_28[0xc] = '\0';
              local_28[0xd] = '\0';
              local_28[0xe] = '\0';
              local_28[0xf] = '\0';
              local_28[0x10] = '\0';
              local_28[0x11] = '\0';
              local_28[0x12] = '\0';
              local_28[0x13] = '\0';
              local_28[0x14] = '\0';
              local_28[0x15] = '\0';
              local_28[0x16] = '\0';
              local_28[0x17] = '\0';
              local_28[0x18] = '\0';
              local_28[0x19] = '\0';
              local_28[0x1a] = '\0';
              local_28[0x1b] = '\0';
              local_28[0x1c] = '\0';
              local_28[0x1d] = '\0';
              local_28[0x1e] = '\0';
              local_28[0x1f] = '\0';
              local_30 = 0;
              iVar6 = RAND_bytes(local_28,0x20);
              pcVar11 = "%s: Unable to generate data\n";
              if (iVar6 == 1) {
                iVar6 = (**(code **)(lVar3 + 0x90))(lVar3,local_28,0x20,&local_38,&local_30);
                if (iVar6 != 0) {
                  pcVar11 = "%s: Unable to sign data\n";
                  goto LAB_001012b0;
                }
                iVar6 = (**(code **)(lVar3 + 0x98))(lVar3,local_28,0x20,local_38,local_30);
                pcVar11 = "%s: Unable to verify data using Keymaster API\n";
                if (iVar6 != 0) goto LAB_001012b0;
                uVar13 = 0;
                puts("[AMZN_DHA_TOOL]: Self-test success");
              }
              else {
LAB_001012b0:
                uVar13 = 0xffffffff;
                fprintf((FILE *)(PTR___sF_00111ff8 + 0x130),pcVar11,"amzndha_tool_self_test");
              }
              if (local_38 != (char *)0x0) {
                free(local_38);
              }
              goto LAB_00101038;
            }
            local_60 = (uchar *)0x0;
            local_58 = 0;
            local_78 = 0x30;
            local_77 = 0x22;
            local_76 = 0x80;
            local_75 = 0x20;
            iVar6 = (**(code **)(local_70 + 0x88))(local_70,&local_60,&local_58);
            if (iVar6 != 0) {
              uVar13 = 0xffffffff;
              fprintf((FILE *)(PTR___sF_00111ff8 + 0x130),"%s: Unable to retrieve public key\n",
                      "amzndha_tool_info");
              goto LAB_001011f0;
            }
            puts("[AMZN_DHA_TOOL]: Key retrieval success");
            local_50 = local_60;
            pkey = d2i_PUBKEY((EVP_PKEY **)0x0,&local_50,local_58);
            iVar6 = EVP_PKEY_type(pkey->type);
            if ((iVar6 != 6) || (r = EVP_PKEY_get1_RSA(pkey), r == (rsa_st *)0x0)) {
              fprintf((FILE *)(PTR___sF_00111ff8 + 0x130),"%s: Key is not RSA\n","amzndha_tool_info"
                     );
              if (pkey != (EVP_PKEY *)0x0) {
                uVar13 = 0xffffffff;
                goto LAB_001011e8;
              }
              uVar13 = 0xffffffff;
              goto LAB_001011f0;
            }
            uVar9 = BN_get_word(r->e);
            if (uVar9 == 0x10001) {
              iVar6 = memcmp(local_60 + local_58 + -0x24,&local_78,4);
              if (iVar6 == 0) {
                pcVar11 = BN_bn2hex(r->n);
                if (bVar2) {
                  printf("[AMZN_DHA_TOOL]: N = ");
                }
                else {
                  sVar10 = strlen(pcVar11);
                  printf("    Modulus (%zd-bit)",sVar10 << 2);
                }
                uVar12 = 0;
                while( true ) {
                  sVar10 = strlen(pcVar11);
                  if (sVar10 <= uVar12) break;
                  if ((!bVar2) && ((uVar12 & 0x1f) == 0)) {
                    printf("\n        ");
                  }
                  uVar7 = tolower((uint)(byte)pcVar11[uVar12]);
                  uVar8 = uVar12 + 1;
                  uVar12 = uVar12 + 2;
                  uVar8 = tolower((uint)(byte)pcVar11[uVar8]);
                  printf("%c%c:",(ulong)uVar7,(ulong)uVar8);
                }
                putchar(10);
                lVar5 = local_58;
                puVar4 = local_60;
                if (bVar2) {
                  printf("[AMZN_DHA_TOOL]: HMAC = ");
                }
                else {
                  printf("    HMAC (256-bit)");
                }
                uVar9 = 0;
                do {
                  if ((!bVar2) && ((uVar9 & 0xf) == 0)) {
                    printf("\n        ");
                  }
                  lVar1 = uVar9 + lVar5;
                  uVar9 = uVar9 + 1;
                  printf("%02x:",(ulong)puVar4[lVar1 + -0x20]);
                } while (uVar9 != 0x20);
                putchar(10);
                if (*(code **)(lVar3 + 0xa0) == (code *)0x0) {
                  uVar13 = 0;
                }
                else {
                  local_48 = (void *)0x0;
                  local_40 = 0;
                  iVar6 = (**(code **)(lVar3 + 0xa0))(lVar3,0,&local_48,&local_40);
                  if (iVar6 == 0) {
                    if (bVar2) {
                      printf("[AMZN_DHA_TOOL]: SOC ID = %s\n",local_48);
                    }
                    else {
                      puts("    SoC serial");
                      printf("        %s\n",local_48);
                    }
                    free(local_48);
                  }
                  local_38 = (char *)0x0;
                  local_30 = 0;
                  iVar6 = (**(code **)(lVar3 + 0xa0))(lVar3,2,&local_38,&local_30);
                  if (iVar6 == 0) {
                    if ((*local_38 == '0') && (sVar10 = strlen(local_38), sVar10 == 1)) {
                      puts(
                          "[AMZN_DHA_TOOL]: WARNING: DSN is \"0\", this might result in incorrect HMAC!"
                          );
                      if (!bVar2) goto LAB_001011b8;
LAB_00101234:
                      printf("[AMZN_DHA_TOOL]: DSN = %s\n",local_38);
                    }
                    else {
                      if (bVar2) goto LAB_00101234;
LAB_001011b8:
                      puts("    DSN");
                      printf("        %s\n",local_38);
                    }
                    free(local_38);
                  }
                  uVar13 = 0;
                }
LAB_001011e0:
                RSA_free(r);
LAB_001011e8:
                EVP_PKEY_free(pkey);
LAB_001011f0:
                if (local_60 != (uchar *)0x0) {
                  free(local_60);
                }
                goto LAB_00101038;
              }
              pcVar11 = "%s: Magic header mismatched\n";
            }
            else {
              pcVar11 = "%s: Unexpected exponent\n";
            }
            uVar13 = 0xffffffff;
            fprintf((FILE *)(PTR___sF_00111ff8 + 0x130),pcVar11,"amzndha_tool_info");
            goto LAB_001011e0;
          }
          if (iVar6 != 0) goto LAB_0010102c;
          if (local_74 == 2) {
            bVar2 = true;
          }
        }
        FUN_0010145c(*param_2);
        uVar13 = 0xffffffff;
        goto LAB_00101038;
      }
      pcVar11 = "Unable to open Amazon Keymaster device\n";
      sVar10 = 0x27;
    }
    else {
      pcVar11 = "Unable to locate Amazon DHA module\n";
      sVar10 = 0x23;
    }
    uVar13 = 0xffffffff;
    fwrite(pcVar11,1,sVar10,(FILE *)(PTR___sF_00111ff8 + 0x130));
  }
LAB_00101038:
  if ((local_70 != 0) && (iVar6 = (**(code **)(local_70 + 0x70))(), iVar6 != 0)) {
    fwrite("Unable to close Amazon Keymaster device\n",1,0x28,(FILE *)(PTR___sF_00111ff8 + 0x130));
  }
  if (local_8 != *(long *)PTR___stack_chk_guard_00111fd0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


// ==== FUN_001013ac @ 001013ac ====

void FUN_001013ac(undefined8 param_1)

{
  undefined *local_18;
  undefined *local_10;
  undefined *local_8;
  
  local_18 = PTR___PREINIT_ARRAY___00111fe8;
  local_10 = PTR___INIT_ARRAY___00111fd8;
  local_8 = PTR___FINI_ARRAY___00111ff0;
  __libc_init(param_1,0,PTR_main_00111fe0,&local_18);
  FUN_001013ac(&stack0xffffffffffffffc0);
  return;
}


// ==== entry @ 00101400 ====

void entry(void)

{
  FUN_001013ac(&stack0x00000000);
  return;
}


// ==== FUN_00101408 @ 00101408 ====

void FUN_00101408(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}


// ==== FUN_00101430 @ 00101430 ====

void FUN_00101430(undefined8 param_1)

{
  __cxa_atexit(FUN_00101408,param_1,&DAT_00112000);
  return;
}


// ==== FUN_0010145c @ 0010145c ====

void FUN_0010145c(undefined8 param_1)

{
  FILE *__stream;
  
  __stream = (FILE *)(PTR___sF_00111ff8 + 0x130);
  fprintf(__stream,"Usage: %s [-t] [-d]\n",param_1);
  fputc(10,__stream);
  fwrite("  -h, --help          Displays this help and exit\n",1,0x32,__stream);
  fwrite("  -c, --create        Provisions Amazon DHA onto the device\n",1,0x3c,__stream);
  fwrite("  -t, --test          Perform a self-test on the Amazon DHA provisioned\n",1,0x48,__stream
        );
  fwrite("  -d, --display       Displays the public modulus of the Amazon DHA and its HMAC\n",1,0x51
         ,__stream);
  fwrite("      --oneline       Shortens the output of -d option\n",1,0x37,__stream);
  return;
}


// ==== printf @ 00113000 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== hw_get_module_by_class @ 00113008 ====

/* WARNING: Control flow encountered bad instruction data */

void hw_get_module_by_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== fputc @ 00113010 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== free @ 00113018 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== BN_get_word @ 00113020 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong BN_get_word(BIGNUM *a)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== EVP_PKEY_type @ 00113028 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EVP_PKEY_type(int type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== fprintf @ 00113030 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== RAND_bytes @ 00113038 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int RAND_bytes(uchar *buf,int num)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== RSA_free @ 00113040 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RSA_free(RSA *r)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== EVP_PKEY_free @ 00113048 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EVP_PKEY_free(EVP_PKEY *pkey)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __stack_chk_fail @ 00113050 ====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== tolower @ 00113058 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== d2i_PUBKEY @ 00113060 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_PKEY * d2i_PUBKEY(EVP_PKEY **a,uchar **pp,long length)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== putchar @ 00113068 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== BN_bn2hex @ 00113078 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * BN_bn2hex(BIGNUM *a)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== EVP_PKEY_get1_RSA @ 00113080 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

rsa_st * EVP_PKEY_get1_RSA(EVP_PKEY *pkey)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== fwrite @ 00113088 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== puts @ 00113090 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== getopt_long @ 00113098 ====

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __libc_init @ 001130a0 ====

/* WARNING: Control flow encountered bad instruction data */

void __libc_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== memcmp @ 001130a8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_atexit @ 001130b0 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strlen @ 001130b8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


