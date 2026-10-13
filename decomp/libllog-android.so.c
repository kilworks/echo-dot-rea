// libllog-android.so  functions=24

// ==== __cxa_finalize @ 0001038c ====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00011fec)();
  return;
}


// ==== __cxa_atexit @ 00010398 ====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00011ff0)();
  return;
}


// ==== free @ 000103a4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00011ff4)(__ptr);
  return;
}


// ==== strdup @ 000103b0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00011ff8)(__s);
  return pcVar1;
}


// ==== __android_log_vprint @ 000103bc ====

void __android_log_vprint(void)

{
  (*(code *)PTR___android_log_vprint_00011ffc)();
  return;
}


// ==== _FINI_0 @ 000103c8 ====

void _FINI_0(void)

{
  __cxa_finalize(DAT_000103e4 + 0x103dc);
  return;
}


// ==== FUN_000103e8 @ 000103e8 ====

void FUN_000103e8(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}


// ==== FUN_00010414 @ 00010414 ====

undefined4 FUN_00010414(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(DAT_00010454 + 0x10430,param_1,DAT_00010458 + 0x10440);
  return uVar1;
}


// ==== _llog_set_ident @ 0001045c ====

void _llog_set_ident(char *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_0001047c + 0x10466);
  free((void *)*puVar2);
  if (param_1 != (char *)0x0) {
    pcVar1 = strdup(param_1);
    *puVar2 = pcVar1;
    return;
  }
  *puVar2 = 0;
  return;
}


// ==== _llogmsg_print @ 00010480 ====

void _llogmsg_print(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((int)(param_1 << 5) < 0) {
    uVar1 = 7;
  }
  else if ((int)(param_1 << 6) < 0) {
    uVar1 = 6;
  }
  else if ((int)(param_1 << 7) < 0) {
    uVar1 = 5;
  }
  else if ((param_1 & 0xff0000) == 0) {
    if ((param_1 & 0xfffe) == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 4;
  }
  uStack_8 = param_3;
  uStack_4 = param_4;
  __android_log_vprint(uVar1,*(undefined4 *)(DAT_000104d4 + 0x104c2),param_2,&uStack_8,param_1);
  return;
}


// ==== __cxa_finalize @ 00013000 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_atexit @ 00013004 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== free @ 00013008 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strdup @ 0001300c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr0 @ 00013010 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __android_log_vprint @ 00013014 ====

/* WARNING: Control flow encountered bad instruction data */

void __android_log_vprint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr1 @ 00013018 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


