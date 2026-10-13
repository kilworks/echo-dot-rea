// libllog.so  functions=89

// ==== __cxa_finalize @ 000109fc ====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00013fa4)();
  return;
}


// ==== __cxa_atexit @ 00010a08 ====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00013fa8)();
  return;
}


// ==== snprintf @ 00010a14 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00013fac)(__s);
  return iVar1;
}


// ==== asprintf @ 00010a20 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_asprintf_00013fb0)(__ptr);
  return iVar1;
}


// ==== fopen @ 00010a2c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00013fb4)(__filename);
  return pFVar1;
}


// ==== fprintf @ 00010a38 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00013fb8)(__stream);
  return iVar1;
}


// ==== fclose @ 00010a44 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00013fbc)(__stream);
  return iVar1;
}


// ==== __errno @ 00010a50 ====

void __errno(void)

{
  (*(code *)PTR___errno_00013fc0)();
  return;
}


// ==== strerror @ 00010a5c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00013fc4)(__errnum);
  return pcVar1;
}


// ==== _llogmsg_print @ 00010a68 ====

void _llogmsg_print(void)

{
  (*(code *)PTR__llogmsg_print_00013fc8)();
  return;
}


// ==== free @ 00010a74 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00013fcc)(__ptr);
  return;
}


// ==== update_logLevel_configfile @ 00010a80 ====

void update_logLevel_configfile(void)

{
  (*(code *)PTR_update_logLevel_configfile_00013fd0)();
  return;
}


// ==== strlen @ 00010a8c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00013fd4)(__s);
  return sVar1;
}


// ==== LipcGetServiceName @ 00010a98 ====

void LipcGetServiceName(void)

{
  (*(code *)PTR_LipcGetServiceName_00013fd8)();
  return;
}


// ==== strcmp @ 00010aa4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00013fdc)(__s1);
  return iVar1;
}


// ==== LipcRegisterStringProperty @ 00010ab0 ====

void LipcRegisterStringProperty(void)

{
  (*(code *)PTR_LipcRegisterStringProperty_00013fe0)();
  return;
}


// ==== fscanf @ 00010abc ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_00013fe4)(__stream);
  return iVar1;
}


// ==== __libc_current_sigrtmin @ 00010ac8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmin(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___libc_current_sigrtmin_00013fe8)();
  return iVar1;
}


// ==== __libc_current_sigrtmax @ 00010ad4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmax(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___libc_current_sigrtmax_00013fec)();
  return iVar1;
}


// ==== realloc @ 00010ae0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00013ff0)(__ptr);
  return pvVar1;
}


// ==== malloc @ 00010aec ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00013ff4)(__size);
  return pvVar1;
}


// ==== gettimeofday @ 00010af8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00013ff8)(__tv);
  return iVar1;
}


// ==== calloc @ 00010b04 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00013ffc)(__nmemb);
  return pvVar1;
}


// ==== _FINI_0 @ 00010b10 ====

void _FINI_0(void)

{
  __cxa_finalize(DAT_00010b2c + 0x10b24);
  return;
}


// ==== FUN_00010b30 @ 00010b30 ====

void FUN_00010b30(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}


// ==== FUN_00010b5c @ 00010b5c ====

undefined4 FUN_00010b5c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(DAT_00010b9c + 0x10b78,param_1,DAT_00010ba0 + 0x10b88);
  return uVar1;
}


// ==== FUN_00010ba4 @ 00010ba4 ====

undefined4 FUN_00010ba4(undefined4 param_1,undefined4 param_2,char *param_3,uint *param_4)

{
  if (*param_4 < 0x10) {
    *param_4 = 0x10;
    return 10;
  }
  snprintf(param_3,0x10,(char *)(DAT_00010bd8 + 0x10bca),
           *(undefined4 *)**(undefined4 **)(DAT_00010bd0 + 0x10bb0 + DAT_00010bd4));
  return 0;
}


// ==== update_logLevel_configfile @ 00010c48 ====

