// alexaspeechplayer  functions=318

// ==== __libc_init @ 00013d7c ====

void __libc_init(void)

{
  (*(code *)PTR___libc_init_0001bf34)();
  return;
}


// ==== __cxa_atexit @ 00013d88 ====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0001bf38)();
  return;
}


// ==== operator.delete @ 00013d94 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0001bf3c)(param_1);
  return;
}


// ==== __cxa_end_cleanup @ 00013da0 ====

void __cxa_end_cleanup(void)

{
  (*(code *)PTR___cxa_end_cleanup_0001bf40)();
  return;
}


// ==== __cxa_call_unexpected @ 00013dac ====

void __cxa_call_unexpected(void)

{
  (*(code *)PTR___cxa_call_unexpected_0001bf44)();
  return;
}


// ==== allocator @ 00013dc4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
  (*(code *)PTR_allocator_0001bf4c)();
  return;
}


// ==== string @ 00013dd0 ====

void __thiscall std::string::string(string *this,char *param_1,allocator *param_2)

{
  (*(code *)PTR_string_0001bf50)(this);
  return;
}


// ==== runtime_error @ 00013ddc ====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,string *param_1)

{
  (*(code *)PTR_runtime_error_0001bf54)(this);
  return;
}


// ==== ~string @ 00013de8 ====

void __thiscall std::string::~string(string *this)

{
  (*(code *)PTR__string_0001bf58)(this);
  return;
}


// ==== ~allocator @ 00013df4 ====

void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_0001bf5c)(this);
  return;
}


// ==== string @ 00013e00 ====

void __thiscall std::string::string(string *this)

{
  (*(code *)PTR_string_0001bf60)(this);
  return;
}


// ==== ~runtime_error @ 00013e0c ====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_0001bf64)(this);
  return;
}


// ==== empty @ 00013e18 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::empty(void)

{
  (*(code *)PTR_empty_0001bf68)();
  return;
}


// ==== what @ 00013e24 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
  (*(code *)PTR_what_0001bf6c)();
  return;
}


// ==== operator= @ 00013e30 ====

void __thiscall std::string::operator=(string *this,char *param_1)

{
  (*(code *)PTR_operator__0001bf70)(this);
  return;
}


// ==== operator+= @ 00013e3c ====

void __thiscall std::string::operator+=(string *this,char *param_1)

{
  (*(code *)PTR_operator___0001bf74)(this);
  return;
}


// ==== operator+= @ 00013e48 ====

void __thiscall std::string::operator+=(string *this,string *param_1)

{
  (*(code *)PTR_operator___0001bf78)(this);
  return;
}


// ==== c_str @ 00013e54 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::c_str(void)

{
  (*(code *)PTR_c_str_0001bf7c)();
  return;
}


// ==== __cxa_begin_catch @ 00013e60 ====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_0001bf80)();
  return;
}


// ==== __cxa_end_catch @ 00013e6c ====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_0001bf84)();
  return;
}


// ==== string @ 00013e78 ====

void __thiscall std::string::string(string *this,string *param_1)

{
  (*(code *)PTR_string_0001bf88)(this);
  return;
}


// ==== ~exception @ 00013e84 ====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0001bf8c)(this);
  return;
}


// ==== ~bad_alloc @ 00013e90 ====

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  (*(code *)PTR__bad_alloc_0001bf90)(this);
  return;
}


// ==== ~bad_exception @ 00013e9c ====

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  (*(code *)PTR__bad_exception_0001bf94)(this);
  return;
}


// ==== system_category @ 00013ea8 ====

void __thiscall boost::system::system_category(system *this)

{
  (*(code *)PTR_system_category_0001bf98)(this);
  return;
}


// ==== __cxa_guard_acquire @ 00013eb4 ====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_0001bf9c)();
  return;
}


// ==== __cxa_guard_release @ 00013ec0 ====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0001bfa0)();
  return;
}


// ==== __aeabi_atexit @ 00013ecc ====

void __aeabi_atexit(void)

{
  (*(code *)PTR___aeabi_atexit_0001bfa4)();
  return;
}


// ==== pthread_key_create @ 00013ed8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_create_0001bfa8)(__key);
  return iVar1;
}


// ==== lab126_daemon_checksingleton @ 00013ee4 ====

void lab126_daemon_checksingleton(void)

{
  (*(code *)PTR_lab126_daemon_checksingleton_0001bfac)();
  return;
}


// ==== lab126_daemon_cleansingleton @ 00013ef0 ====

void lab126_daemon_cleansingleton(void)

{
  (*(code *)PTR_lab126_daemon_cleansingleton_0001bfb0)();
  return;
}


// ==== exit @ 00013efc ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0001bfb4)(__status);
  return;
}


// ==== _llog_set_ident @ 00013f08 ====

void _llog_set_ident(void)

{
  (*(code *)PTR__llog_set_ident_0001bfb8)();
  return;
}


// ==== _llogmsg_print @ 00013f14 ====

void _llogmsg_print(void)

{
  (*(code *)PTR__llogmsg_print_0001bfbc)();
  return;
}


// ==== gst_init @ 00013f20 ====

void gst_init(void)

{
  (*(code *)PTR_gst_init_0001bfc0)();
  return;
}


// ==== AlexaSpeechPlayer @ 00013f2c ====

void __thiscall
AlexaSpeechPlayer::AlexaSpeechPlayer::AlexaSpeechPlayer(AlexaSpeechPlayer *this,bool param_1)

{
  (*(code *)PTR_AlexaSpeechPlayer_0001bfc4)(this,param_1);
  return;
}


// ==== initialize @ 00013f38 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AlexaSpeechPlayer::AlexaSpeechPlayer::initialize(void)

{
  (*(code *)PTR_initialize_0001bfc8)();
  return;
}


// ==== pause @ 00013f44 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pause(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pause_0001bfcc)();
  return iVar1;
}


// ==== ~AlexaSpeechPlayer @ 00013f50 ====

void __thiscall AlexaSpeechPlayer::AlexaSpeechPlayer::~AlexaSpeechPlayer(AlexaSpeechPlayer *this)

{
  (*(code *)PTR__AlexaSpeechPlayer_0001bfd0)(this);
  return;
}


// ==== operator.new @ 00013f5c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0001bfd4)(param_1);
  return pvVar1;
}


// ==== __cxa_guard_abort @ 00013f68 ====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_0001bfd8)();
  return;
}


// ==== __cxa_allocate_exception @ 00013f74 ====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_0001bfdc)();
  return;
}


// ==== __cxa_throw @ 00013f80 ====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0001bfe0)();
  return;
}


// ==== __cxa_free_exception @ 00013f8c ====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_0001bfe4)();
  return;
}


// ==== pthread_key_delete @ 00013f98 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_delete_0001bfe8)(__key);
  return iVar1;
}


// ==== __cxa_rethrow @ 00013fa4 ====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_0001bfec)();
  return;
}


// ==== Init @ 00013fd4 ====

void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_0001bffc)(this);
  return;
}


// ==== entry @ 00013fe0 ====

/* WARNING: Control flow encountered bad instruction data */

