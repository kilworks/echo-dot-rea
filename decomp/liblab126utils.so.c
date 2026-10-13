// liblab126utils.so  functions=101

// ==== __cxa_finalize @ 0001096c ====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00012f94)();
  return;
}


// ==== __cxa_atexit @ 00010978 ====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00012f98)();
  return;
}


// ==== flock @ 00010984 ====

void flock(void)

{
  (*(code *)PTR_flock_00012f9c)();
  return;
}


// ==== strdup @ 00010990 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00012fa0)(__s);
  return pcVar1;
}


// ==== strchr @ 0001099c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00012fa4)(__s);
  return pcVar1;
}


// ==== mkdir @ 000109a8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_00012fa8)(__path);
  return iVar1;
}


// ==== __errno @ 000109b4 ====

void __errno(void)

{
  (*(code *)PTR___errno_00012fac)();
  return;
}


// ==== free @ 000109c0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00012fb0)(__ptr);
  return;
}


// ==== strerror @ 000109cc ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00012fb4)(__errnum);
  return pcVar1;
}


// ==== strlen @ 000109d8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00012fb8)(__s);
  return sVar1;
}


// ==== _llogmsg_print @ 000109e4 ====

void _llogmsg_print(void)

{
  (*(code *)PTR__llogmsg_print_00012fbc)();
  return;
}


// ==== mkpath @ 000109f0 ====

void mkpath(void)

{
  (*(code *)PTR_mkpath_00012fc0)();
  return;
}


// ==== open @ 000109fc ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_00012fc4)(__file);
  return iVar1;
}


// ==== getpid @ 00010a08 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00012fc8)();
  return _Var1;
}


// ==== __sprintf_chk @ 00010a14 ====

void __sprintf_chk(void)

{
  (*(code *)PTR___sprintf_chk_00012fcc)();
  return;
}


// ==== __strlen_chk @ 00010a20 ====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_00012fd0)();
  return;
}


// ==== write @ 00010a2c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00012fd4)(__fd);
  return sVar1;
}


// ==== close @ 00010a38 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00012fd8)(__fd);
  return iVar1;
}


// ==== __stack_chk_fail @ 00010a44 ====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00012fdc)();
  return;
}


// ==== unlink @ 00010a50 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_00012fe0)(__name);
  return iVar1;
}


// ==== malloc @ 00010a5c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00012fe4)(__size);
  return pvVar1;
}


// ==== snprintf @ 00010a68 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00012fe8)(__s);
  return iVar1;
}


// ==== EVP_md5 @ 00010a74 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_md5(void)

{
  EVP_MD *pEVar1;
  
  pEVar1 = (EVP_MD *)(*(code *)PTR_EVP_md5_00012fec)();
  return pEVar1;
}


// ==== EVP_DigestInit @ 00010a80 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EVP_DigestInit(EVP_MD_CTX *ctx,EVP_MD *type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_EVP_DigestInit_00012ff0)(ctx);
  return iVar1;
}


// ==== EVP_DigestUpdate @ 00010a8c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EVP_DigestUpdate(EVP_MD_CTX *ctx,void *d,size_t cnt)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_EVP_DigestUpdate_00012ff4)(ctx);
  return iVar1;
}


// ==== EVP_DigestFinal @ 00010a98 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EVP_DigestFinal(EVP_MD_CTX *ctx,uchar *md,uint *s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_EVP_DigestFinal_00012ff8)(ctx);
  return iVar1;
}


// ==== printf @ 00010aa4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00012ffc)(__format);
  return iVar1;
}


// ==== _FINI_0 @ 00010ab0 ====

void _FINI_0(void)

{
  __cxa_finalize(DAT_00010acc + 0x10ac4);
  return;
}


// ==== FUN_00010ad0 @ 00010ad0 ====

void FUN_00010ad0(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}


// ==== FUN_00010afc @ 00010afc ====

undefined4 FUN_00010afc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(DAT_00010b3c + 0x10b18,param_1,DAT_00010b40 + 0x10b28);
  return uVar1;
}


// ==== lockf @ 00010b44 ====

void lockf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00011098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_0001109c + 0x110a0))();
  return;
}


// ==== mkpath @ 00010b48 ====

undefined4 mkpath(char *param_1,__mode_t param_2)

{
  char *__path;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  __path = strdup(param_1);
  pcVar1 = strchr(__path + 1,0x2f);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      free(__path);
      return 0;
    }
    *pcVar1 = '\0';
    iVar2 = mkdir(__path,param_2);
    if ((iVar2 == -1) && (piVar3 = (int *)__errno(), *piVar3 != 0x11)) break;
    *pcVar1 = '/';
    pcVar1 = strchr(pcVar1 + 1,0x2f);
  }
  *pcVar1 = '/';
  free(__path);
  return 0xffffffff;
}