void update_logLevel_configfile(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  char *local_1c;
  undefined4 uStack_18;
  
  iVar1 = DAT_00010cb8;
  local_1c = param_2;
  uStack_18 = param_3;
  asprintf(&local_1c,(char *)(DAT_00010cb4 + 0x10c5c),DAT_00010cb0 + 0x10c58,param_1,param_1);
  __stream = fopen(local_1c,(char *)(DAT_00010cbc + 0x10c68));
  if (__stream == (FILE *)0x0) {
    if (**(int **)(iVar1 + 0x10c6a + DAT_00010cc4) << 6 < 0) {
      piVar2 = (int *)__errno();
      pcVar3 = strerror(*piVar2);
      _llogmsg_print(0x2000000,DAT_00010cc8 + 0x10ca4,param_1,pcVar3);
    }
  }
  else {
    fprintf(__stream,(char *)(DAT_00010cc0 + 0x10c78),param_2);
    fclose(__stream);
  }
  free(local_1c);
  return;
}


// ==== FUN_00010ccc @ 00010ccc ====

void FUN_00010ccc(undefined4 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = DAT_00010cf8 + 0x10cda;
  *(int *)**(undefined4 **)(iVar1 + DAT_00010cfc) = param_2;
  if (param_2 < 0) {
    update_logLevel_configfile();
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(iVar1 + DAT_00010d00);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2);
    return;
  }
  return;
}


// ==== FUN_00010d04 @ 00010d04 ====

undefined4 FUN_00010d04(undefined4 param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  sVar1 = strlen(param_3);
  if (((2 < sVar1) && (*param_3 == '0')) && ((param_3[1] & 0xdfU) == 0x58)) {
    param_3 = param_3 + 2;
  }
  bVar3 = false;
  pbVar5 = (byte *)(param_3 + -1);
  iVar6 = 0;
  while( true ) {
    pbVar5 = pbVar5 + 1;
    uVar4 = (uint)*pbVar5;
    if (uVar4 == 0) break;
    uVar7 = uVar4 - 0x30;
    if (9 < (uVar7 & 0xff)) {
      if ((uVar4 - 0x61 & 0xff) < 6) {
        uVar7 = uVar4 - 0x57;
      }
      else {
        if (5 < (uVar4 - 0x41 & 0xff)) break;
        uVar7 = uVar4 - 0x37;
      }
    }
    iVar6 = uVar7 + iVar6 * 0x10;
    bVar3 = true;
  }
  if (bVar3) {
    uVar2 = LipcGetServiceName(param_1);
    FUN_00010ccc(uVar2,iVar6);
    return 0;
  }
  return 0xc;
}


// ==== FUN_00010d80 @ 00010d80 ====

undefined4 FUN_00010d80(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(DAT_00010dc4 + 0x10d8c + DAT_00010dc8);
  do {
    puVar4 = puVar1;
    if ((char *)*puVar4 == (char *)0x0) {
      return 0xc;
    }
    iVar2 = strcmp((char *)*puVar4,param_3);
    puVar1 = puVar4 + 2;
  } while (iVar2 != 0);
  uVar3 = LipcGetServiceName(param_1);
  FUN_00010ccc(uVar3,puVar4[1]);
  return 0;
}


// ==== LlogInitLogProperties @ 00010dcc ====

undefined4 LlogInitLogProperties(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  FILE *__stream;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  char *local_1c [2];
  
  iVar1 = DAT_00010ec0;
  iVar6 = DAT_00010ebc;
  iVar5 = DAT_00010eb4 + 0x10ddc;
  **(undefined4 **)(iVar5 + DAT_00010eb8) = param_2;
  iVar6 = iVar6 + 0x10dec;
  iVar1 = LipcRegisterStringProperty(param_1,iVar6,DAT_00010ec4 + 0x10dee,iVar1 + 0x10df2,0);
  if (iVar1 == 0) {
    iVar6 = DAT_00010ed0 + 0x10e1e;
    uVar7 = LipcRegisterStringProperty
                      (param_1,iVar6,DAT_00010ed4 + 0x10e24,DAT_00010ed8 + 0x10e28,0);
    iVar1 = (int)uVar7;
    if (iVar1 == 0) {
      uVar2 = LipcGetServiceName(param_1,(int)((ulonglong)uVar7 >> 0x20),0);
      asprintf(local_1c,(char *)(DAT_00010ee0 + 0x10e58),DAT_00010ee4 + 0x10e5a,uVar2);
      __stream = fopen(local_1c[0],(char *)(DAT_00010ee8 + 0x10e64));
      if (__stream == (FILE *)0x0) {
        if (**(int **)(iVar5 + DAT_00010ec8) << 0x10 < 0) {
          uVar2 = LipcGetServiceName(param_1);
          piVar3 = (int *)__errno();
          pcVar4 = strerror(*piVar3);
          _llogmsg_print(0x8000,DAT_00010ef0 + 0x10ea6,uVar2,pcVar4);
        }
      }
      else {
        fscanf(__stream,(char *)(DAT_00010eec + 0x10e72),param_2);
        fclose(__stream);
      }
      free(local_1c[0]);
      return 0;
    }
    if (-1 < **(int **)(iVar5 + DAT_00010ec8) << 6) {
      return 1;
    }
    iVar5 = DAT_00010edc + 0x10e46;
  }
  else {
    if (-1 < **(int **)(iVar5 + DAT_00010ec8) << 6) {
      return 1;
    }
    iVar5 = DAT_00010ecc + 0x10e0c;
  }
  _llogmsg_print(0x2000000,iVar5,iVar1,iVar6);
  return 1;
}