void processEntry entry(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = iRam00014044 + 0x13ff8;
  local_18 = *(undefined4 *)(iVar1 + DAT_00014048);
  local_14 = *(undefined4 *)(iVar1 + DAT_0001404c);
  local_10 = *(undefined4 *)(iVar1 + DAT_00014050);
  __libc_init(&stack0x00000000,0,*(undefined4 *)(iVar1 + DAT_00014054),&local_18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00014058 @ 00014058 ====

void FUN_00014058(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}


// ==== FUN_00014084 @ 00014084 ====

undefined4 FUN_00014084(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(DAT_000140c4 + 0x140a0,param_1,DAT_000140c8 + 0x140b0);
  return uVar1;
}


// ==== FUN_000140cc @ 000140cc ====

int * FUN_000140cc(int *param_1)

{
  *param_1 = *(int *)(DAT_0001410c + 0x140e8 + DAT_00014110) + 8;
  return param_1;
}


// ==== FUN_00014114 @ 00014114 ====

int * FUN_00014114(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001415c + 0x14130;
  FUN_000140cc(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00014160) + 8;
  return param_1;
}


// ==== FUN_00014164 @ 00014164 ====

int * FUN_00014164(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000141ac + 0x14180;
  FUN_000140cc(param_1);
  *param_1 = *(int *)(iVar1 + DAT_000141b0) + 8;
  return param_1;
}


// ==== FUN_000141b4 @ 000141b4 ====

undefined4 FUN_000141b4(undefined4 param_1)

{
  return param_1;
}


// ==== FUN_000141d8 @ 000141d8 ====

/* WARNING: Removing unreachable block (ram,0x00014218) */

int * FUN_000141d8(int *param_1)

{
  *param_1 = *(int *)(DAT_00014230 + 0x141f4 + DAT_00014234) + 8;
  FUN_000141b4(param_1);
  return param_1;
}


// ==== FUN_00014238 @ 00014238 ====

void * FUN_00014238(void *param_1)

{
  FUN_000141d8(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00014268 @ 00014268 ====

bool FUN_00014268(int param_1,int param_2)

{
  return param_1 == param_2;
}


// ==== FUN_000142a4 @ 000142a4 ====

undefined4 * FUN_000142a4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}


// ==== FUN_000142e8 @ 000142e8 ====

undefined4 FUN_000142e8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_1[1] == param_2[1]) && (*param_1 == *param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_00014348 @ 00014348 ====

undefined4 FUN_00014348(undefined4 *param_1)

{
  return *param_1;
}


// ==== FUN_00014370 @ 00014370 ====

undefined4 FUN_00014370(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ==== FUN_00014398 @ 00014398 ====

undefined4 FUN_00014398(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(code **)(**(int **)(param_2 + 4) + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar1 = FUN_00014348(param_2);
  (*pcVar2)(param_1,uVar3,uVar1);
  return param_1;
}


// ==== FUN_00014408 @ 00014408 ====

int FUN_00014408(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_00014448 + 0x14434;
  }
  return iVar1;
}


// ==== FUN_0001444c @ 0001444c ====

undefined4 FUN_0001444c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000142a4(param_1,param_3,param_2);
  return param_1;
}


// ==== FUN_00014480 @ 00014480 ====

undefined4 FUN_00014480(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_10 [8];
  
  (**(code **)(*param_1 + 0x10))(auStack_10,param_1,param_2);
  uVar1 = FUN_000142e8(auStack_10,param_3);
  return uVar1;
}


// ==== FUN_000144dc @ 000144dc ====

undefined4 FUN_000144dc(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00014370(param_2);
  iVar2 = FUN_00014268(param_1,uVar1);
  if ((iVar2 == 0) || (iVar2 = FUN_00014348(param_2), iVar2 != param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_00014548 @ 00014548 ====

undefined4 * FUN_00014548(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}


// ==== FUN_0001457c @ 0001457c ====

int * FUN_0001457c(int *param_1)

{
  *param_1 = *(int *)(DAT_000145ec + 0x14598 + DAT_000145f0) + 8;
  FUN_00014ae0(param_1 + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = -1;
  return param_1;
}


// ==== ~exception @ 000145f4 ====

/* WARNING: Removing unreachable block (ram,0x0001463c) */
/* boost::exception::~exception() */

exception * __thiscall boost::exception::~exception(exception *this)

{
  *(int *)this = *(int *)(DAT_00014674 + 0x14610 + DAT_00014678) + 8;
  FUN_00015f60(this + 4);
  return this;
}


// ==== ~exception @ 0001467c ====

/* boost::exception::~exception() */

exception * __thiscall boost::exception::~exception(exception *this)

{
  ~exception(this);
  operator_delete(this);
  return this;
}


// ==== FUN_000146ac @ 000146ac ====

/* WARNING: Removing unreachable block (ram,0x000146e4) */

int * FUN_000146ac(int *param_1)

{
  *param_1 = *(int *)(DAT_000146fc + 0x146c8 + DAT_00014700) + 8;
  return param_1;
}


// ==== FUN_00014704 @ 00014704 ====

void * FUN_00014704(void *param_1)

{
  FUN_000146ac(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00014734 @ 00014734 ====

void FUN_00014734(int param_1,int param_2)

{
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  int *local_c;
  
  FUN_00014ae0(auStack_14);
  local_c = (int *)FUN_00014348(param_2 + 4);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 0x14))(auStack_10,local_c);
    FUN_00015f88(auStack_14,auStack_10);
    FUN_00015f60(auStack_10);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_00015f88(param_1 + 4,auStack_14);
  FUN_00015f60(auStack_14);
  return;
}


// ==== FUN_00014838 @ 00014838 ====

void FUN_00014838(void)

{
  return;
}


// ==== FUN_00014854 @ 00014854 ====

void FUN_00014854(int *param_1)

{
  bool bVar1;
  
  DataMemoryBarrier(0xf);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + 1;
  DataMemoryBarrier(0xf);
  return;
}


// ==== FUN_00014890 @ 00014890 ====

int FUN_00014890(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xf);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  DataMemoryBarrier(0xf);
  return iVar2;
}


// ==== FUN_000148d4 @ 000148d4 ====

int * FUN_000148d4(int *param_1)

{
  *param_1 = *(int *)(DAT_0001492c + 0x148f0 + DAT_00014930) + 8;
  param_1[1] = 1;
  param_1[2] = 1;
  return param_1;
}


// ==== FUN_00014934 @ 00014934 ====

/* WARNING: Removing unreachable block (ram,0x0001496c) */

int * FUN_00014934(int *param_1)

{
  *param_1 = *(int *)(DAT_00014984 + 0x14950 + DAT_00014988) + 8;
  return param_1;
}


// ==== FUN_0001498c @ 0001498c ====

void * FUN_0001498c(void *param_1)

{
  FUN_00014934(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000149bc @ 000149bc ====

void FUN_000149bc(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}


// ==== FUN_000149f8 @ 000149f8 ====

void FUN_000149f8(int param_1)

{
  FUN_00014854(param_1 + 4);
  return;
}


// ==== FUN_00014a20 @ 00014a20 ====

void FUN_00014a20(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00014890(param_1 + 1);
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_00014a84(param_1);
  }
  return;
}


// ==== FUN_00014a84 @ 00014a84 ====

void FUN_00014a84(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00014890(param_1 + 2);
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  return;
}


// ==== FUN_00014ae0 @ 00014ae0 ====

undefined4 * FUN_00014ae0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}


// ==== FUN_00014b10 @ 00014b10 ====

int * FUN_00014b10(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00014a20(*param_1);
  }
  return param_1;
}


// ==== FUN_00014b50 @ 00014b50 ====

int * FUN_00014b50(int *param_1,int *param_2)

{
  *param_1 = *param_2;
  if (*param_1 != 0) {
    FUN_000149f8(*param_1);
  }
  return param_1;
}


// ==== FUN_00014ba4 @ 00014ba4 ====

void FUN_00014ba4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_2 = *param_1;
  *param_1 = uVar1;
  return;
}


// ==== FUN_00014bec @ 00014bec ====

void FUN_00014bec(void)

{
  return;
}


// ==== FUN_00014c00 @ 00014c00 ====

runtime_error *
FUN_00014c00(runtime_error *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  allocator aaStack_18 [4];
  string asStack_14 [4];
  
  iVar1 = DAT_00014cf0 + 0x14c28;
  std::allocator<char>::allocator();
  std::string::string(asStack_14,param_4,aaStack_18);
  std::runtime_error::runtime_error(param_1,asStack_14);
  std::string::~string(asStack_14);
  std::allocator<char>::~allocator((allocator<char> *)aaStack_18);
  *(int *)param_1 = *(int *)(iVar1 + DAT_00014cf4) + 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  std::string::string((string *)(param_1 + 0x10));
  return param_1;
}


// ==== FUN_00014cf8 @ 00014cf8 ====

/* WARNING: Removing unreachable block (ram,0x00014d4c) */

runtime_error * FUN_00014cf8(runtime_error *param_1)

{
  *(int *)param_1 = *(int *)(DAT_00014d98 + 0x14d14 + DAT_00014d9c) + 8;
  std::string::~string((string *)(param_1 + 0x10));
  std::runtime_error::~runtime_error(param_1);
  return param_1;
}


// ==== FUN_00014da0 @ 00014da0 ====

void * FUN_00014da0(void *param_1)

{
  FUN_00014cf8(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== what @ 00014dd0 ====

/* boost::system::system_error::what() const */

undefined4 __thiscall boost::system::system_error::what(system_error *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  string asStack_14 [8];
  
  iVar2 = std::string::empty();
  if (iVar2 != 0) {
    pcVar3 = (char *)std::runtime_error::what();
    std::string::operator=((string *)(this + 0x10),pcVar3);
    cVar1 = std::string::empty();
    if (cVar1 != '\x01') {
      std::string::operator+=((string *)(this + 0x10),(char *)(DAT_00014f1c + 0x14e5c));
    }
    FUN_00014398(asStack_14,this + 8);
    std::string::operator+=((string *)(this + 0x10),asStack_14);
    std::string::~string(asStack_14);
  }
  uVar4 = std::string::c_str();
  return uVar4;
}


// ==== exception @ 00014f20 ====

/* std::exception::exception(std::exception const&) */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(int *)this = *(int *)(DAT_00014f64 + 0x14f40 + DAT_00014f68) + 8;
  return this;
}


// ==== bad_alloc @ 00014f6c ====

/* std::bad_alloc::bad_alloc(std::bad_alloc const&) */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,bad_alloc *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00014fc0 + 0x14f8c;
  exception::exception((exception *)this,(exception *)param_1);
  *(int *)this = *(int *)(iVar1 + DAT_00014fc4) + 8;
  return this;
}


// ==== runtime_error @ 00014fc8 ====

/* std::runtime_error::runtime_error(std::runtime_error const&) */

runtime_error * __thiscall
std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001504c + 0x14fe8;
  exception::exception((exception *)this,(exception *)param_1);
  *(int *)this = *(int *)(iVar1 + DAT_00015050) + 8;
  std::string::string((string *)(this + 4),(string *)(param_1 + 4));
  return this;
}


// ==== FUN_00015054 @ 00015054 ====

int FUN_00015054(int param_1)

{
  FUN_00014b10(param_1 + 4);
  return param_1;
}


// ==== FUN_00015084 @ 00015084 ====

undefined4 * FUN_00015084(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00014b50(param_1 + 1,param_2 + 1);
  return param_1;
}


// ==== FUN_000150d4 @ 000150d4 ====

undefined4 FUN_000150d4(undefined4 param_1,undefined4 param_2)

{
  FUN_00015084(param_1,param_2);
  return param_1;
}


// ==== FUN_00015108 @ 00015108 ====

/* WARNING: Removing unreachable block (ram,0x00015170) */

exception * FUN_00015108(exception *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015188 + 0x15124;
  *(int *)param_1 = *(int *)(iVar1 + DAT_0001518c) + 8;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_0001518c) + 0x18;
  std::bad_alloc::~bad_alloc((bad_alloc *)(param_1 + 0x14));
  boost::exception::~exception(param_1);
  return param_1;
}


// ==== FUN_00015198 @ 00015198 ====

void * FUN_00015198(void *param_1)

{
  FUN_00015108(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000151d0 @ 000151d0 ====

/* WARNING: Removing unreachable block (ram,0x00015238) */

exception * FUN_000151d0(exception *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015250 + 0x151ec;
  *(int *)param_1 = *(int *)(iVar1 + DAT_00015254) + 8;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00015254) + 0x18;
  std::bad_exception::~bad_exception((bad_exception *)(param_1 + 0x14));
  boost::exception::~exception(param_1);
  return param_1;
}


// ==== FUN_00015260 @ 00015260 ====

void * FUN_00015260(void *param_1)

{
  FUN_000151d0(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== exception @ 00015298 ====

/* boost::exception::exception(boost::exception const&) */

exception * __thiscall boost::exception::exception(exception *this,exception *param_1)

{
  *(int *)this = *(int *)(DAT_00015324 + 0x152b8 + DAT_00015328) + 8;
  FUN_000160e8(this + 4,param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}


// ==== FUN_0001532c @ 0001532c ====

undefined4 FUN_0001532c(undefined4 param_1)

{
  FUN_00015054(param_1);
  return param_1;
}


// ==== FUN_00015358 @ 00015358 ====

undefined4 FUN_00015358(undefined4 param_1,undefined4 param_2)

{
  FUN_00015084(param_1,param_2);
  return param_1;
}


// ==== FUN_00015390 @ 00015390 ====

void FUN_00015390(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00014408(param_1);
  if (iVar1 != 0) {
    FUN_000153dc(param_1,param_2);
  }
  return;
}


// ==== FUN_000153dc @ 000153dc ====

undefined4 FUN_000153dc(undefined4 *param_1,undefined4 param_2)

{
  system *this;
  undefined4 uVar1;
  undefined1 auStack_1c [20];
  
  FUN_00014c00(auStack_1c,*param_1,param_1[1],param_2);
  FUN_00016af0(auStack_1c);
  FUN_00014cf8(auStack_1c);
  this = (system *)__cxa_end_cleanup();
  uVar1 = boost::system::system_category(this);
  return uVar1;
}


// ==== FUN_00015428 @ 00015428 ====

undefined4 FUN_00015428(system *param_1)

{
  undefined4 uVar1;
  
  uVar1 = boost::system::system_category(param_1);
  return uVar1;
}


// ==== FUN_0001546c @ 0001546c ====

string * FUN_0001546c(string *param_1,undefined4 param_2,int param_3)

{
  allocator aaStack_c [4];
  
  if (param_3 == 1) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015628 + 0x154b0),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 2) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_0001562c + 0x154f4),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 4) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015630 + 0x15538),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 3) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015634 + 0x1557c),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015638 + 0x155b4),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  return param_1;
}


