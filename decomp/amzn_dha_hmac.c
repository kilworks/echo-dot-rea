// amzn_dha_hmac  functions=33

// ==== FUN_00100780 @ 00100780 ====

void FUN_00100780(void)

{
  (*(code *)PTR_00110f80)();
  return;
}


// ==== puts @ 001007a0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00110f88)((int)__s);
  return iVar1;
}


// ==== __stack_chk_fail @ 001007b0 ====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00110f90)();
  return;
}


// ==== __libc_init @ 001007c0 ====

void __libc_init(void)

{
  (*(code *)PTR___libc_init_00110f98)();
  return;
}


// ==== hw_get_module_by_class @ 001007d0 ====

void hw_get_module_by_class(void)

{
  (*(code *)PTR_hw_get_module_by_class_00110fa0)();
  return;
}


// ==== property_set @ 001007e0 ====

void property_set(void)

{
  (*(code *)PTR_property_set_00110fa8)();
  return;
}


// ==== __cxa_atexit @ 001007f0 ====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00110fb0)();
  return;
}


// ==== sprintf @ 00100800 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00110fb8)((int)__s);
  return iVar1;
}


// ==== exit @ 00100810 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00110fc0)(__status);
  return;
}


// ==== free @ 00100820 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00110fc8)();
  return;
}


// ==== main @ 00100830 ====