// ==== LlogSetMaskedChangedCallback @ 00010ef4 ====

void LlogSetMaskedChangedCallback(undefined4 param_1)

{
  **(undefined4 **)(DAT_00010f00 + 0x10efc + DAT_00010f04) = param_1;
  return;
}


// ==== llog_errno_name @ 00010f08 ====

undefined * llog_errno_name(int param_1)

{
  if (param_1 == 0) {
    return (undefined *)(DAT_0001152c + 0x11220);
  }
  if (param_1 == 1) {
    return (undefined *)(DAT_00011530 + 0x11226);
  }
  if (param_1 == 2) {
    return (undefined *)(DAT_00011534 + 0x1122c);
  }
  if (param_1 == 3) {
    return (undefined *)(DAT_00011538 + 0x11232);
  }
  if (param_1 == 4) {
    return (undefined *)(DAT_0001153c + 0x11238);
  }
  if (param_1 == 5) {
    return (undefined *)(DAT_00011540 + 0x1123e);
  }
  if (param_1 == 6) {
    return (undefined *)(DAT_00011544 + 0x11244);
  }
  if (param_1 == 7) {
    return (undefined *)(DAT_00011548 + 0x1124a);
  }
  if (param_1 == 8) {
    return (undefined *)(DAT_0001154c + 0x11250);
  }
  if (param_1 == 9) {
    return (undefined *)(DAT_00011550 + 0x11256);
  }
  if (param_1 == 10) {
    return (undefined *)(DAT_00011554 + 0x1125c);
  }
  if (param_1 == 0xb) {
    return (undefined *)(DAT_00011558 + 0x11262);
  }
  if (param_1 == 0xc) {
    return (undefined *)(DAT_0001155c + 0x11268);
  }
  if (param_1 == 0xd) {
    return (undefined *)(DAT_00011560 + 0x1126e);
  }
  if (param_1 == 0xe) {
    return (undefined *)(DAT_00011564 + 0x11274);
  }
  if (param_1 == 0xf) {
    return (undefined *)(DAT_00011568 + 0x1127a);
  }
  if (param_1 == 0x10) {
    return (undefined *)(DAT_0001156c + 0x11280);
  }
  if (param_1 == 0x11) {
    return (undefined *)(DAT_00011570 + 0x11286);
  }
  if (param_1 == 0x12) {
    return (undefined *)(DAT_00011574 + 0x1128c);
  }
  if (param_1 == 0x13) {
    return (undefined *)(DAT_00011578 + 0x11292);
  }
  if (param_1 == 0x14) {
    return (undefined *)(DAT_0001157c + 0x11298);
  }
  if (param_1 == 0x15) {
    return (undefined *)(DAT_00011580 + 0x1129e);
  }
  if (param_1 == 0x16) {
    return (undefined *)(DAT_00011584 + 0x112a4);
  }
  if (param_1 == 0x17) {
    return (undefined *)(DAT_00011588 + 0x112aa);
  }
  if (param_1 == 0x18) {
    return (undefined *)(DAT_0001158c + 0x112b0);
  }
  if (param_1 == 0x19) {
    return (undefined *)(DAT_00011590 + 0x112b6);
  }
  if (param_1 == 0x1a) {
    return (undefined *)(DAT_00011594 + 0x112bc);
  }
  if (param_1 == 0x1b) {
    return (undefined *)(DAT_00011598 + 0x112c2);
  }
  if (param_1 == 0x1c) {
    return (undefined *)(DAT_0001159c + 0x112c8);
  }
  if (param_1 == 0x1d) {
    return (undefined *)(DAT_000115a0 + 0x112ce);
  }
  if (param_1 == 0x1e) {
    return (undefined *)(DAT_000115a4 + 0x112d4);
  }
  if (param_1 == 0x1f) {
    return (undefined *)(DAT_000115a8 + 0x112da);
  }
  if (param_1 == 0x20) {
    return (undefined *)(DAT_000115ac + 0x112e0);
  }
  if (param_1 == 0x21) {
    return (undefined *)(DAT_000115b0 + 0x112e6);
  }
  if (param_1 == 0x22) {
    return (undefined *)(DAT_000115b4 + 0x112ec);
  }
  if (param_1 == 0x23) {
    return (undefined *)(DAT_000115b8 + 0x112f2);
  }
  if (param_1 == 0x24) {
    return (undefined *)(DAT_000115bc + 0x112f8);
  }
  if (param_1 == 0x25) {
    return (undefined *)(DAT_000115c0 + 0x112fe);
  }
  if (param_1 == 0x26) {
    return (undefined *)(DAT_000115c4 + 0x11304);
  }
  if (param_1 == 0x27) {
    return (undefined *)(DAT_000115c8 + 0x1130a);
  }
  if (param_1 == 0x28) {
    return (undefined *)(DAT_000115cc + 0x11310);
  }
  if (param_1 == 0x2a) {
    return (undefined *)(DAT_000115d0 + 0x11316);
  }
  if (param_1 == 0x2b) {
    return (undefined *)(DAT_000115d4 + 0x1131c);
  }
  if (param_1 == 0x2c) {
    return (undefined *)(DAT_000115d8 + 0x11322);
  }
  if (param_1 == 0x2d) {
    return (undefined *)(DAT_000115dc + 0x11328);
  }
  if (param_1 == 0x2e) {
    return (undefined *)(DAT_000115e0 + 0x1132e);
  }
  if (param_1 == 0x2f) {
    return (undefined *)(DAT_000115e4 + 0x11334);
  }
  if (param_1 == 0x30) {
    return (undefined *)(DAT_000115e8 + 0x1133a);
  }
  if (param_1 == 0x31) {
    return (undefined *)(DAT_000115ec + 0x11340);
  }
  if (param_1 == 0x32) {
    return (undefined *)(DAT_000115f0 + 0x11346);
  }
  if (param_1 == 0x33) {
    return (undefined *)(DAT_000115f4 + 0x1134c);
  }
  if (param_1 == 0x34) {
    return (undefined *)(DAT_000115f8 + 0x11352);
  }
  if (param_1 == 0x35) {
    return (undefined *)(DAT_000115fc + 0x11358);
  }
  if (param_1 == 0x36) {
    return (undefined *)(DAT_00011600 + 0x1135e);
  }
  if (param_1 == 0x37) {
    return (undefined *)(DAT_00011604 + 0x11364);
  }
  if (param_1 == 0x38) {
    return (undefined *)(DAT_00011608 + 0x1136a);
  }
  if (param_1 == 0x39) {
    return (undefined *)(DAT_0001160c + 0x11370);
  }
  if (param_1 == 0x3b) {
    return (undefined *)(DAT_00011610 + 0x11376);
  }
  if (param_1 == 0x3c) {
    return (undefined *)(DAT_00011614 + 0x1137c);
  }
  if (param_1 == 0x3d) {
    return (undefined *)(DAT_00011618 + 0x11382);
  }
  if (param_1 == 0x3e) {
    return (undefined *)(DAT_0001161c + 0x11388);
  }
  if (param_1 == 0x3f) {
    return (undefined *)(DAT_00011620 + 0x1138e);
  }
  if (param_1 == 0x40) {
    return (undefined *)(DAT_00011624 + 0x11394);
  }
  if (param_1 == 0x41) {
    return (undefined *)(DAT_00011628 + 0x1139a);
  }
  if (param_1 == 0x42) {
    return (undefined *)(DAT_0001162c + 0x113a0);
  }
  if (param_1 == 0x43) {
    return (undefined *)(DAT_00011630 + 0x113a6);
  }
  if (param_1 == 0x44) {
    return (undefined *)(DAT_00011634 + 0x113ac);
  }
  if (param_1 == 0x45) {
    return (undefined *)(DAT_00011638 + 0x113b2);
  }
  if (param_1 == 0x46) {
    return (undefined *)(DAT_0001163c + 0x113b8);
  }
  if (param_1 == 0x47) {
    return (undefined *)(DAT_00011640 + 0x113be);
  }
  if (param_1 == 0x48) {
    return (undefined *)(DAT_00011644 + 0x113c4);
  }
  if (param_1 == 0x49) {
    return (undefined *)(DAT_00011648 + 0x113ca);
  }
  if (param_1 == 0x4a) {
    return (undefined *)(DAT_0001164c + 0x113d0);
  }
  if (param_1 == 0x4b) {
    return (undefined *)(DAT_00011650 + 0x113d6);
  }
  if (param_1 == 0x4c) {
    return (undefined *)(DAT_00011654 + 0x113dc);
  }
  if (param_1 == 0x4d) {
    return (undefined *)(DAT_00011658 + 0x113e2);
  }
  if (param_1 == 0x4e) {
    return (undefined *)(DAT_0001165c + 0x113e8);
  }
  if (param_1 == 0x4f) {
    return (undefined *)(DAT_00011660 + 0x113ee);
  }
  if (param_1 == 0x50) {
    return (undefined *)(DAT_00011664 + 0x113f4);
  }
  if (param_1 == 0x51) {
    return (undefined *)(DAT_00011668 + 0x113fa);
  }
  if (param_1 == 0x52) {
    return (undefined *)(DAT_0001166c + 0x11400);
  }
  if (param_1 == 0x53) {
    return (undefined *)(DAT_00011670 + 0x11406);
  }
  if (param_1 == 0x54) {
    return (undefined *)(DAT_00011674 + 0x1140c);
  }
  if (param_1 == 0x55) {
    return (undefined *)(DAT_00011678 + 0x11412);
  }
  if (param_1 == 0x56) {
    return (undefined *)(DAT_0001167c + 0x11418);
  }
  if (param_1 == 0x57) {
    return (undefined *)(DAT_00011680 + 0x1141e);
  }
  if (param_1 == 0x58) {
    return (undefined *)(DAT_00011684 + 0x11424);
  }
  if (param_1 == 0x59) {
    return (undefined *)(DAT_00011688 + 0x1142a);
  }
  if (param_1 == 0x5a) {
    return (undefined *)(DAT_0001168c + 0x11430);
  }
  if (param_1 == 0x5b) {
    return (undefined *)(DAT_00011690 + 0x11436);
  }
  if (param_1 == 0x5c) {
    return (undefined *)(DAT_00011694 + 0x1143c);
  }
  if (param_1 == 0x5d) {
    return (undefined *)(DAT_00011698 + 0x11442);
  }
  if (param_1 == 0x5e) {
    return (undefined *)(DAT_0001169c + 0x11448);
  }
  if (param_1 == 0x5f) {
    return (undefined *)(DAT_000116a0 + 0x1144e);
  }
  if (param_1 == 0x60) {
    return (undefined *)(DAT_000116a4 + 0x11454);
  }
  if (param_1 == 0x61) {
    return (undefined *)(DAT_000116a8 + 0x1145a);
  }
  if (param_1 == 0x62) {
    return (undefined *)(DAT_000116ac + 0x11460);
  }
  if (param_1 == 99) {
    return (undefined *)(DAT_000116b0 + 0x11466);
  }
  if (param_1 == 100) {
    return (undefined *)(DAT_000116b4 + 0x1146c);
  }
  if (param_1 == 0x65) {
    return (undefined *)(DAT_000116b8 + 0x11472);
  }
  if (param_1 == 0x66) {
    return (undefined *)(DAT_000116bc + 0x11478);
  }
  if (param_1 == 0x67) {
    return (undefined *)(DAT_000116c0 + 0x1147e);
  }
  if (param_1 == 0x68) {
    return (undefined *)(DAT_000116c4 + 0x11484);
  }
  if (param_1 == 0x69) {
    return (undefined *)(DAT_000116c8 + 0x1148a);
  }
  if (param_1 == 0x6a) {
    return (undefined *)(DAT_000116cc + 0x11490);
  }
  if (param_1 == 0x6b) {
    return (undefined *)(DAT_000116d0 + 0x11496);
  }
  if (param_1 == 0x6c) {
    return (undefined *)(DAT_000116d4 + 0x1149c);
  }
  if (param_1 == 0x6d) {
    return (undefined *)(DAT_000116d8 + 0x114a2);
  }
  if (param_1 == 0x6e) {
    return (undefined *)(DAT_000116dc + 0x114a8);
  }
  if (param_1 == 0x6f) {
    return (undefined *)(DAT_000116e0 + 0x114ae);
  }
  if (param_1 == 0x70) {
    return (undefined *)(DAT_000116e4 + 0x114b4);
  }
  if (param_1 == 0x71) {
    return (undefined *)(DAT_000116e8 + 0x114ba);
  }
  if (param_1 == 0x72) {
    return (undefined *)(DAT_000116ec + 0x114c0);
  }
  if (param_1 == 0x73) {
    return (undefined *)(DAT_000116f0 + 0x114c6);
  }
  if (param_1 == 0x74) {
    return (undefined *)(DAT_000116f4 + 0x114cc);
  }
  if (param_1 == 0x75) {
    return (undefined *)(DAT_000116f8 + 0x114d2);
  }
  if (param_1 == 0x76) {
    return (undefined *)(DAT_000116fc + 0x114d8);
  }
  if (param_1 == 0x77) {
    return (undefined *)(DAT_00011700 + 0x114de);
  }
  if (param_1 == 0x78) {
    return (undefined *)(DAT_00011704 + 0x114e4);
  }
  if (param_1 == 0x79) {
    return (undefined *)(DAT_00011708 + 0x114ea);
  }
  if (param_1 == 0x7a) {
    return (undefined *)(DAT_0001170c + 0x114f0);
  }
  if (param_1 == 0x7b) {
    return (undefined *)(DAT_00011710 + 0x114f6);
  }
  if (param_1 == 0x7c) {
    return (undefined *)(DAT_00011714 + 0x114fc);
  }
  if (param_1 == 0x7d) {
    return (undefined *)(DAT_00011718 + 0x11502);
  }
  if (param_1 == 0x7e) {
    return (undefined *)(DAT_0001171c + 0x11508);
  }
  if (param_1 == 0x7f) {
    return (undefined *)(DAT_00011720 + 0x1150e);
  }
  if (param_1 == 0x80) {
    return (undefined *)(DAT_00011724 + 0x11514);
  }
  if (param_1 != 0x81) {
    if (param_1 == 0x82) {
      return (undefined *)(DAT_0001172c + 0x11520);
    }
    if (param_1 == 0x83) {
      return (undefined *)(DAT_00011528 + 0x1121a);
    }
    return &UNK_00011526 + DAT_00011730;
  }
  return (undefined *)(DAT_00011728 + 0x1151a);
}