// ==== FUN_0001563c @ 0001563c ====

int * FUN_0001563c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015680 + 0x15658;
  FUN_000141b4(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00015684) + 8;
  return param_1;
}


// ==== FUN_00015688 @ 00015688 ====

int * FUN_00015688(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000156d0 + 0x156a4;
  FUN_0001563c(param_1);
  *param_1 = *(int *)(iVar1 + DAT_000156d4) + 8;
  return param_1;
}


// ==== FUN_000156d8 @ 000156d8 ====

undefined4 FUN_000156d8(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = DAT_00015784 + 0x156ec;
  if (((**(uint **)(iVar2 + DAT_00015788) & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(*(undefined4 *)(iVar2 + DAT_00015788)), iVar1 != 0)) {
    FUN_00015688(*(undefined4 *)(iVar2 + DAT_0001578c));
    __cxa_guard_release(*(undefined4 *)(iVar2 + DAT_00015788));
    __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_0001578c),DAT_00015790 + 0x15764,
                   DAT_00015794 + 0x15770,DAT_00015794 + 0x15770,in_r3);
  }
  return *(undefined4 *)(iVar2 + DAT_0001578c);
}


// ==== FUN_000157c4 @ 000157c4 ====

string * FUN_000157c4(string *param_1,undefined4 param_2,int param_3)

{
  allocator aaStack_c [4];
  
  if (param_3 == 9) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_000158d8 + 0x15808),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 10) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_000158dc + 0x1584c),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_000158e0 + 0x15884),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  return param_1;
}


// ==== FUN_000158e4 @ 000158e4 ====

int * FUN_000158e4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001592c + 0x15900;
  FUN_0001563c(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00015930) + 8;
  return param_1;
}


// ==== FUN_00015934 @ 00015934 ====