// ==== lab126_daemon_checksingleton @ 00010bb0 ====

void lab126_daemon_checksingleton(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  __pid_t _Var6;
  ssize_t sVar7;
  int *piVar8;
  int __errnum;
  int iVar9;
  undefined1 auStack_34 [16];
  int local_24;
  
  iVar9 = DAT_00010d6c + 0x10bc0;
  piVar8 = *(int **)(iVar9 + DAT_00010d70);
  local_24 = *piVar8;
  if (param_1 == (char *)0x0) {
    if (**(int **)(iVar9 + DAT_00010d74) << 6 < 0) {
      pcVar1 = strerror(0x16);
      iVar9 = DAT_00010d78 + 0x10be6;
LAB_00010c08:
      _llogmsg_print(0x2000000,iVar9,0x16,pcVar1);
    }
LAB_00010d52:
    __errnum = 0x16;
  }
  else {
    sVar2 = strlen(param_1);
    if (sVar2 == 0) {
      if (**(int **)(iVar9 + DAT_00010d74) << 6 < 0) {
        pcVar1 = strerror(0x16);
        iVar9 = DAT_00010d7c + 0x10c0a;
        goto LAB_00010c08;
      }
      goto LAB_00010d52;
    }
    iVar3 = mkpath(param_1,0x1a4);
    if (iVar3 == 0) {
      iVar3 = open(param_1,0x42,0x1a4);
      iVar5 = DAT_00010d74;
      if (iVar3 < 0) {
        piVar4 = (int *)__errno();
        __errnum = *piVar4;
        if (**(int **)(iVar9 + iVar5) << 6 < 0) {
          pcVar1 = strerror(__errnum);
          iVar9 = DAT_00010d84 + 0x10c78;
          goto LAB_00010c76;
        }
      }
      else {
        iVar5 = flock(iVar3,6);
        if (iVar5 < 0) {
          piVar4 = (int *)__errno();
          if ((*piVar4 == 0xd) || (*piVar4 == 0xb)) {
            if (**(int **)(iVar9 + DAT_00010d74) << 6 < 0) {
              pcVar1 = strerror(0x72);
              _llogmsg_print(0x2000000,DAT_00010d88 + 0x10cb6,0x72,pcVar1,param_1);
            }
            __errnum = 0x72;
          }
          else {
            if (**(int **)(iVar9 + DAT_00010d74) << 6 < 0) {
              pcVar1 = strerror(0x25);
              _llogmsg_print(0x2000000,DAT_00010d8c + 0x10cd6,0x25,pcVar1,param_1);
            }
            __errnum = 0x25;
          }
        }
        else {
          _Var6 = getpid();
          __sprintf_chk(auStack_34,0,0x10,DAT_00010d90 + 0x10cec,_Var6);
          sVar2 = __strlen_chk(auStack_34,0x10);
          sVar7 = write(iVar3,auStack_34,sVar2);
          iVar5 = __strlen_chk(auStack_34,0x10);
          if (sVar7 == iVar5) goto LAB_00010d56;
          piVar4 = (int *)__errno();
          __errnum = *piVar4;
          if (**(int **)(iVar9 + DAT_00010d74) << 6 < 0) {
            pcVar1 = strerror(__errnum);
            _llogmsg_print(0x2000000,DAT_00010d94 + 0x10d36,__errnum,pcVar1,param_1);
          }
          flock(iVar3,8);
        }
        close(iVar3);
      }
    }
    else {
      piVar4 = (int *)__errno();
      __errnum = *piVar4;
      if (**(int **)(iVar9 + DAT_00010d74) << 6 < 0) {
        pcVar1 = strerror(__errnum);
        iVar9 = DAT_00010d80 + 0x10c44;
LAB_00010c76:
        _llogmsg_print(0x2000000,iVar9,__errnum,pcVar1,param_1);
      }
    }
  }
  iVar3 = -__errnum;
LAB_00010d56:
  if (local_24 != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


// ==== lab126_daemon_cleansingleton @ 00010d98 ====

int lab126_daemon_cleansingleton(char *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_00010e34 + 0x10da4;
  if ((param_2 < 1) || (param_1 == (char *)0x0)) {
    if (**(int **)(iVar5 + DAT_00010e38) << 6 < 0) {
      pcVar3 = strerror(0x16);
      _llogmsg_print(0x2000000,DAT_00010e44 + 0x10e28,0x16,pcVar3,param_1,param_2,param_3);
    }
    iVar1 = 0x16;
    goto LAB_00010e2c;
  }
  iVar1 = close(param_2);
  if (iVar1 == 0) {
    iVar4 = unlink(param_1);
    iVar1 = 0;
    if (iVar4 == 0) goto LAB_00010e2c;
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (-1 < **(int **)(iVar5 + DAT_00010e38) << 6) goto LAB_00010e2c;
    pcVar3 = strerror(iVar1);
    iVar5 = DAT_00010e40 + 0x10e00;
  }
  else {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (-1 < **(int **)(iVar5 + DAT_00010e38) << 6) goto LAB_00010e2c;
    pcVar3 = strerror(iVar1);
    iVar5 = DAT_00010e3c + 0x10dd0;
  }
  _llogmsg_print(0x2000000,iVar5,iVar1,pcVar3,param_1,param_2,param_3);
LAB_00010e2c:
  return -iVar1;
}


// ==== lab126_hash_getfasthash @ 00010e48 ====

int lab126_hash_getfasthash(ushort *param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  
  if ((0 < (int)param_2) && (param_1 != (ushort *)0x0)) {
    uVar3 = param_2 & 3;
    uVar1 = param_2;
    puVar2 = param_1;
    for (uVar4 = (int)param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar1 = uVar1 + *puVar2 ^ (uint)puVar2[1] << 0xb ^ (uVar1 + *puVar2) * 0x10000;
      uVar1 = uVar1 + (uVar1 >> 0xb);
      puVar2 = puVar2 + 2;
    }
    uVar4 = (int)param_2 >> 2 & ~((int)param_2 >> 0x1f);
    if (uVar3 == 2) {
      uVar1 = uVar1 + param_1[uVar4 * 2] ^ (uVar1 + param_1[uVar4 * 2]) * 0x800;
      uVar1 = uVar1 + (uVar1 >> 0x11);
    }
    else if (uVar3 == 3) {
      uVar1 = uVar1 + param_1[uVar4 * 2] ^ (uint)(byte)param_1[uVar4 * 2 + 1] << 0x12 ^
              (uVar1 + param_1[uVar4 * 2]) * 0x10000;
      uVar1 = uVar1 + (uVar1 >> 0xb);
    }
    else if (uVar3 == 1) {
      uVar1 = uVar1 + (byte)param_1[uVar4 * 2];
      uVar1 = uVar1 ^ uVar1 * 0x400;
      uVar1 = uVar1 + (uVar1 >> 1);
    }
    uVar1 = uVar1 ^ uVar1 << 3;
    uVar1 = uVar1 + (uVar1 >> 5);
    uVar1 = uVar1 ^ uVar1 * 0x10;
    uVar1 = uVar1 + (uVar1 >> 0x11);
    uVar1 = uVar1 ^ uVar1 * 0x2000000;
    return uVar1 + (uVar1 >> 6);
  }
  return 0;
}


// ==== binToHexStr @ 00010ee4 ====

void * binToHexStr(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  void *pvVar3;
  int iVar4;
  char *__format;
  
  if (((param_1 != 0) && (0 < param_2)) && (pvVar3 = malloc(param_2 * 2 + 1), pvVar3 != (void *)0x0)
     ) {
    iVar4 = 0;
    __format = (char *)(DAT_00010f28 + 0x10f10);
    do {
      iVar1 = iVar4 * 2;
      pbVar2 = (byte *)(param_1 + iVar4);
      iVar4 = iVar4 + 1;
      snprintf((char *)((int)pvVar3 + iVar1),3,__format,(uint)*pbVar2);
    } while (iVar4 != param_2);
    return pvVar3;
  }
  return (void *)0x0;
}


// ==== getMD5Hash @ 00010f2c ====

uint getMD5Hash(int param_1,int param_2,uchar *param_3)

{
  EVP_MD *type;
  size_t cnt;
  int iVar1;
  char *__s;
  uint local_3c;
  EVP_MD_CTX EStack_38;
  
  iVar1 = 0;
  local_3c = 0;
  if (param_1 == 0) {
    local_3c = 0;
  }
  else if (param_2 < 1) {
    local_3c = 0;
  }
  else {
    type = EVP_md5();
    EVP_DigestInit(&EStack_38,type);
    do {
      __s = *(char **)(param_1 + iVar1 * 4);
      if (__s == (char *)0x0) break;
      iVar1 = iVar1 + 1;
      cnt = strlen(__s);
      EVP_DigestUpdate(&EStack_38,__s,cnt);
    } while (iVar1 != param_2);
    EVP_DigestFinal(&EStack_38,param_3,&local_3c);
  }
  return local_3c;
}


// ==== lab126_version_print @ 00010f84 ====

void lab126_version_print(void)

{
  undefined4 in_r3;
  
  printf((char *)(DAT_00010fc4 + 0x10f8c));
  printf((char *)(DAT_00010fc8 + 0x10f94));
  printf((char *)(DAT_00010fcc + 0x10f9e),DAT_00010fd0 + 0x10fa0);
  printf((char *)(DAT_00010fd4 + 0x10fae),4,8,0);
                    /* WARNING: Could not recover jumptable at 0x000110a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000110b0 + DAT_000110ac))
            (DAT_00010fd8 + 0x10fba,DAT_00010fdc + 0x10fbc,DAT_00010fe0 + 0x10fbe,in_r3);
  return;
}


// ==== lab126_version_getmajor @ 00010fe4 ====

undefined4 lab126_version_getmajor(void)

{
  return 0;
}


// ==== lab126_version_getminor @ 00010fe8 ====

undefined4 lab126_version_getminor(void)

{
  return 1;
}


// ==== lab126_version_getversion @ 00010fec ====

undefined * lab126_version_getversion(void)

{
  return &UNK_00010ff2 + DAT_00010ff4;
}


// ==== compareTimeSpec @ 00010ff8 ====

undefined4 compareTimeSpec(int param_1,int param_2,int param_3,int param_4)

{
  if (param_1 <= param_3) {
    if (param_1 < param_3) {
      return 0xffffffff;
    }
    if (param_2 <= param_4) {
      if (param_4 <= param_2) {
        return 0;
      }
      return 0xffffffff;
    }
  }
  return 1;
}


// ==== computeTimeDifferenceInMillis @ 0001102c ====

int computeTimeDifferenceInMillis(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_1 < param_3) || ((param_1 == param_3 && (param_2 <= param_4)))) {
    param_4 = 0;
    param_1 = 0;
  }
  else {
    param_1 = param_1 - param_3;
    if (param_2 < param_4) {
      param_1 = param_1 + -1;
      param_4 = (DAT_00011084 + param_2) - param_4;
    }
    else {
      param_4 = param_2 - param_4;
    }
    if (DAT_00011088 < param_1) {
      return -1;
    }
  }
  return param_1 * 1000 + param_4 / DAT_0001108c;
}


// ==== flock @ 00011090 ====

void flock(void)

{
                    /* WARNING: Could not recover jumptable at 0x00011098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_0001109c + 0x110a0))();
  return;
}


// ==== flock @ 00011094 ====

void flock(void)

{
                    /* WARNING: Could not recover jumptable at 0x00011098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_0001109c + 0x110a0))();
  return;
}


// ==== __cxa_finalize @ 00014000 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_atexit @ 00014004 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== flock @ 00014008 ====

/* WARNING: Control flow encountered bad instruction data */

void flock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr0 @ 0001400c ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strdup @ 00014010 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strchr @ 00014014 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== mkdir @ 00014018 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __errno @ 0001401c ====

/* WARNING: Control flow encountered bad instruction data */

void __errno(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== free @ 00014020 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strerror @ 00014024 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strlen @ 00014028 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _llogmsg_print @ 0001402c ====

/* WARNING: Control flow encountered bad instruction data */

void _llogmsg_print(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== open @ 00014030 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== getpid @ 00014034 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __sprintf_chk @ 00014038 ====

/* WARNING: Control flow encountered bad instruction data */

void __sprintf_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __strlen_chk @ 0001403c ====

/* WARNING: Control flow encountered bad instruction data */

void __strlen_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== write @ 00014040 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== close @ 00014044 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __stack_chk_fail @ 00014048 ====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== unlink @ 00014050 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== malloc @ 00014054 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== snprintf @ 00014058 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== EVP_md5 @ 0001405c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_MD * EVP_md5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== EVP_DigestInit @ 00014060 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EVP_DigestInit(EVP_MD_CTX *ctx,EVP_MD *type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== EVP_DigestUpdate @ 00014064 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EVP_DigestUpdate(EVP_MD_CTX *ctx,void *d,size_t cnt)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== EVP_DigestFinal @ 00014068 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EVP_DigestFinal(EVP_MD_CTX *ctx,uchar *md,uint *s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== printf @ 0001406c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr1 @ 00014070 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