// ==== llog_h_errno_name @ 00011734 ====

int llog_h_errno_name(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return DAT_00011760 + 0x11748;
  case 2:
    return DAT_00011768 + 0x11754;
  case 3:
    return DAT_00011764 + 0x1174e;
  case 4:
    return (int)&DAT_00011760 + DAT_00011770;
  default:
    return DAT_0001176c + 0x1175a;
  }
}


// ==== llog_signal_name @ 00011774 ====

undefined * llog_signal_name(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return (undefined *)(DAT_000118ec + 0x1181a);
  }
  if (param_1 == 1) {
    return (undefined *)(DAT_000118f0 + 0x11820);
  }
  if (param_1 == 2) {
    return (undefined *)(DAT_000118f4 + 0x11826);
  }
  if (param_1 == 3) {
    return (undefined *)(DAT_000118f8 + 0x1182c);
  }
  if (param_1 == 4) {
    return (undefined *)(DAT_000118fc + 0x11832);
  }
  if (param_1 == 5) {
    return (undefined *)(DAT_00011900 + 0x11838);
  }
  if (param_1 == 6) {
    return (undefined *)(DAT_00011904 + 0x1183e);
  }
  if (param_1 == 7) {
    return (undefined *)(DAT_00011908 + 0x11844);
  }
  if (param_1 == 8) {
    return (undefined *)(DAT_0001190c + 0x1184a);
  }
  if (param_1 == 9) {
    return (undefined *)(DAT_00011910 + 0x11850);
  }
  if (param_1 == 10) {
    return (undefined *)(DAT_00011914 + 0x11856);
  }
  if (param_1 == 0xb) {
    return (undefined *)(DAT_00011918 + 0x1185c);
  }
  if (param_1 == 0xc) {
    return (undefined *)(DAT_0001191c + 0x11862);
  }
  if (param_1 == 0xd) {
    return (undefined *)(DAT_00011920 + 0x11868);
  }
  if (param_1 == 0xe) {
    return (undefined *)(DAT_00011924 + 0x1186e);
  }
  if (param_1 == 0xf) {
    return (undefined *)(DAT_00011928 + 0x11874);
  }
  if (param_1 == 0x10) {
    return (undefined *)(DAT_0001192c + 0x1187a);
  }
  if (param_1 == 0x11) {
    return (undefined *)(DAT_00011930 + 0x11880);
  }
  if (param_1 == 0x12) {
    return (undefined *)(DAT_00011934 + 0x11886);
  }
  if (param_1 == 0x13) {
    return (undefined *)(DAT_00011938 + 0x1188c);
  }
  if (param_1 == 0x14) {
    return (undefined *)(DAT_0001193c + 0x11892);
  }
  if (param_1 == 0x15) {
    return (undefined *)(DAT_00011940 + 0x11898);
  }
  if (param_1 == 0x16) {
    return (undefined *)(DAT_00011944 + 0x1189e);
  }
  if (param_1 == 0x17) {
    return (undefined *)(DAT_00011948 + 0x118a4);
  }
  if (param_1 == 0x18) {
    return (undefined *)(DAT_0001194c + 0x118aa);
  }
  if (param_1 == 0x19) {
    return (undefined *)(DAT_00011950 + 0x118b0);
  }
  if (param_1 == 0x1a) {
    return (undefined *)(DAT_00011954 + 0x118b6);
  }
  if (param_1 == 0x1b) {
    return (undefined *)(DAT_00011958 + 0x118bc);
  }
  if (param_1 == 0x1c) {
    return (undefined *)(DAT_0001195c + 0x118c2);
  }
  if (param_1 == 0x1d) {
    return (undefined *)(DAT_00011960 + 0x118c8);
  }
  if (param_1 == 0x1e) {
    return (undefined *)(DAT_00011964 + 0x118ce);
  }
  if (param_1 != 0x1f) {
    iVar1 = __libc_current_sigrtmin();
    if (param_1 == iVar1) {
      return (undefined *)(DAT_0001196c + 0x118da);
    }
    iVar1 = __libc_current_sigrtmax();
    if (param_1 != iVar1) {
      if (param_1 == 0x2000) {
        return (undefined *)(DAT_000118e8 + 0x11814);
      }
      return &UNK_000118e6 + DAT_00011974;
    }
    return (undefined *)(DAT_00011970 + 0x118e0);
  }
  return (undefined *)(DAT_00011968 + 0x118d4);
}