undefined4 FUN_00015934(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = DAT_000159e0 + 0x15948;
  if (((**(uint **)(iVar2 + DAT_000159e4) & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(*(undefined4 *)(iVar2 + DAT_000159e4)), iVar1 != 0)) {
    FUN_000158e4(*(undefined4 *)(iVar2 + DAT_000159e8));
    __cxa_guard_release(*(undefined4 *)(iVar2 + DAT_000159e4));
    __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_000159e8),DAT_000159ec + 0x159c0,
                   DAT_000159f0 + 0x159cc,DAT_000159f0 + 0x159cc,in_r3);
  }
  return *(undefined4 *)(iVar2 + DAT_000159e8);
}


// ==== FUN_00015a20 @ 00015a20 ====

string * FUN_00015a20(string *param_1,undefined4 param_2,int param_3)

{
  allocator aaStack_c [4];
  
  if (param_3 == 1) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015bdc + 0x15a64),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 2) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015be0 + 0x15aa8),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 3) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015be4 + 0x15aec),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 4) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015be8 + 0x15b30),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015bec + 0x15b68),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  return param_1;
}


// ==== FUN_00015bf0 @ 00015bf0 ====

int * FUN_00015bf0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015c38 + 0x15c0c;
  FUN_0001563c(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00015c3c) + 8;
  return param_1;
}


// ==== FUN_00015c40 @ 00015c40 ====

undefined4 FUN_00015c40(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = DAT_00015cec + 0x15c54;
  if (((**(uint **)(iVar2 + DAT_00015cf0) & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(*(undefined4 *)(iVar2 + DAT_00015cf0)), iVar1 != 0)) {
    FUN_00015bf0(*(undefined4 *)(iVar2 + DAT_00015cf4));
    __cxa_guard_release(*(undefined4 *)(iVar2 + DAT_00015cf0));
    __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00015cf4),DAT_00015cf8 + 0x15ccc,
                   DAT_00015cfc + 0x15cd8,DAT_00015cfc + 0x15cd8,in_r3);
  }
  return *(undefined4 *)(iVar2 + DAT_00015cf4);
}


// ==== FUN_00015d00 @ 00015d00 ====

void FUN_00015d00(pthread_key_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  iVar1 = pthread_key_create(param_1,(__destr_function *)0x0);
  uVar2 = FUN_00015428();
  FUN_000142a4(auStack_10,iVar1,uVar2);
  FUN_00015390(auStack_10,DAT_00015d68 + 0x15d54);
  return;
}


// ==== FUN_00015d6c @ 00015d6c ====

undefined4 FUN_00015d6c(undefined4 param_1)

{
  FUN_000141b4(param_1);
  return param_1;
}


// ==== main @ 00015d94 ====

void main(undefined4 param_1,int param_2)

{
  int local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  AlexaSpeechPlayer aAStack_198 [392];
  
  local_1a8 = param_2;
  local_1a4 = param_1;
  local_1a0 = lab126_daemon_checksingleton(DAT_00015f3c + 0x15db4);
  if (local_1a0 < 0) {
    lab126_daemon_cleansingleton(DAT_00015f40 + 0x15dd8,local_1a0);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  _llog_set_ident(DAT_00015f44 + 0x15df4);
  *(undefined4 *)(DAT_00015f48 + 0x15e04) = 0xfff0000;
  if ((*(uint *)(DAT_00015f4c + 0x15e18) & 0x800000) != 0) {
    _llogmsg_print(0x800000,DAT_00015f50 + 0x15e40,*(undefined4 *)(local_1a8 + 4));
  }
  gst_init(&local_1a4,&local_1a8);
  AlexaSpeechPlayer::AlexaSpeechPlayer::AlexaSpeechPlayer(aAStack_198,false);
  AlexaSpeechPlayer::AlexaSpeechPlayer::initialize();
  do {
    pause();
  } while( true );
}


// ==== FUN_00015f60 @ 00015f60 ====

undefined4 FUN_00015f60(undefined4 param_1)

{
  FUN_00016be8(param_1);
  return param_1;
}


// ==== FUN_00015f88 @ 00015f88 ====

undefined4 FUN_00015f88(undefined4 param_1,undefined4 *param_2)

{
  FUN_000160b0(param_1,*param_2);
  return param_1;
}


// ==== clone_base @ 00015fc0 ====

/* boost::exception_detail::clone_base::clone_base(boost::exception_detail::clone_base const&) */

clone_base * __thiscall
boost::exception_detail::clone_base::clone_base(clone_base *this,clone_base *param_1)

{
  *(int *)this = *(int *)(DAT_00016004 + 0x15fe0 + DAT_00016008) + 8;
  return this;
}


// ==== system_error @ 0001600c ====

/* boost::system::system_error::system_error(boost::system::system_error const&) */

system_error * __thiscall
boost::system::system_error::system_error(system_error *this,system_error *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_000160a8 + 0x1602c;
  std::runtime_error::runtime_error((runtime_error *)this,(runtime_error *)param_1);
  *(int *)this = *(int *)(iVar2 + DAT_000160ac) + 8;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  std::string::string((string *)(this + 0x10),(string *)(param_1 + 0x10));
  return this;
}


// ==== FUN_000160b0 @ 000160b0 ====

void FUN_000160b0(undefined4 *param_1,undefined4 param_2)

{
  FUN_00016be8(param_1);
  *param_1 = param_2;
  FUN_00016c60(param_1);
  return;
}


// ==== FUN_000160e8 @ 000160e8 ====

undefined4 * FUN_000160e8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00016c60(param_1);
  return param_1;
}


// ==== FUN_00016124 @ 00016124 ====

int * FUN_00016124(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00016190 + 0x16140;
  FUN_0001457c(param_1);
  FUN_00014164(param_1 + 5);
  *param_1 = *(int *)(iVar1 + DAT_00016194) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00016194) + 0x18;
  return param_1;
}


// ==== FUN_00016198 @ 00016198 ====

exception * FUN_00016198(exception *param_1,exception *param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001621c + 0x161b8;
  boost::exception::exception(param_1,param_2);
  std::bad_alloc::bad_alloc((bad_alloc *)(param_1 + 0x14),(bad_alloc *)(param_2 + 0x14));
  *(int *)param_1 = *(int *)(iVar1 + DAT_00016220) + 8;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00016220) + 0x18;
  return param_1;
}


// ==== FUN_00016224 @ 00016224 ====

int * FUN_00016224(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_000162ec + 0x16244;
  boost::exception_detail::clone_base::clone_base
            ((clone_base *)(param_1 + 6),(clone_base *)((int)param_2 + *(int *)(*param_2 + -0xc)));
  FUN_00016198(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_000162f0) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_000162f0) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_000162f0) + 0x44;
  return param_1;
}


// ==== get_static_exception_object<boost::exception_detail::bad_alloc_> @ 000162f4 ====

/* boost::exception_ptr
   boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>() */

exception_detail * __thiscall
boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>
          (exception_detail *this)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [32];
  
  iVar4 = DAT_00016508 + 0x16310;
  FUN_00016124(auStack_4c);
  FUN_00016cf4(auStack_34,auStack_4c);
  FUN_00014548(auStack_54,DAT_0001650c + 0x16340);
  uVar1 = FUN_00016f38(auStack_34,auStack_54);
  FUN_00014548(auStack_58,DAT_00016510 + 0x16370);
  uVar1 = FUN_00016f68(uVar1,auStack_58);
  FUN_00014548(auStack_5c,0x80);
  FUN_00016f98(uVar1,auStack_5c);
  if (((**(uint **)(iVar4 + DAT_00016514) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(*(undefined4 *)(iVar4 + DAT_00016514)), iVar2 != 0)) {
    pvVar3 = operator_new(0x1c);
    FUN_00016224(pvVar3,auStack_34);
    FUN_00016fc8(auStack_54,pvVar3);
    FUN_000150d4(*(undefined4 *)(iVar4 + DAT_00016518),auStack_54);
    __cxa_guard_release(*(undefined4 *)(iVar4 + DAT_00016514));
    __aeabi_atexit(*(undefined4 *)(iVar4 + DAT_00016518),DAT_0001651c + 0x16460,
                   DAT_00016520 + 0x1646c);
    FUN_00015054(auStack_54);
  }
  FUN_00015358(this,*(undefined4 *)(iVar4 + DAT_00016518));
  FUN_00016dc8(auStack_34);
  FUN_00015108(auStack_4c);
  return this;
}