void main(void)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  char *__s;
  long local_a8;
  long local_a0;
  void *local_98;
  ulong local_90;
  char local_88 [128];
  long local_8;
  
  local_a0 = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00110fd8;
  iVar2 = hw_get_module_by_class("amzn_dha",0,&local_a8);
  if (iVar2 != 0) {
    puts("Unable to locate amzn_dha module");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  iVar2 = (*(code *)**(undefined8 **)(local_a8 + 0x20))(local_a8,"amzn_dha",&local_a0);
  if (iVar2 == 0) {
    local_98 = (void *)0x0;
    local_90 = 0;
    local_88[0x30] = '\0';
    local_88[0x31] = '\0';
    local_88[0x32] = '\0';
    local_88[0x33] = '\0';
    local_88[0x34] = '\0';
    local_88[0x35] = '\0';
    local_88[0x36] = '\0';
    local_88[0x37] = '\0';
    local_88[0x38] = '\0';
    local_88[0x39] = '\0';
    local_88[0x3a] = '\0';
    local_88[0x3b] = '\0';
    local_88[0x3c] = '\0';
    local_88[0x3d] = '\0';
    local_88[0x3e] = '\0';
    local_88[0x3f] = '\0';
    local_88[0x40] = '\0';
    local_88[0x41] = '\0';
    local_88[0x42] = '\0';
    local_88[0x43] = '\0';
    local_88[0x44] = '\0';
    local_88[0x45] = '\0';
    local_88[0x46] = '\0';
    local_88[0x47] = '\0';
    local_88[0x48] = '\0';
    local_88[0x49] = '\0';
    local_88[0x4a] = '\0';
    local_88[0x4b] = '\0';
    local_88[0x4c] = '\0';
    local_88[0x4d] = '\0';
    local_88[0x4e] = '\0';
    local_88[0x4f] = '\0';
    local_88[0x50] = '\0';
    local_88[0x51] = '\0';
    local_88[0x52] = '\0';
    local_88[0x53] = '\0';
    local_88[0x54] = '\0';
    local_88[0x55] = '\0';
    local_88[0x56] = '\0';
    local_88[0x57] = '\0';
    local_88[0x58] = '\0';
    local_88[0x59] = '\0';
    local_88[0x5a] = '\0';
    local_88[0x5b] = '\0';
    local_88[0x5c] = '\0';
    local_88[0x5d] = '\0';
    local_88[0x5e] = '\0';
    local_88[0x5f] = '\0';
    local_88[0x60] = '\0';
    local_88[0x61] = '\0';
    local_88[0x62] = '\0';
    local_88[99] = '\0';
    local_88[100] = '\0';
    local_88[0x65] = '\0';
    local_88[0x66] = '\0';
    local_88[0x67] = '\0';
    local_88[0x68] = '\0';
    local_88[0x69] = '\0';
    local_88[0x6a] = '\0';
    local_88[0x6b] = '\0';
    local_88[0x6c] = '\0';
    local_88[0x6d] = '\0';
    local_88[0x6e] = '\0';
    local_88[0x6f] = '\0';
    local_88[0x70] = '\0';
    local_88[0x71] = '\0';
    local_88[0x72] = '\0';
    local_88[0x73] = '\0';
    local_88[0x74] = '\0';
    local_88[0x75] = '\0';
    local_88[0x76] = '\0';
    local_88[0x77] = '\0';
    local_88[0x78] = '\0';
    local_88[0x79] = '\0';
    local_88[0x7a] = '\0';
    local_88[0x7b] = '\0';
    local_88[0x7c] = '\0';
    local_88[0x7d] = '\0';
    local_88[0x7e] = '\0';
    local_88[0x7f] = '\0';
    local_88[0] = '\0';
    local_88[1] = '\0';
    local_88[2] = '\0';
    local_88[3] = '\0';
    local_88[4] = '\0';
    local_88[5] = '\0';
    local_88[6] = '\0';
    local_88[7] = '\0';
    local_88[8] = '\0';
    local_88[9] = '\0';
    local_88[10] = '\0';
    local_88[0xb] = '\0';
    local_88[0xc] = '\0';
    local_88[0xd] = '\0';
    local_88[0xe] = '\0';
    local_88[0xf] = '\0';
    local_88[0x10] = '\0';
    local_88[0x11] = '\0';
    local_88[0x12] = '\0';
    local_88[0x13] = '\0';
    local_88[0x14] = '\0';
    local_88[0x15] = '\0';
    local_88[0x16] = '\0';
    local_88[0x17] = '\0';
    local_88[0x18] = '\0';
    local_88[0x19] = '\0';
    local_88[0x1a] = '\0';
    local_88[0x1b] = '\0';
    local_88[0x1c] = '\0';
    local_88[0x1d] = '\0';
    local_88[0x1e] = '\0';
    local_88[0x1f] = '\0';
    local_88[0x20] = '\0';
    local_88[0x21] = '\0';
    local_88[0x22] = '\0';
    local_88[0x23] = '\0';
    local_88[0x24] = '\0';
    local_88[0x25] = '\0';
    local_88[0x26] = '\0';
    local_88[0x27] = '\0';
    local_88[0x28] = '\0';
    local_88[0x29] = '\0';
    local_88[0x2a] = '\0';
    local_88[0x2b] = '\0';
    local_88[0x2c] = '\0';
    local_88[0x2d] = '\0';
    local_88[0x2e] = '\0';
    local_88[0x2f] = '\0';
    iVar2 = (**(code **)(local_a0 + 0xa0))(local_a0,1,&local_98,&local_90);
    if ((iVar2 == 0) && (local_90 == 0x20)) {
      uVar3 = 0;
      __s = local_88;
      do {
        pbVar1 = (byte *)((long)local_98 + uVar3);
        uVar3 = uVar3 + 1;
        iVar2 = sprintf(__s,"%02x",(ulong)*pbVar1);
        __s = __s + iVar2;
      } while (uVar3 < local_90);
      puts(local_88);
      property_set("ro.amzn_dha.hmac",local_88);
      free(local_98);
    }
    if (local_a0 != 0) {
      (**(code **)(local_a0 + 0x70))();
    }
    if (local_8 == *(long *)PTR___stack_chk_guard_00110fd8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  puts("Failed to load amzn_dha module");
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


// ==== FUN_001009ac @ 001009ac ====

void FUN_001009ac(undefined8 param_1)

{
  undefined *local_18;
  undefined *local_10;
  undefined *local_8;
  
  local_18 = PTR___PREINIT_ARRAY___00110ff8;
  local_10 = PTR___INIT_ARRAY___00110fe8;
  local_8 = PTR___FINI_ARRAY___00110fe0;
  __libc_init(param_1,0,PTR_main_00110ff0,&local_18);
  FUN_001009ac(&stack0xffffffffffffffc0);
  return;
}


// ==== entry @ 00100a00 ====

void entry(void)

{
  FUN_001009ac(&stack0x00000000);
  return;
}


// ==== FUN_00100a08 @ 00100a08 ====

void FUN_00100a08(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}


// ==== FUN_00100a30 @ 00100a30 ====

void FUN_00100a30(undefined8 param_1)

{
  __cxa_atexit(FUN_00100a08,param_1,&DAT_00111000);
  return;
}


// ==== puts @ 00112008 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __stack_chk_fail @ 00112010 ====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __libc_init @ 00112018 ====

/* WARNING: Control flow encountered bad instruction data */

void __libc_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== hw_get_module_by_class @ 00112020 ====

/* WARNING: Control flow encountered bad instruction data */

void hw_get_module_by_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== property_set @ 00112028 ====

/* WARNING: Control flow encountered bad instruction data */

void property_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_atexit @ 00112030 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== sprintf @ 00112038 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== exit @ 00112040 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== free @ 00112048 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