// ==== LogProfileInit @ 000119bc ====

undefined4 LogProfileInit(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = calloc(1,0xc);
  *param_2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[2] = 0xffffffff;
    return 0;
  }
  return 1;
}


// ==== LogProfileTearDown @ 000119de ====

undefined4 LogProfileTearDown(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 4) != 0) {
    for (iVar1 = 0; iVar1 <= *(int *)(*param_1 + 8); iVar1 = iVar1 + 1) {
      free(*(void **)(*(int *)(*param_1 + 4) + iVar1 * 4));
      *(undefined4 *)(*(int *)(*param_1 + 4) + iVar1 * 4) = 0;
    }
  }
  free(*(void **)(*param_1 + 4));
  *(undefined4 *)(*param_1 + 4) = 0;
  free((void *)*param_1);
  return 0;
}


// ==== LogProfileStart @ 00011a24 ====

undefined4 LogProfileStart(int param_1,int *param_2,int *param_3)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  size_t __size;
  int iVar4;
  
  *(int *)(*param_3 + 8) = *(int *)(*param_3 + 8) + 1;
  iVar3 = *(int *)(*param_3 + 8);
  *param_2 = iVar3;
  if (param_1 == 0) {
    param_1 = DAT_00011a48 + 0x11a40;
  }
  iVar4 = *param_3;
  __size = (iVar3 + 1) * 4;
  pvVar1 = realloc(*(void **)(iVar4 + 4),__size);
  *(void **)(iVar4 + 4) = pvVar1;
  iVar3 = __size - 4;
  iVar4 = *(int *)(*param_3 + 4);
  pvVar1 = malloc(0xc);
  *(void **)(iVar4 + iVar3) = pvVar1;
  piVar2 = *(int **)(*(int *)(*param_3 + 4) + iVar3);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_1;
    gettimeofday((timeval *)(*(int *)(*(int *)(*param_3 + 4) + iVar3) + 4),(__timezone_ptr_t)0x0);
    return 0;
  }
  return 1;
}