// ==== FUN_00016524 @ 00016524 ====

int * FUN_00016524(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00016590 + 0x16540;
  FUN_0001457c(param_1);
  FUN_00014114(param_1 + 5);
  *param_1 = *(int *)(iVar1 + DAT_00016594) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00016594) + 0x18;
  return param_1;
}


// ==== bad_exception @ 00016598 ====

/* std::bad_exception::bad_exception(std::bad_exception const&) */

bad_exception * __thiscall
std::bad_exception::bad_exception(bad_exception *this,bad_exception *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000165ec + 0x165b8;
  exception::exception((exception *)this,(exception *)param_1);
  *(int *)this = *(int *)(iVar1 + DAT_000165f0) + 8;
  return this;
}


// ==== FUN_000165f4 @ 000165f4 ====

exception * FUN_000165f4(exception *param_1,exception *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00016678 + 0x16614;
  boost::exception::exception(param_1,param_2);
  std::bad_exception::bad_exception
            ((bad_exception *)(param_1 + 0x14),(bad_exception *)(param_2 + 0x14));
  *(int *)param_1 = *(int *)(iVar1 + DAT_0001667c) + 8;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_0001667c) + 0x18;
  return param_1;
}


// ==== FUN_00016680 @ 00016680 ====

int * FUN_00016680(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00016748 + 0x166a0;
  boost::exception_detail::clone_base::clone_base
            ((clone_base *)(param_1 + 6),(clone_base *)((int)param_2 + *(int *)(*param_2 + -0xc)));
  FUN_000165f4(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_0001674c) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_0001674c) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_0001674c) + 0x44;
  return param_1;
}


// ==== get_static_exception_object<boost::exception_detail::bad_exception_> @ 00016750 ====

/* boost::exception_ptr
   boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>()
    */

exception_detail * __thiscall
boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>
          (exception_detail *this)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [32];
  
  iVar4 = DAT_00016964 + 0x1676c;
  FUN_00016524(auStack_4c);
  FUN_00017060(auStack_34,auStack_4c);
  FUN_00014548(auStack_54,DAT_00016968 + 0x1679c);
  uVar1 = FUN_00016f38(auStack_34,auStack_54);
  FUN_00014548(auStack_58,DAT_0001696c + 0x167cc);
  uVar1 = FUN_00016f68(uVar1,auStack_58);
  FUN_00014548(auStack_5c,0x80);
  FUN_00016f98(uVar1,auStack_5c);
  if (((**(uint **)(iVar4 + DAT_00016970) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(*(undefined4 *)(iVar4 + DAT_00016970)), iVar2 != 0)) {
    pvVar3 = operator_new(0x1c);
    FUN_00016680(pvVar3,auStack_34);
    FUN_000172a4(auStack_54,pvVar3);
    FUN_000150d4(*(undefined4 *)(iVar4 + DAT_00016974),auStack_54);
    __cxa_guard_release(*(undefined4 *)(iVar4 + DAT_00016970));
    __aeabi_atexit(*(undefined4 *)(iVar4 + DAT_00016974),DAT_00016978 + 0x168bc,
                   DAT_0001697c + 0x168c8);
    FUN_00015054(auStack_54);
  }
  FUN_00015358(this,*(undefined4 *)(iVar4 + DAT_00016974));
  FUN_00017134(auStack_34);
  FUN_000151d0(auStack_4c);
  return this;
}


// ==== error_info_injector @ 00016980 ====

/* boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(boost::exception_detail::error_info_injector<boost::system::system_error>
   const&) */

error_info_injector<boost::system::system_error> * __thiscall
boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
          (error_info_injector<boost::system::system_error> *this,error_info_injector *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00016a18 + 0x169a0;
  system::system_error::system_error((system_error *)this,(system_error *)param_1);
  exception::exception((exception *)(this + 0x14),(exception *)(param_1 + 0x14));
  *(int *)this = *(int *)(iVar1 + DAT_00016a1c) + 8;
  *(int *)(this + 0x14) = *(int *)(iVar1 + DAT_00016a1c) + 0x1c;
  return this;
}


// ==== FUN_00016a20 @ 00016a20 ====

error_info_injector<boost::system::system_error> *
FUN_00016a20(error_info_injector<boost::system::system_error> *param_1,error_info_injector *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00016ae8 + 0x16a40;
  boost::exception_detail::clone_base::clone_base
            ((clone_base *)(param_1 + 0x28),
             (clone_base *)(param_2 + *(int *)(*(int *)param_2 + -0xc)));
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
            (param_1,param_2);
  *(int *)param_1 = *(int *)(iVar1 + DAT_00016aec) + 0xc;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00016aec) + 0x28;
  *(int *)(param_1 + 0x28) = *(int *)(iVar1 + DAT_00016aec) + 0x44;
  return param_1;
}


// ==== FUN_00016af0 @ 00016af0 ====

void FUN_00016af0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  error_info_injector<boost::system::system_error> aeStack_38 [40];
  
  iVar2 = DAT_00016b88 + 0x16b0c;
  FUN_00014838(param_1);
  uVar1 = __cxa_allocate_exception(0x2c);
  FUN_0001733c(aeStack_38,param_1);
  FUN_00017430(uVar1,aeStack_38);
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
            (aeStack_38);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00016b8c),DAT_00016b90 + 0x16b68);
}


// ==== FUN_00016b94 @ 00016b94 ====

undefined4 FUN_00016b94(undefined4 param_1)

{
  FUN_000175cc(param_1);
  return param_1;
}


// ==== FUN_00016bc0 @ 00016bc0 ====

undefined4 FUN_00016bc0(undefined4 param_1)

{
  FUN_00015d6c(param_1);
  return param_1;
}


// ==== FUN_00016be8 @ 00016be8 ====

void FUN_00016be8(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((*param_1 == 0) || (iVar2 = (**(code **)(*(int *)*param_1 + 0x10))(*param_1), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *param_1 = 0;
  }
  return;
}


// ==== FUN_00016c60 @ 00016c60 ====

void FUN_00016c60(int *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*(int *)*param_1 + 0xc))(*param_1);
  }
  return;
}


// ==== clone_base @ 00016cac ====

/* boost::exception_detail::clone_base::clone_base() */

clone_base * __thiscall boost::exception_detail::clone_base::clone_base(clone_base *this)

{
  *(int *)this = *(int *)(DAT_00016cec + 0x16cc8 + DAT_00016cf0) + 8;
  return this;
}


// ==== FUN_00016cf4 @ 00016cf4 ====

int * FUN_00016cf4(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00016dc0 + 0x16d14;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 6));
  FUN_00016198(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00016dc4) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00016dc4) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00016dc4) + 0x44;
  FUN_00014734(param_1,param_2);
  return param_1;
}


// ==== FUN_00016dc8 @ 00016dc8 ====

/* WARNING: Removing unreachable block (ram,0x00016e58) */

int * FUN_00016dc8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00016e70 + 0x16de4;
  *param_1 = *(int *)(iVar1 + DAT_00016e74) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00016e74) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00016e74) + 0x44;
  FUN_00015108(param_1);
  FUN_000146ac(param_1 + 6);
  return param_1;
}


// ==== FUN_00016e80 @ 00016e80 ====