// ==== LogProfileDump @ 00011a4c ====

int LogProfileDump(int param_1,int param_2,int *param_3,code *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  timeval local_28;
  int *piStack_20;
  
  iVar4 = DAT_00011b40 + 0x11a60;
  local_28.tv_sec = param_1;
  local_28.tv_usec = param_2;
  piStack_20 = param_3;
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  iVar1 = *(int *)(((int *)*param_3)[1] + param_1 * 4);
  local_28.tv_sec = local_28.tv_sec - *(int *)(iVar1 + 4);
  local_28.tv_usec = local_28.tv_usec - *(int *)(iVar1 + 8);
  if (local_28.tv_usec < 0) {
    local_28.tv_sec = local_28.tv_sec + -1;
    local_28.tv_usec = local_28.tv_usec + 1000000;
  }
  if (DAT_00011b3c < local_28.tv_usec) {
    local_28.tv_usec = local_28.tv_usec + -1000000;
    local_28.tv_sec = local_28.tv_sec + 1;
  }
  iVar1 = *(int *)*param_3;
  iVar3 = local_28.tv_sec * 1000 + local_28.tv_usec / 1000;
  if (iVar1 == 0) {
    if ((iVar3 < 0) && (**(int **)(iVar4 + DAT_00011b44) << 7 < 0)) {
      _llogmsg_print(0x1000000,DAT_00011b48 + 0x11ade,iVar3);
    }
    uVar2 = **(undefined4 **)(*(int *)(*param_3 + 4) + param_1 * 4);
    if (param_2 == 0) {
      param_2 = DAT_00011b4c + 0x11af4;
    }
    iVar1 = DAT_00011b50 + 0x11af8;
  }
  else {
    if ((iVar3 < 0) && (**(int **)(iVar4 + DAT_00011b44) << 7 < 0)) {
      _llogmsg_print(0x1000000,DAT_00011b54 + 0x11b16,iVar1,iVar3);
    }
    iVar1 = *(int *)*param_3;
    uVar2 = **(undefined4 **)(((int *)*param_3)[1] + param_1 * 4);
    if (param_2 == 0) {
      param_2 = DAT_00011b58 + 0x11b2c;
    }
  }
  (*param_4)(iVar1,uVar2,iVar3,param_2);
  return iVar3;
}


// ==== LogProfileMark @ 00011b5c ====

undefined4 LogProfileMark(int param_1,int *param_2)

{
  gettimeofday((timeval *)(*(int *)(*(int *)(*param_2 + 4) + param_1 * 4) + 4),(__timezone_ptr_t)0x0
              );
  return 0;
}


// ==== __cxa_finalize @ 00015000 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_atexit @ 00015004 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== snprintf @ 00015008 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr0 @ 0001500c ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== asprintf @ 00015010 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== fopen @ 00015014 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== fprintf @ 00015018 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== fclose @ 0001501c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __errno @ 00015020 ====

/* WARNING: Control flow encountered bad instruction data */

void __errno(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strerror @ 00015024 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _llogmsg_print @ 00015028 ====

/* WARNING: Control flow encountered bad instruction data */

void _llogmsg_print(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== free @ 0001502c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strlen @ 00015030 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== LipcGetServiceName @ 00015034 ====

/* WARNING: Control flow encountered bad instruction data */

void LipcGetServiceName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strcmp @ 00015038 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== LipcRegisterStringProperty @ 0001503c ====

/* WARNING: Control flow encountered bad instruction data */

void LipcRegisterStringProperty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== fscanf @ 00015040 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __libc_current_sigrtmin @ 00015044 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __libc_current_sigrtmax @ 00015048 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmax(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== realloc @ 0001504c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== malloc @ 00015050 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== gettimeofday @ 00015054 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== calloc @ 00015058 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr1 @ 0001505c ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