undefined4 FUN_00016e80(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00016dc8((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00016ec0 @ 00016ec0 ====

void * FUN_00016ec0(void *param_1)

{
  FUN_00016dc8(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00016ef8 @ 00016ef8 ====

undefined4 FUN_00016ef8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00016ec0((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00016f38 @ 00016f38 ====

clone_impl * FUN_00016f38(clone_impl *param_1,error_info *param_2)

{
  clone_impl *pcVar1;
  
  pcVar1 = boost::exception_detail::
           set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>
                     (param_1,param_2);
  return pcVar1;
}


// ==== FUN_00016f68 @ 00016f68 ====

clone_impl * FUN_00016f68(clone_impl *param_1,error_info *param_2)

{
  clone_impl *pcVar1;
  
  pcVar1 = boost::exception_detail::
           set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>
                     (param_1,param_2);
  return pcVar1;
}


// ==== FUN_00016f98 @ 00016f98 ====

clone_impl * FUN_00016f98(clone_impl *param_1,error_info *param_2)

{
  clone_impl *pcVar1;
  
  pcVar1 = boost::exception_detail::
           set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>
                     (param_1,param_2);
  return pcVar1;
}


// ==== FUN_00016fc8 @ 00016fc8 ====

int * FUN_00016fc8(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
  }
  *param_1 = iVar1;
  FUN_00014ae0(param_1 + 1);
  FUN_00017700(param_1,param_2,param_1 + 1);
  return param_1;
}


// ==== FUN_00017060 @ 00017060 ====

int * FUN_00017060(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001712c + 0x17080;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 6));
  FUN_000165f4(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00017130) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00017130) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00017130) + 0x44;
  FUN_00014734(param_1,param_2);
  return param_1;
}


// ==== FUN_00017134 @ 00017134 ====

/* WARNING: Removing unreachable block (ram,0x000171c4) */

int * FUN_00017134(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000171dc + 0x17150;
  *param_1 = *(int *)(iVar1 + DAT_000171e0) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_000171e0) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_000171e0) + 0x44;
  FUN_000151d0(param_1);
  FUN_000146ac(param_1 + 6);
  return param_1;
}


// ==== FUN_000171ec @ 000171ec ====

undefined4 FUN_000171ec(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00017134((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_0001722c @ 0001722c ====

void * FUN_0001722c(void *param_1)

{
  FUN_00017134(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00017264 @ 00017264 ====

undefined4 FUN_00017264(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001722c((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_000172a4 @ 000172a4 ====

int * FUN_000172a4(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
  }
  *param_1 = iVar1;
  FUN_00014ae0(param_1 + 1);
  FUN_0001775c(param_1,param_2,param_1 + 1);
  return param_1;
}


// ==== FUN_0001733c @ 0001733c ====

error_info_injector<boost::system::system_error> *
FUN_0001733c(error_info_injector<boost::system::system_error> *param_1,system_error *param_2)

{
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
            (param_1,param_2);
  return param_1;
}


// ==== ~error_info_injector @ 00017368 ====

/* WARNING: Removing unreachable block (ram,0x000173d0) */
/* boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector()
    */

error_info_injector<boost::system::system_error> * __thiscall
boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
          (error_info_injector<boost::system::system_error> *this)

{
  int iVar1;
  
  iVar1 = DAT_000173e8 + 0x17384;
  *(int *)this = *(int *)(iVar1 + DAT_000173ec) + 8;
  *(int *)(this + 0x14) = *(int *)(iVar1 + DAT_000173ec) + 0x1c;
  exception::~exception((exception *)(this + 0x14));
  FUN_00014cf8(this);
  return this;
}


// ==== ~error_info_injector @ 000173f0 ====

/* non-virtual thunk to
   boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector()
    */

void __thiscall
boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
          (error_info_injector<boost::system::system_error> *this)

{
  ~error_info_injector(this + -0x14);
  return;
}


// ==== ~error_info_injector @ 000173f8 ====

/* boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector()
    */

error_info_injector<boost::system::system_error> * __thiscall
boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
          (error_info_injector<boost::system::system_error> *this)

{
  ~error_info_injector(this);
  operator_delete(this);
  return this;
}


// ==== ~error_info_injector @ 00017428 ====

/* non-virtual thunk to
   boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector()
    */

void __thiscall
boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
          (error_info_injector<boost::system::system_error> *this)

{
  ~error_info_injector(this + -0x14);
  return;
}


// ==== FUN_00017430 @ 00017430 ====

undefined4 FUN_00017430(undefined4 param_1,undefined4 param_2)

{
  FUN_00017834(param_1,param_2);
  return param_1;
}


// ==== FUN_0001745c @ 0001745c ====

/* WARNING: Removing unreachable block (ram,0x000174ec) */

error_info_injector<boost::system::system_error> *
FUN_0001745c(error_info_injector<boost::system::system_error> *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00017504 + 0x17478;
  *(int *)param_1 = *(int *)(iVar1 + DAT_00017508) + 0xc;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00017508) + 0x28;
  *(int *)(param_1 + 0x28) = *(int *)(iVar1 + DAT_00017508) + 0x44;
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
            (param_1);
  FUN_000146ac(param_1 + 0x28);
  return param_1;
}


// ==== FUN_00017514 @ 00017514 ====

undefined4 FUN_00017514(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001745c((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00017554 @ 00017554 ====

void * FUN_00017554(void *param_1)

{
  FUN_0001745c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_0001758c @ 0001758c ====

undefined4 FUN_0001758c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00017554((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_000175cc @ 000175cc ====

undefined4 FUN_000175cc(undefined4 param_1)

{
  FUN_000141b4(param_1);
  FUN_00015d00(param_1);
  return param_1;
}


// ==== FUN_00017610 @ 00017610 ====

pthread_key_t * FUN_00017610(pthread_key_t *param_1)

{
  pthread_key_delete(*param_1);
  FUN_000141b4(param_1);
  return param_1;
}


// ==== set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>> @ 00017658 ====

/* boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> const&
   boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>
   >(boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> const&,
   boost::error_info<boost::throw_function_, char const*> const&) */

clone_impl *
boost::exception_detail::
set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>
          (clone_impl *param_1,error_info *param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_2;
  return param_1;
}


// ==== set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>> @ 00017690 ====

/* boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> const&
   boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>
   >(boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> const&,
   boost::error_info<boost::throw_file_, char const*> const&) */

clone_impl *
boost::exception_detail::
set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>
          (clone_impl *param_1,error_info *param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)param_2;
  return param_1;
}


// ==== set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>> @ 000176c8 ====

/* boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> const&
   boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>
   >(boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> const&,
   boost::error_info<boost::throw_line_, int> const&) */

clone_impl *
boost::exception_detail::
set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>
          (clone_impl *param_1,error_info *param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)param_2;
  return param_1;
}


// ==== FUN_00017700 @ 00017700 ====

void FUN_00017700(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_c [4];
  
  FUN_00017910(auStack_c,param_2);
  FUN_00014ba4(auStack_c,param_3);
  FUN_00014b10(auStack_c);
  FUN_00014bec(param_1,param_2,param_2);
  return;
}


// ==== FUN_0001775c @ 0001775c ====

void FUN_0001775c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_c [4];
  
  FUN_00017984(auStack_c,param_2);
  FUN_00014ba4(auStack_c,param_3);
  FUN_00014b10(auStack_c);
  FUN_00014bec(param_1,param_2,param_2);
  return;
}


// ==== error_info_injector @ 000177b8 ====

/* boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(boost::system::system_error
   const&) */

error_info_injector<boost::system::system_error> * __thiscall
boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
          (error_info_injector<boost::system::system_error> *this,system_error *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001782c + 0x177d8;
  system::system_error::system_error((system_error *)this,param_1);
  FUN_0001457c(this + 0x14);
  *(int *)this = *(int *)(iVar1 + DAT_00017830) + 8;
  *(int *)(this + 0x14) = *(int *)(iVar1 + DAT_00017830) + 0x1c;
  return this;
}


// ==== FUN_00017834 @ 00017834 ====

error_info_injector<boost::system::system_error> *
FUN_00017834(error_info_injector<boost::system::system_error> *param_1,error_info_injector *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017908 + 0x17854;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 0x28));
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
            (param_1,param_2);
  *(int *)param_1 = *(int *)(iVar1 + DAT_0001790c) + 0xc;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_0001790c) + 0x28;
  *(int *)(param_1 + 0x28) = *(int *)(iVar1 + DAT_0001790c) + 0x44;
  FUN_00014734(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}


// ==== FUN_00017910 @ 00017910 ====

undefined4 * FUN_00017910(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  pvVar1 = operator_new(0x10);
  FUN_000179f8(pvVar1,param_2);
  *param_1 = pvVar1;
  return param_1;
}


// ==== FUN_00017984 @ 00017984 ====

undefined4 * FUN_00017984(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  pvVar1 = operator_new(0x10);
  FUN_00017a58(pvVar1,param_2);
  *param_1 = pvVar1;
  return param_1;
}


// ==== FUN_000179f8 @ 000179f8 ====

int * FUN_000179f8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017a50 + 0x17a18;
  FUN_000148d4(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00017a54) + 8;
  param_1[3] = param_2;
  return param_1;
}


// ==== FUN_00017a58 @ 00017a58 ====

int * FUN_00017a58(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017ab0 + 0x17a78;
  FUN_000148d4(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00017ab4) + 8;
  param_1[3] = param_2;
  return param_1;
}


// ==== FUN_00017ab8 @ 00017ab8 ====

/* WARNING: Removing unreachable block (ram,0x00017afc) */

int * FUN_00017ab8(int *param_1)

{
  *param_1 = *(int *)(DAT_00017b14 + 0x17ad4 + DAT_00017b18) + 8;
  FUN_00014934(param_1);
  return param_1;
}


// ==== FUN_00017b1c @ 00017b1c ====

void * FUN_00017b1c(void *param_1)

{
  FUN_00017ab8(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00017b4c @ 00017b4c ====

/* WARNING: Removing unreachable block (ram,0x00017b90) */

int * FUN_00017b4c(int *param_1)

{
  *param_1 = *(int *)(DAT_00017ba8 + 0x17b68 + DAT_00017bac) + 8;
  FUN_00014934(param_1);
  return param_1;
}


// ==== FUN_00017bb0 @ 00017bb0 ====

void * FUN_00017bb0(void *param_1)

{
  FUN_00017b4c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00017be0 @ 00017be0 ====

/* WARNING: Removing unreachable block (ram,0x00017c24) */

int * FUN_00017be0(int *param_1)

{
  *param_1 = *(int *)(DAT_00017c3c + 0x17bfc + DAT_00017c40) + 8;
  FUN_000141d8(param_1);
  return param_1;
}


// ==== FUN_00017c44 @ 00017c44 ====

void * FUN_00017c44(void *param_1)

{
  FUN_00017be0(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00017c74 @ 00017c74 ====

/* WARNING: Removing unreachable block (ram,0x00017cb8) */

int * FUN_00017c74(int *param_1)

{
  *param_1 = *(int *)(DAT_00017cd0 + 0x17c90 + DAT_00017cd4) + 8;
  FUN_000141d8(param_1);
  return param_1;
}


// ==== FUN_00017cd8 @ 00017cd8 ====

void * FUN_00017cd8(void *param_1)

{
  FUN_00017c74(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00017d08 @ 00017d08 ====

/* WARNING: Removing unreachable block (ram,0x00017d4c) */

int * FUN_00017d08(int *param_1)

{
  *param_1 = *(int *)(DAT_00017d64 + 0x17d24 + DAT_00017d68) + 8;
  FUN_000141d8(param_1);
  return param_1;
}


// ==== FUN_00017d6c @ 00017d6c ====

void * FUN_00017d6c(void *param_1)

{
  FUN_00017d08(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00017d9c @ 00017d9c ====

undefined4 FUN_00017d9c(undefined4 param_1)

{
  FUN_00017610(param_1);
  return param_1;
}


// ==== FUN_00017dc8 @ 00017dc8 ====

void FUN_00017dc8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  allocator aaStack_14 [8];
  
  iVar2 = DAT_00018564 + 0x17de8;
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)(DAT_00018568 + 0x17e0c));
    __aeabi_atexit(DAT_0001856c + 0x17e1c,*(undefined4 *)(iVar2 + DAT_00018570),
                   DAT_00018574 + 0x17e34);
    FUN_000141b4(DAT_00018578 + 0x17e44);
    FUN_000141b4(DAT_0001857c + 0x17e54);
    FUN_000141b4(DAT_00018580 + 0x17e64);
    FUN_000141b4(DAT_00018584 + 0x17e74);
    FUN_000141b4(DAT_00018588 + 0x17e84);
    FUN_000141b4(DAT_0001858c + 0x17e94);
    FUN_000141b4(DAT_00018590 + 0x17ea4);
    FUN_000141b4(DAT_00018594 + 0x17eb4);
    FUN_000141b4(DAT_00018598 + 0x17ec4);
    if ((**(uint **)(iVar2 + DAT_0001859c) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_0001859c) = 1;
      boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>
                (*(exception_detail **)(iVar2 + DAT_000185a0));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_000185a0),DAT_000185a4 + 0x17f18,
                     DAT_000185a8 + 0x17f24);
    }
    if ((**(uint **)(iVar2 + DAT_000185ac) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_000185ac) = 1;
      boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>
                (*(exception_detail **)(iVar2 + DAT_000185b0));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_000185b0),DAT_000185b4 + 0x17f78,
                     DAT_000185b8 + 0x17f84);
    }
    uVar1 = FUN_00015428();
    *(undefined4 *)(DAT_000185bc + 0x17f9c) = uVar1;
    uVar1 = FUN_000156d8();
    *(undefined4 *)(DAT_000185c0 + 0x17fb0) = uVar1;
    uVar1 = FUN_00015934();
    *(undefined4 *)(DAT_000185c4 + 0x17fc4) = uVar1;
    uVar1 = FUN_00015c40();
    *(undefined4 *)(DAT_000185c8 + 0x17fd8) = uVar1;
    std::allocator<char>::allocator();
    std::string::string((string *)(DAT_000185cc + 0x17ff4),(char *)(DAT_000185d0 + 0x18000),
                        aaStack_14);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_14);
    __aeabi_atexit(DAT_000185d4 + 0x18020,*(undefined4 *)(iVar2 + DAT_000185d8),
                   DAT_000185dc + 0x18038);
    std::allocator<char>::allocator();
    std::string::string((string *)(DAT_000185e0 + 0x18058),(char *)(DAT_000185e4 + 0x18064),
                        aaStack_14);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_14);
    __aeabi_atexit(DAT_000185e8 + 0x18084,*(undefined4 *)(iVar2 + DAT_000185d8),
                   DAT_000185ec + 0x1809c);
    std::allocator<char>::allocator();
    std::string::string((string *)(DAT_000185f0 + 0x180bc),(char *)(DAT_000185f4 + 0x180c8),
                        aaStack_14);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_14);
    __aeabi_atexit(DAT_000185f8 + 0x180e8,*(undefined4 *)(iVar2 + DAT_000185d8),
                   DAT_000185fc + 0x18100);
    std::allocator<char>::allocator();
    std::string::string((string *)(DAT_00018600 + 0x18120),(char *)(DAT_00018604 + 0x1812c),
                        aaStack_14);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_14);
    __aeabi_atexit(DAT_00018608 + 0x1814c,*(undefined4 *)(iVar2 + DAT_000185d8),
                   DAT_0001860c + 0x18164);
    std::allocator<char>::allocator();
    std::string::string((string *)(DAT_00018610 + 0x18184),(char *)(DAT_00018614 + 0x18190),
                        aaStack_14);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_14);
    __aeabi_atexit(DAT_00018618 + 0x181b0,*(undefined4 *)(iVar2 + DAT_000185d8),
                   DAT_0001861c + 0x181c8);
    std::allocator<char>::allocator();
    std::string::string((string *)(DAT_00018620 + 0x181e8),(char *)(DAT_00018624 + 0x181f4),
                        aaStack_14);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_14);
    __aeabi_atexit(DAT_00018628 + 0x18214,*(undefined4 *)(iVar2 + DAT_000185d8),
                   DAT_0001862c + 0x1822c);
    std::allocator<char>::allocator();
    std::string::string((string *)(DAT_00018630 + 0x1824c),(char *)(DAT_00018634 + 0x18258),
                        aaStack_14);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_14);
    __aeabi_atexit(DAT_00018638 + 0x18278,*(undefined4 *)(iVar2 + DAT_000185d8),
                   DAT_0001863c + 0x18290);
    std::allocator<char>::allocator();
    std::string::string((string *)(DAT_00018640 + 0x182b0),(char *)(DAT_00018644 + 0x182bc),
                        aaStack_14);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_14);
    __aeabi_atexit(DAT_00018648 + 0x182dc,*(undefined4 *)(iVar2 + DAT_000185d8),
                   DAT_0001864c + 0x182f4);
    if ((**(uint **)(iVar2 + DAT_00018650) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_00018650) = 1;
      FUN_00016b94(*(undefined4 *)(iVar2 + DAT_00018654));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018654),DAT_00018658 + 0x18348,
                     DAT_0001865c + 0x18354);
    }
    if ((**(uint **)(iVar2 + DAT_00018660) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_00018660) = 1;
      FUN_00016bc0(*(undefined4 *)(iVar2 + DAT_00018664));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018664),DAT_00018668 + 0x183a8,
                     DAT_0001866c + 0x183b4);
    }
    if ((**(uint **)(iVar2 + DAT_00018670) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_00018670) = 1;
      FUN_00016bc0(*(undefined4 *)(iVar2 + DAT_00018674));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018674),DAT_00018678 + 0x18408,
                     DAT_0001867c + 0x18414);
    }
    if ((**(uint **)(iVar2 + DAT_00018680) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_00018680) = 1;
      FUN_00016b94(*(undefined4 *)(iVar2 + DAT_00018684));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018684),DAT_00018688 + 0x18468,
                     DAT_0001868c + 0x18474);
    }
    if ((**(uint **)(iVar2 + DAT_00018690) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_00018690) = 1;
      FUN_00016bc0(*(undefined4 *)(iVar2 + DAT_00018694));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018694),DAT_00018698 + 0x184c8,
                     DAT_0001869c + 0x184d4);
    }
  }
  return;
}


// ==== FUN_000186a0 @ 000186a0 ====

void FUN_000186a0(int param_1)

{
  FUN_000149bc(*(undefined4 *)(param_1 + 0xc));
  return;
}


// ==== FUN_00018714 @ 00018714 ====

int FUN_00018714(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x2c);
  FUN_00018b04(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_00018784 @ 00018784 ====

undefined4 FUN_00018784(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018714((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_000187c4 @ 000187c4 ====

void FUN_000187c4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00018820 + 0x187e0;
  uVar1 = __cxa_allocate_exception(0x2c);
  FUN_00016a20(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00018824),DAT_00018828 + 0x18810);
}


// ==== FUN_0001882c @ 0001882c ====

void FUN_0001882c(int *param_1)

{
  FUN_000187c4((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_00018864 @ 00018864 ====

int FUN_00018864(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x1c);
  FUN_00018be8(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_000188d4 @ 000188d4 ====

undefined4 FUN_000188d4(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018864((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_00018914 @ 00018914 ====

void FUN_00018914(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00018970 + 0x18930;
  uVar1 = __cxa_allocate_exception(0x1c);
  FUN_00016680(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00018974),DAT_00018978 + 0x18960);
}


// ==== FUN_0001897c @ 0001897c ====

void FUN_0001897c(int *param_1)

{
  FUN_00018914((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_000189b4 @ 000189b4 ====

int FUN_000189b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x1c);
  FUN_00018cc4(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_00018a24 @ 00018a24 ====

undefined4 FUN_00018a24(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000189b4((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_00018a64 @ 00018a64 ====

void FUN_00018a64(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00018ac0 + 0x18a80;
  uVar1 = __cxa_allocate_exception(0x1c);
  FUN_00016224(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00018ac4),DAT_00018ac8 + 0x18ab0);
}


// ==== FUN_00018acc @ 00018acc ====

void FUN_00018acc(int *param_1)

{
  FUN_00018a64((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_00018b04 @ 00018b04 ====

error_info_injector<boost::system::system_error> *
FUN_00018b04(error_info_injector<boost::system::system_error> *param_1,error_info_injector *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00018be0 + 0x18b28;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 0x28));
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
            (param_1,param_2);
  *(int *)param_1 = *(int *)(iVar1 + DAT_00018be4) + 0xc;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00018be4) + 0x28;
  *(int *)(param_1 + 0x28) = *(int *)(iVar1 + DAT_00018be4) + 0x44;
  FUN_00014734(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}


// ==== FUN_00018be8 @ 00018be8 ====

int * FUN_00018be8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00018cbc + 0x18c0c;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 6));
  FUN_000165f4(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00018cc0) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00018cc0) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00018cc0) + 0x44;
  FUN_00014734(param_1,param_2);
  return param_1;
}


// ==== FUN_00018cc4 @ 00018cc4 ====

int * FUN_00018cc4(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00018d98 + 0x18ce8;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 6));
  FUN_00016198(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00018d9c) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00018d9c) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00018d9c) + 0x44;
  FUN_00014734(param_1,param_2);
  return param_1;
}


// ==== __libc_init @ 0001d000 ====

/* WARNING: Control flow encountered bad instruction data */

void __libc_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_atexit @ 0001d004 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr0 @ 0001d00c ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr1 @ 0001d014 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator.delete @ 0001d01c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __gxx_personality_v0 @ 0001d020 ====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_end_cleanup @ 0001d024 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_call_unexpected @ 0001d028 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_call_unexpected(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== allocator @ 0001d02c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== string @ 0001d030 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::string(string *this,char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== runtime_error @ 0001d034 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~string @ 0001d038 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::~string(string *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~allocator @ 0001d03c ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== string @ 0001d040 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::string(string *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~runtime_error @ 0001d044 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== empty @ 0001d048 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::empty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== what @ 0001d04c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator= @ 0001d050 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::operator=(string *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator+= @ 0001d054 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::operator+=(string *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator+= @ 0001d058 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::operator+=(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== c_str @ 0001d05c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::c_str(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_begin_catch @ 0001d060 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_end_catch @ 0001d064 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== string @ 0001d068 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::string(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~exception @ 0001d06c ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~bad_alloc @ 0001d074 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~bad_exception @ 0001d078 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== system_category @ 0001d07c ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall boost::system::system_category(system *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_guard_acquire @ 0001d080 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_guard_release @ 0001d084 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_atexit @ 0001d088 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_key_create @ 0001d08c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== lab126_daemon_checksingleton @ 0001d090 ====

/* WARNING: Control flow encountered bad instruction data */

void lab126_daemon_checksingleton(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== lab126_daemon_cleansingleton @ 0001d094 ====

/* WARNING: Control flow encountered bad instruction data */

void lab126_daemon_cleansingleton(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== exit @ 0001d098 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _llog_set_ident @ 0001d09c ====

/* WARNING: Control flow encountered bad instruction data */

void _llog_set_ident(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _llogmsg_print @ 0001d0a0 ====

/* WARNING: Control flow encountered bad instruction data */

void _llogmsg_print(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== gst_init @ 0001d0a4 ====

/* WARNING: Control flow encountered bad instruction data */

void gst_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== AlexaSpeechPlayer @ 0001d0a8 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
AlexaSpeechPlayer::AlexaSpeechPlayer::AlexaSpeechPlayer(AlexaSpeechPlayer *this,bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== initialize @ 0001d0ac ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AlexaSpeechPlayer::AlexaSpeechPlayer::initialize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pause @ 0001d0b0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pause(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~AlexaSpeechPlayer @ 0001d0b4 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall AlexaSpeechPlayer::AlexaSpeechPlayer::~AlexaSpeechPlayer(AlexaSpeechPlayer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator.new @ 0001d0bc ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_guard_abort @ 0001d0c0 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_allocate_exception @ 0001d0c4 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_throw @ 0001d0c8 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_free_exception @ 0001d0cc ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_key_delete @ 0001d0d0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_rethrow @ 0001d0d4 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== what @ 0001d0d8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::bad_exception::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== what @ 0001d0dc ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::bad_alloc::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_pure_virtual @ 0001d0e0 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== Init @ 0001d0fc ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~Init @ 0001d100 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::~Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


