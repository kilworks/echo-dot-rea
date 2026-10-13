// alexad  functions=343

// ==== __libc_init @ 00013fd0 ====

void __libc_init(void)

{
  (*(code *)PTR___libc_init_0001df24)();
  return;
}


// ==== __cxa_atexit @ 00013fdc ====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0001df28)();
  return;
}


// ==== operator.delete @ 00013fe8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0001df2c)(param_1);
  return;
}


// ==== __cxa_end_cleanup @ 00013ff4 ====

void __cxa_end_cleanup(void)

{
  (*(code *)PTR___cxa_end_cleanup_0001df30)();
  return;
}


// ==== __cxa_call_unexpected @ 00014000 ====

void __cxa_call_unexpected(void)

{
  (*(code *)PTR___cxa_call_unexpected_0001df34)();
  return;
}


// ==== allocator @ 00014018 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
  (*(code *)PTR_allocator_0001df3c)();
  return;
}


// ==== string @ 00014024 ====

void __thiscall std::string::string(string *this,char *param_1,allocator *param_2)

{
  (*(code *)PTR_string_0001df40)(this);
  return;
}


// ==== runtime_error @ 00014030 ====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,string *param_1)

{
  (*(code *)PTR_runtime_error_0001df44)(this);
  return;
}


// ==== ~string @ 0001403c ====

void __thiscall std::string::~string(string *this)

{
  (*(code *)PTR__string_0001df48)(this);
  return;
}


// ==== ~allocator @ 00014048 ====

void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_0001df4c)(this);
  return;
}


// ==== string @ 00014054 ====

void __thiscall std::string::string(string *this)

{
  (*(code *)PTR_string_0001df50)(this);
  return;
}


// ==== ~runtime_error @ 00014060 ====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_0001df54)(this);
  return;
}


// ==== empty @ 0001406c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::empty(void)

{
  (*(code *)PTR_empty_0001df58)();
  return;
}


// ==== what @ 00014078 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
  (*(code *)PTR_what_0001df5c)();
  return;
}


// ==== operator= @ 00014084 ====

void __thiscall std::string::operator=(string *this,char *param_1)

{
  (*(code *)PTR_operator__0001df60)(this);
  return;
}


// ==== operator+= @ 00014090 ====

void __thiscall std::string::operator+=(string *this,char *param_1)

{
  (*(code *)PTR_operator___0001df64)(this);
  return;
}


// ==== operator+= @ 0001409c ====

void __thiscall std::string::operator+=(string *this,string *param_1)

{
  (*(code *)PTR_operator___0001df68)(this);
  return;
}


// ==== c_str @ 000140a8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::c_str(void)

{
  (*(code *)PTR_c_str_0001df6c)();
  return;
}


// ==== __cxa_begin_catch @ 000140b4 ====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_0001df70)();
  return;
}


// ==== __cxa_end_catch @ 000140c0 ====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_0001df74)();
  return;
}


// ==== string @ 000140cc ====

void __thiscall std::string::string(string *this,string *param_1)

{
  (*(code *)PTR_string_0001df78)(this);
  return;
}


// ==== ~exception @ 000140d8 ====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0001df7c)(this);
  return;
}


// ==== ~bad_alloc @ 000140e4 ====

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  (*(code *)PTR__bad_alloc_0001df80)(this);
  return;
}


// ==== ~bad_exception @ 000140f0 ====

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  (*(code *)PTR__bad_exception_0001df84)(this);
  return;
}


// ==== __cxa_guard_acquire @ 000140fc ====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_0001df88)();
  return;
}


// ==== __cxa_guard_release @ 00014108 ====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0001df8c)();
  return;
}


// ==== __aeabi_atexit @ 00014114 ====

void __aeabi_atexit(void)

{
  (*(code *)PTR___aeabi_atexit_0001df90)();
  return;
}


// ==== pthread_key_create @ 00014120 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_create_0001df94)(__key);
  return iVar1;
}


// ==== operator<< @ 0001412c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_0001df98)(param_1);
  return poVar1;
}


// ==== operator<< @ 00014138 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,string *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_0001df9c)(param_1);
  return poVar1;
}


// ==== operator<< @ 00014144 ====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_0001dfa0)(this);
  return;
}


// ==== _llog_set_ident @ 00014150 ====

void _llog_set_ident(void)

{
  (*(code *)PTR__llog_set_ident_0001dfa4)();
  return;
}


// ==== _llogmsg_print @ 0001415c ====

void _llogmsg_print(void)

{
  (*(code *)PTR__llogmsg_print_0001dfa8)();
  return;
}


// ==== __errno @ 00014168 ====

void __errno(void)

{
  (*(code *)PTR___errno_0001dfac)();
  return;
}


// ==== strtol @ 00014174 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0001dfb0)(__nptr);
  return lVar1;
}


// ==== getopt_long @ 00014180 ====

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0001dfb4)();
  return;
}


// ==== lab126_daemon_checksingleton @ 0001418c ====

void lab126_daemon_checksingleton(void)

{
  (*(code *)PTR_lab126_daemon_checksingleton_0001dfb8)();
  return;
}


// ==== lab126_daemon_cleansingleton @ 00014198 ====

void lab126_daemon_cleansingleton(void)

{
  (*(code *)PTR_lab126_daemon_cleansingleton_0001dfbc)();
  return;
}


// ==== exit @ 000141a4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0001dfc0)(__status);
  return;
}


// ==== AlexaDaemon @ 000141b0 ====

void __thiscall AlexaDaemon::AlexaDaemon(AlexaDaemon *this)

{
  (*(code *)PTR_AlexaDaemon_0001dfc4)(this);
  return;
}


// ==== pause @ 000141bc ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pause(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pause_0001dfc8)();
  return iVar1;
}


// ==== ~AlexaDaemon @ 000141c8 ====

void __thiscall AlexaDaemon::~AlexaDaemon(AlexaDaemon *this)

{
  (*(code *)PTR__AlexaDaemon_0001dfcc)(this);
  return;
}


// ==== operator.new @ 000141d4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0001dfd0)(param_1);
  return pvVar1;
}


// ==== __cxa_guard_abort @ 000141e0 ====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_0001dfd4)();
  return;
}


// ==== __cxa_allocate_exception @ 000141ec ====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_0001dfd8)();
  return;
}


// ==== __cxa_throw @ 000141f8 ====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0001dfdc)();
  return;
}


// ==== __cxa_free_exception @ 00014204 ====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_0001dfe0)();
  return;
}


// ==== pthread_key_delete @ 00014210 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_delete_0001dfe4)(__key);
  return iVar1;
}


// ==== __cxa_rethrow @ 0001421c ====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_0001dfe8)();
  return;
}


// ==== Init @ 0001424c ====

void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_0001dff8)(this);
  return;
}


// ==== strerror @ 00014258 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0001dffc)(__errnum);
  return pcVar1;
}


// ==== entry @ 00014264 ====

/* WARNING: Control flow encountered bad instruction data */

void processEntry entry(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = DAT_000142c8 + 0x1427c;
  local_18 = *(undefined4 *)(iVar1 + DAT_000142cc);
  local_14 = *(undefined4 *)(iVar1 + DAT_000142d0);
  local_10 = *(undefined4 *)(iVar1 + DAT_000142d4);
  __libc_init(&stack0x00000000,0,*(undefined4 *)(iVar1 + DAT_000142d8),&local_18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000142dc @ 000142dc ====

void FUN_000142dc(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}


// ==== FUN_00014308 @ 00014308 ====

undefined4 FUN_00014308(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(DAT_00014348 + 0x14324,param_1,DAT_0001434c + 0x14334);
  return uVar1;
}


// ==== FUN_00014350 @ 00014350 ====

int * FUN_00014350(int *param_1)

{
  *param_1 = *(int *)(DAT_00014390 + 0x1436c + DAT_00014394) + 8;
  return param_1;
}


// ==== FUN_00014398 @ 00014398 ====

int * FUN_00014398(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000143e0 + 0x143b4;
  FUN_00014350(param_1);
  *param_1 = *(int *)(iVar1 + DAT_000143e4) + 8;
  return param_1;
}


// ==== FUN_000143e8 @ 000143e8 ====

int * FUN_000143e8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00014430 + 0x14404;
  FUN_00014350(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00014434) + 8;
  return param_1;
}


// ==== FUN_00014438 @ 00014438 ====

undefined4 * FUN_00014438(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}


// ==== FUN_0001446c @ 0001446c ====

int * FUN_0001446c(int *param_1)

{
  *param_1 = *(int *)(DAT_000144dc + 0x14488 + DAT_000144e0) + 8;
  FUN_000149d0(param_1 + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = -1;
  return param_1;
}


// ==== ~exception @ 000144e4 ====

/* WARNING: Removing unreachable block (ram,0x0001452c) */
/* boost::exception::~exception() */

exception * __thiscall boost::exception::~exception(exception *this)

{
  *(int *)this = *(int *)(DAT_00014564 + 0x14500 + DAT_00014568) + 8;
  FUN_00016664(this + 4);
  return this;
}


// ==== ~exception @ 0001456c ====

/* boost::exception::~exception() */

exception * __thiscall boost::exception::~exception(exception *this)

{
  ~exception(this);
  operator_delete(this);
  return this;
}


// ==== FUN_0001459c @ 0001459c ====

/* WARNING: Removing unreachable block (ram,0x000145d4) */

int * FUN_0001459c(int *param_1)

{
  *param_1 = *(int *)(DAT_000145ec + 0x145b8 + DAT_000145f0) + 8;
  return param_1;
}


// ==== FUN_000145f4 @ 000145f4 ====

void * FUN_000145f4(void *param_1)

{
  FUN_0001459c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00014624 @ 00014624 ====

void FUN_00014624(int param_1,int param_2)

{
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  int *local_c;
  
  FUN_000149d0(auStack_14);
  local_c = (int *)FUN_00014c84(param_2 + 4);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 0x14))(auStack_10,local_c);
    FUN_0001668c(auStack_14,auStack_10);
    FUN_00016664(auStack_10);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_0001668c(param_1 + 4,auStack_14);
  FUN_00016664(auStack_14);
  return;
}


// ==== FUN_00014728 @ 00014728 ====

void FUN_00014728(void)

{
  return;
}


// ==== FUN_00014744 @ 00014744 ====

void FUN_00014744(int *param_1)

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


// ==== FUN_00014780 @ 00014780 ====

int FUN_00014780(int *param_1)

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


// ==== FUN_000147c4 @ 000147c4 ====

int * FUN_000147c4(int *param_1)

{
  *param_1 = *(int *)(DAT_0001481c + 0x147e0 + DAT_00014820) + 8;
  param_1[1] = 1;
  param_1[2] = 1;
  return param_1;
}


// ==== FUN_00014824 @ 00014824 ====

/* WARNING: Removing unreachable block (ram,0x0001485c) */

int * FUN_00014824(int *param_1)

{
  *param_1 = *(int *)(DAT_00014874 + 0x14840 + DAT_00014878) + 8;
  return param_1;
}


// ==== FUN_0001487c @ 0001487c ====

void * FUN_0001487c(void *param_1)

{
  FUN_00014824(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000148ac @ 000148ac ====

void FUN_000148ac(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}


// ==== FUN_000148e8 @ 000148e8 ====

void FUN_000148e8(int param_1)

{
  FUN_00014744(param_1 + 4);
  return;
}


// ==== FUN_00014910 @ 00014910 ====

void FUN_00014910(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00014780(param_1 + 1);
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_00014974(param_1);
  }
  return;
}


// ==== FUN_00014974 @ 00014974 ====

void FUN_00014974(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00014780(param_1 + 2);
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  return;
}


// ==== FUN_000149d0 @ 000149d0 ====

undefined4 * FUN_000149d0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}


// ==== FUN_00014a00 @ 00014a00 ====

int * FUN_00014a00(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00014910(*param_1);
  }
  return param_1;
}


// ==== FUN_00014a40 @ 00014a40 ====

int * FUN_00014a40(int *param_1,int *param_2)

{
  *param_1 = *param_2;
  if (*param_1 != 0) {
    FUN_000148e8(*param_1);
  }
  return param_1;
}


// ==== FUN_00014a94 @ 00014a94 ====

void FUN_00014a94(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_2 = *param_1;
  *param_1 = uVar1;
  return;
}


// ==== FUN_00014adc @ 00014adc ====

void FUN_00014adc(void)

{
  return;
}


// ==== FUN_00014af0 @ 00014af0 ====

undefined4 FUN_00014af0(undefined4 param_1)

{
  return param_1;
}


// ==== FUN_00014b14 @ 00014b14 ====

/* WARNING: Removing unreachable block (ram,0x00014b54) */

int * FUN_00014b14(int *param_1)

{
  *param_1 = *(int *)(DAT_00014b6c + 0x14b30 + DAT_00014b70) + 8;
  FUN_00014af0(param_1);
  return param_1;
}


// ==== FUN_00014b74 @ 00014b74 ====

void * FUN_00014b74(void *param_1)

{
  FUN_00014b14(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00014ba4 @ 00014ba4 ====

bool FUN_00014ba4(int param_1,int param_2)

{
  return param_1 == param_2;
}


// ==== FUN_00014be0 @ 00014be0 ====

undefined4 * FUN_00014be0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}


// ==== FUN_00014c24 @ 00014c24 ====

undefined4 FUN_00014c24(int *param_1,int *param_2)

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


// ==== FUN_00014c84 @ 00014c84 ====

undefined4 FUN_00014c84(undefined4 *param_1)

{
  return *param_1;
}


// ==== FUN_00014cac @ 00014cac ====

undefined4 FUN_00014cac(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ==== FUN_00014cd4 @ 00014cd4 ====

undefined4 FUN_00014cd4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(code **)(**(int **)(param_2 + 4) + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar1 = FUN_00014c84(param_2);
  (*pcVar2)(param_1,uVar3,uVar1);
  return param_1;
}


// ==== FUN_00014d44 @ 00014d44 ====

int FUN_00014d44(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_00014d84 + 0x14d70;
  }
  return iVar1;
}


// ==== FUN_00014d88 @ 00014d88 ====

undefined4 FUN_00014d88(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00014be0(param_1,param_3,param_2);
  return param_1;
}


// ==== FUN_00014dbc @ 00014dbc ====

undefined4 FUN_00014dbc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_10 [8];
  
  (**(code **)(*param_1 + 0x10))(auStack_10,param_1,param_2);
  uVar1 = FUN_00014c24(auStack_10,param_3);
  return uVar1;
}


// ==== FUN_00014e18 @ 00014e18 ====

undefined4 FUN_00014e18(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00014cac(param_2);
  iVar2 = FUN_00014ba4(param_1,uVar1);
  if ((iVar2 == 0) || (iVar2 = FUN_00014c84(param_2), iVar2 != param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_00014e84 @ 00014e84 ====

runtime_error *
FUN_00014e84(runtime_error *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  allocator aaStack_18 [4];
  string asStack_14 [4];
  
  iVar1 = DAT_00014f74 + 0x14eac;
  std::allocator<char>::allocator();
  std::string::string(asStack_14,param_4,aaStack_18);
  std::runtime_error::runtime_error(param_1,asStack_14);
  std::string::~string(asStack_14);
  std::allocator<char>::~allocator((allocator<char> *)aaStack_18);
  *(int *)param_1 = *(int *)(iVar1 + DAT_00014f78) + 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  std::string::string((string *)(param_1 + 0x10));
  return param_1;
}


// ==== FUN_00014f7c @ 00014f7c ====

/* WARNING: Removing unreachable block (ram,0x00014fd0) */

runtime_error * FUN_00014f7c(runtime_error *param_1)

{
  *(int *)param_1 = *(int *)(DAT_0001501c + 0x14f98 + DAT_00015020) + 8;
  std::string::~string((string *)(param_1 + 0x10));
  std::runtime_error::~runtime_error(param_1);
  return param_1;
}


// ==== FUN_00015024 @ 00015024 ====

void * FUN_00015024(void *param_1)

{
  FUN_00014f7c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== what @ 00015054 ====

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
      std::string::operator+=((string *)(this + 0x10),(char *)(DAT_000151a0 + 0x150e0));
    }
    FUN_00014cd4(asStack_14,this + 8);
    std::string::operator+=((string *)(this + 0x10),asStack_14);
    std::string::~string(asStack_14);
  }
  uVar4 = std::string::c_str();
  return uVar4;
}


// ==== exception @ 000151a4 ====

/* std::exception::exception(std::exception const&) */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(int *)this = *(int *)(DAT_000151e8 + 0x151c4 + DAT_000151ec) + 8;
  return this;
}


// ==== bad_alloc @ 000151f0 ====

/* std::bad_alloc::bad_alloc(std::bad_alloc const&) */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,bad_alloc *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015244 + 0x15210;
  exception::exception((exception *)this,(exception *)param_1);
  *(int *)this = *(int *)(iVar1 + DAT_00015248) + 8;
  return this;
}


// ==== runtime_error @ 0001524c ====

/* std::runtime_error::runtime_error(std::runtime_error const&) */

runtime_error * __thiscall
std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000152d0 + 0x1526c;
  exception::exception((exception *)this,(exception *)param_1);
  *(int *)this = *(int *)(iVar1 + DAT_000152d4) + 8;
  std::string::string((string *)(this + 4),(string *)(param_1 + 4));
  return this;
}


// ==== FUN_000152d8 @ 000152d8 ====

int FUN_000152d8(int param_1)

{
  FUN_00014a00(param_1 + 4);
  return param_1;
}


// ==== FUN_00015308 @ 00015308 ====

undefined4 * FUN_00015308(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00014a40(param_1 + 1,param_2 + 1);
  return param_1;
}


// ==== FUN_00015358 @ 00015358 ====

undefined4 FUN_00015358(undefined4 param_1,undefined4 param_2)

{
  FUN_00015308(param_1,param_2);
  return param_1;
}


// ==== FUN_0001538c @ 0001538c ====

/* WARNING: Removing unreachable block (ram,0x000153f4) */

exception * FUN_0001538c(exception *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001540c + 0x153a8;
  *(int *)param_1 = *(int *)(iVar1 + DAT_00015410) + 8;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00015410) + 0x18;
  std::bad_alloc::~bad_alloc((bad_alloc *)(param_1 + 0x14));
  boost::exception::~exception(param_1);
  return param_1;
}


// ==== FUN_0001541c @ 0001541c ====

void * FUN_0001541c(void *param_1)

{
  FUN_0001538c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00015454 @ 00015454 ====

/* WARNING: Removing unreachable block (ram,0x000154bc) */

exception * FUN_00015454(exception *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000154d4 + 0x15470;
  *(int *)param_1 = *(int *)(iVar1 + DAT_000154d8) + 8;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_000154d8) + 0x18;
  std::bad_exception::~bad_exception((bad_exception *)(param_1 + 0x14));
  boost::exception::~exception(param_1);
  return param_1;
}


// ==== FUN_000154e4 @ 000154e4 ====

void * FUN_000154e4(void *param_1)

{
  FUN_00015454(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== exception @ 0001551c ====

/* boost::exception::exception(boost::exception const&) */

exception * __thiscall boost::exception::exception(exception *this,exception *param_1)

{
  *(int *)this = *(int *)(DAT_000155a8 + 0x1553c + DAT_000155ac) + 8;
  FUN_000167ec(this + 4,param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}


// ==== FUN_000155b0 @ 000155b0 ====

undefined4 FUN_000155b0(undefined4 param_1)

{
  FUN_000152d8(param_1);
  return param_1;
}


// ==== FUN_000155dc @ 000155dc ====

undefined4 FUN_000155dc(undefined4 param_1,undefined4 param_2)

{
  FUN_00015308(param_1,param_2);
  return param_1;
}


// ==== FUN_00015614 @ 00015614 ====

void FUN_00015614(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00014d44(param_1);
  if (iVar1 != 0) {
    FUN_00015660(param_1,param_2);
  }
  return;
}


// ==== FUN_00015660 @ 00015660 ====

undefined4 FUN_00015660(undefined4 *param_1,undefined4 param_2)

{
  system *this;
  undefined4 uVar1;
  undefined1 auStack_1c [20];
  
  FUN_00014e84(auStack_1c,*param_1,param_1[1],param_2);
  FUN_000171f4(auStack_1c);
  FUN_00014f7c(auStack_1c);
  this = (system *)__cxa_end_cleanup();
  uVar1 = boost::system::system_category(this);
  return uVar1;
}


// ==== FUN_000156ac @ 000156ac ====

undefined4 FUN_000156ac(system *param_1)

{
  undefined4 uVar1;
  
  uVar1 = boost::system::system_category(param_1);
  return uVar1;
}


// ==== FUN_000156f0 @ 000156f0 ====

string * FUN_000156f0(string *param_1,undefined4 param_2,int param_3)

{
  allocator aaStack_c [4];
  
  if (param_3 == 1) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_000158ac + 0x15734),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 2) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_000158b0 + 0x15778),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 4) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_000158b4 + 0x157bc),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 3) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_000158b8 + 0x15800),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_000158bc + 0x15838),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  return param_1;
}


// ==== FUN_000158c0 @ 000158c0 ====

int * FUN_000158c0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015904 + 0x158dc;
  FUN_00014af0(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00015908) + 8;
  return param_1;
}


// ==== FUN_0001590c @ 0001590c ====

int * FUN_0001590c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015954 + 0x15928;
  FUN_000158c0(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00015958) + 8;
  return param_1;
}


// ==== FUN_0001595c @ 0001595c ====

undefined4 FUN_0001595c(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = DAT_00015a08 + 0x15970;
  if (((**(uint **)(iVar2 + DAT_00015a0c) & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(*(undefined4 *)(iVar2 + DAT_00015a0c)), iVar1 != 0)) {
    FUN_0001590c(*(undefined4 *)(iVar2 + DAT_00015a10));
    __cxa_guard_release(*(undefined4 *)(iVar2 + DAT_00015a0c));
    __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00015a10),DAT_00015a14 + 0x159e8,
                   DAT_00015a18 + 0x159f4,DAT_00015a18 + 0x159f4,in_r3);
  }
  return *(undefined4 *)(iVar2 + DAT_00015a10);
}


// ==== FUN_00015a48 @ 00015a48 ====

string * FUN_00015a48(string *param_1,undefined4 param_2,int param_3)

{
  allocator aaStack_c [4];
  
  if (param_3 == 9) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015b5c + 0x15a8c),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 10) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015b60 + 0x15ad0),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015b64 + 0x15b08),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  return param_1;
}


// ==== FUN_00015b68 @ 00015b68 ====

int * FUN_00015b68(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015bb0 + 0x15b84;
  FUN_000158c0(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00015bb4) + 8;
  return param_1;
}


// ==== FUN_00015bb8 @ 00015bb8 ====

undefined4 FUN_00015bb8(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = DAT_00015c64 + 0x15bcc;
  if (((**(uint **)(iVar2 + DAT_00015c68) & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(*(undefined4 *)(iVar2 + DAT_00015c68)), iVar1 != 0)) {
    FUN_00015b68(*(undefined4 *)(iVar2 + DAT_00015c6c));
    __cxa_guard_release(*(undefined4 *)(iVar2 + DAT_00015c68));
    __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00015c6c),DAT_00015c70 + 0x15c44,
                   DAT_00015c74 + 0x15c50,DAT_00015c74 + 0x15c50,in_r3);
  }
  return *(undefined4 *)(iVar2 + DAT_00015c6c);
}


// ==== FUN_00015ca4 @ 00015ca4 ====

string * FUN_00015ca4(string *param_1,undefined4 param_2,int param_3)

{
  allocator aaStack_c [4];
  
  if (param_3 == 1) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015e60 + 0x15ce8),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 2) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015e64 + 0x15d2c),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 3) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015e68 + 0x15d70),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else if (param_3 == 4) {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015e6c + 0x15db4),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  else {
    std::allocator<char>::allocator();
    std::string::string(param_1,(char *)(DAT_00015e70 + 0x15dec),aaStack_c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_c);
  }
  return param_1;
}


// ==== FUN_00015e74 @ 00015e74 ====

int * FUN_00015e74(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015ebc + 0x15e90;
  FUN_000158c0(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00015ec0) + 8;
  return param_1;
}


// ==== FUN_00015ec4 @ 00015ec4 ====

undefined4 FUN_00015ec4(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = DAT_00015f70 + 0x15ed8;
  if (((**(uint **)(iVar2 + DAT_00015f74) & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(*(undefined4 *)(iVar2 + DAT_00015f74)), iVar1 != 0)) {
    FUN_00015e74(*(undefined4 *)(iVar2 + DAT_00015f78));
    __cxa_guard_release(*(undefined4 *)(iVar2 + DAT_00015f74));
    __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00015f78),DAT_00015f7c + 0x15f50,
                   DAT_00015f80 + 0x15f5c,DAT_00015f80 + 0x15f5c,in_r3);
  }
  return *(undefined4 *)(iVar2 + DAT_00015f78);
}


// ==== FUN_00015f84 @ 00015f84 ====

void FUN_00015f84(pthread_key_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  iVar1 = pthread_key_create(param_1,(__destr_function *)0x0);
  uVar2 = FUN_000156ac();
  FUN_00014be0(auStack_10,iVar1,uVar2);
  FUN_00015614(auStack_10,DAT_00015fec + 0x15fd8);
  return;
}


// ==== FUN_00015ff0 @ 00015ff0 ====

undefined4 FUN_00015ff0(undefined4 param_1)

{
  FUN_00014af0(param_1);
  return param_1;
}


// ==== FUN_00016018 @ 00016018 ====

void FUN_00016018(string *param_1)

{
  ostream *poVar1;
  int iVar2;
  
  iVar2 = DAT_0001616c + 0x16034;
  poVar1 = std::operator<<(*(ostream **)(iVar2 + DAT_00016170),(char *)(DAT_00016174 + 0x16048));
  poVar1 = std::operator<<(poVar1,param_1);
  poVar1 = std::operator<<(poVar1,(char *)(DAT_00016178 + 0x16070));
  poVar1 = (ostream *)
           std::ostream::operator<<
                     (poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001617c));
  poVar1 = std::operator<<(poVar1,(char *)(DAT_00016180 + 0x160a0));
  poVar1 = (ostream *)
           std::ostream::operator<<
                     (poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001617c));
  poVar1 = (ostream *)
           std::ostream::operator<<
                     (poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001617c));
  poVar1 = std::operator<<(poVar1,(char *)(DAT_00016184 + 0x160e8));
  poVar1 = (ostream *)
           std::ostream::operator<<
                     (poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001617c));
  poVar1 = std::operator<<(poVar1,(char *)(DAT_00016188 + 0x16118));
  poVar1 = (ostream *)
           std::ostream::operator<<
                     (poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001617c));
  poVar1 = std::operator<<(poVar1,(char *)(DAT_0001618c + 0x16148));
  std::ostream::operator<<(poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001617c));
  return;
}


// ==== main @ 00016190 ====

undefined4 main(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  ostream *poVar4;
  int iVar5;
  char *pcVar6;
  allocator aaStack_314 [4];
  char *local_310;
  uint local_30c;
  int local_308;
  long local_304;
  int local_300;
  string asStack_2f8 [744];
  
  iVar5 = DAT_0001660c + 0x161b0;
  _llog_set_ident(DAT_00016610 + 0x161b8);
  *(undefined4 *)(DAT_00016614 + 0x161c8) = 0xfff0000;
  if ((*(uint *)(DAT_00016618 + 0x161dc) & 0x800000) != 0) {
    _llogmsg_print(0x800000,DAT_0001661c + 0x161f8);
  }
  while( true ) {
    local_308 = getopt_long(param_1,param_2,DAT_0001663c + 0x1642c,DAT_00016640 + 0x16438,0);
    if (local_308 == -1) {
      local_300 = lab126_daemon_checksingleton(DAT_00016644 + 0x16468);
      if (local_300 < 0) {
        lab126_daemon_cleansingleton(DAT_00016648 + 0x1648c,local_300);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      AlexaDaemon::AlexaDaemon((AlexaDaemon *)asStack_2f8);
      do {
        pause();
      } while( true );
    }
    if (local_308 != 100) break;
    puVar2 = (undefined4 *)__errno();
    *puVar2 = 0;
    local_310 = (char *)0x0;
    local_304 = strtol((char *)**(undefined4 **)(iVar5 + DAT_00016620),&local_310,10);
    if ((((local_304 < 0) || (9 < local_304)) || (piVar3 = (int *)__errno(), *piVar3 != 0)) ||
       (local_310 == (char *)**(int **)(iVar5 + DAT_00016620))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      poVar4 = std::operator<<(*(ostream **)(iVar5 + DAT_00016624),(char *)(DAT_00016628 + 0x162b8))
      ;
      poVar4 = std::operator<<(poVar4,(char *)**(undefined4 **)(iVar5 + DAT_00016620));
      poVar4 = std::operator<<(poVar4,(char *)(DAT_0001662c + 0x162ec));
      std::ostream::operator<<(poVar4,*(_func_ostream_ptr_ostream_ptr **)(iVar5 + DAT_00016630));
      pcVar6 = (char *)*param_2;
      std::allocator<char>::allocator();
      std::string::string(asStack_2f8,pcVar6,aaStack_314);
      FUN_00016018(asStack_2f8);
      std::string::~string(asStack_2f8);
      std::allocator<char>::~allocator((allocator<char> *)aaStack_314);
      return 1;
    }
    for (local_30c = 0; (int)local_30c <= local_304; local_30c = local_30c + 1) {
      *(uint *)(DAT_00016638 + 0x16398) =
           0x8000 >> (local_30c & 0xff) | *(uint *)(DAT_00016634 + 0x16388);
    }
  }
  pcVar6 = (char *)*param_2;
  std::allocator<char>::allocator();
  std::string::string(asStack_2f8,pcVar6,(allocator *)&local_310);
  FUN_00016018(asStack_2f8);
  std::string::~string(asStack_2f8);
  std::allocator<char>::~allocator((allocator<char> *)&local_310);
  return 1;
}


// ==== FUN_00016664 @ 00016664 ====

undefined4 FUN_00016664(undefined4 param_1)

{
  FUN_000172ec(param_1);
  return param_1;
}


// ==== FUN_0001668c @ 0001668c ====

undefined4 FUN_0001668c(undefined4 param_1,undefined4 *param_2)

{
  FUN_000167b4(param_1,*param_2);
  return param_1;
}


// ==== clone_base @ 000166c4 ====

/* boost::exception_detail::clone_base::clone_base(boost::exception_detail::clone_base const&) */

clone_base * __thiscall
boost::exception_detail::clone_base::clone_base(clone_base *this,clone_base *param_1)

{
  *(int *)this = *(int *)(DAT_00016708 + 0x166e4 + DAT_0001670c) + 8;
  return this;
}


// ==== system_error @ 00016710 ====

/* boost::system::system_error::system_error(boost::system::system_error const&) */

system_error * __thiscall
boost::system::system_error::system_error(system_error *this,system_error *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_000167ac + 0x16730;
  std::runtime_error::runtime_error((runtime_error *)this,(runtime_error *)param_1);
  *(int *)this = *(int *)(iVar2 + DAT_000167b0) + 8;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  std::string::string((string *)(this + 0x10),(string *)(param_1 + 0x10));
  return this;
}


// ==== FUN_000167b4 @ 000167b4 ====

void FUN_000167b4(undefined4 *param_1,undefined4 param_2)

{
  FUN_000172ec(param_1);
  *param_1 = param_2;
  FUN_00017364(param_1);
  return;
}


// ==== FUN_000167ec @ 000167ec ====

undefined4 * FUN_000167ec(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00017364(param_1);
  return param_1;
}


// ==== FUN_00016828 @ 00016828 ====

int * FUN_00016828(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00016894 + 0x16844;
  FUN_0001446c(param_1);
  FUN_000143e8(param_1 + 5);
  *param_1 = *(int *)(iVar1 + DAT_00016898) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00016898) + 0x18;
  return param_1;
}


// ==== FUN_0001689c @ 0001689c ====

exception * FUN_0001689c(exception *param_1,exception *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00016920 + 0x168bc;
  boost::exception::exception(param_1,param_2);
  std::bad_alloc::bad_alloc((bad_alloc *)(param_1 + 0x14),(bad_alloc *)(param_2 + 0x14));
  *(int *)param_1 = *(int *)(iVar1 + DAT_00016924) + 8;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00016924) + 0x18;
  return param_1;
}


// ==== FUN_00016928 @ 00016928 ====

int * FUN_00016928(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_000169f0 + 0x16948;
  boost::exception_detail::clone_base::clone_base
            ((clone_base *)(param_1 + 6),(clone_base *)((int)param_2 + *(int *)(*param_2 + -0xc)));
  FUN_0001689c(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_000169f4) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_000169f4) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_000169f4) + 0x44;
  return param_1;
}


// ==== get_static_exception_object<boost::exception_detail::bad_alloc_> @ 000169f8 ====

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
  
  iVar4 = DAT_00016c0c + 0x16a14;
  FUN_00016828(auStack_4c);
  FUN_000173f8(auStack_34,auStack_4c);
  FUN_00014438(auStack_54,DAT_00016c10 + 0x16a44);
  uVar1 = FUN_0001763c(auStack_34,auStack_54);
  FUN_00014438(auStack_58,DAT_00016c14 + 0x16a74);
  uVar1 = FUN_0001766c(uVar1,auStack_58);
  FUN_00014438(auStack_5c,0x80);
  FUN_0001769c(uVar1,auStack_5c);
  if (((**(uint **)(iVar4 + DAT_00016c18) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(*(undefined4 *)(iVar4 + DAT_00016c18)), iVar2 != 0)) {
    pvVar3 = operator_new(0x1c);
    FUN_00016928(pvVar3,auStack_34);
    FUN_000176cc(auStack_54,pvVar3);
    FUN_00015358(*(undefined4 *)(iVar4 + DAT_00016c1c),auStack_54);
    __cxa_guard_release(*(undefined4 *)(iVar4 + DAT_00016c18));
    __aeabi_atexit(*(undefined4 *)(iVar4 + DAT_00016c1c),DAT_00016c20 + 0x16b64,
                   DAT_00016c24 + 0x16b70);
    FUN_000152d8(auStack_54);
  }
  FUN_000155dc(this,*(undefined4 *)(iVar4 + DAT_00016c1c));
  FUN_000174cc(auStack_34);
  FUN_0001538c(auStack_4c);
  return this;
}


// ==== FUN_00016c28 @ 00016c28 ====

int * FUN_00016c28(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00016c94 + 0x16c44;
  FUN_0001446c(param_1);
  FUN_00014398(param_1 + 5);
  *param_1 = *(int *)(iVar1 + DAT_00016c98) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00016c98) + 0x18;
  return param_1;
}


// ==== bad_exception @ 00016c9c ====

/* std::bad_exception::bad_exception(std::bad_exception const&) */

bad_exception * __thiscall
std::bad_exception::bad_exception(bad_exception *this,bad_exception *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00016cf0 + 0x16cbc;
  exception::exception((exception *)this,(exception *)param_1);
  *(int *)this = *(int *)(iVar1 + DAT_00016cf4) + 8;
  return this;
}


// ==== FUN_00016cf8 @ 00016cf8 ====

exception * FUN_00016cf8(exception *param_1,exception *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00016d7c + 0x16d18;
  boost::exception::exception(param_1,param_2);
  std::bad_exception::bad_exception
            ((bad_exception *)(param_1 + 0x14),(bad_exception *)(param_2 + 0x14));
  *(int *)param_1 = *(int *)(iVar1 + DAT_00016d80) + 8;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00016d80) + 0x18;
  return param_1;
}


// ==== FUN_00016d84 @ 00016d84 ====

int * FUN_00016d84(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00016e4c + 0x16da4;
  boost::exception_detail::clone_base::clone_base
            ((clone_base *)(param_1 + 6),(clone_base *)((int)param_2 + *(int *)(*param_2 + -0xc)));
  FUN_00016cf8(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00016e50) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00016e50) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00016e50) + 0x44;
  return param_1;
}


// ==== get_static_exception_object<boost::exception_detail::bad_exception_> @ 00016e54 ====

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
  
  iVar4 = DAT_00017068 + 0x16e70;
  FUN_00016c28(auStack_4c);
  FUN_00017764(auStack_34,auStack_4c);
  FUN_00014438(auStack_54,DAT_0001706c + 0x16ea0);
  uVar1 = FUN_0001763c(auStack_34,auStack_54);
  FUN_00014438(auStack_58,DAT_00017070 + 0x16ed0);
  uVar1 = FUN_0001766c(uVar1,auStack_58);
  FUN_00014438(auStack_5c,0x80);
  FUN_0001769c(uVar1,auStack_5c);
  if (((**(uint **)(iVar4 + DAT_00017074) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(*(undefined4 *)(iVar4 + DAT_00017074)), iVar2 != 0)) {
    pvVar3 = operator_new(0x1c);
    FUN_00016d84(pvVar3,auStack_34);
    FUN_000179a8(auStack_54,pvVar3);
    FUN_00015358(*(undefined4 *)(iVar4 + DAT_00017078),auStack_54);
    __cxa_guard_release(*(undefined4 *)(iVar4 + DAT_00017074));
    __aeabi_atexit(*(undefined4 *)(iVar4 + DAT_00017078),DAT_0001707c + 0x16fc0,
                   DAT_00017080 + 0x16fcc);
    FUN_000152d8(auStack_54);
  }
  FUN_000155dc(this,*(undefined4 *)(iVar4 + DAT_00017078));
  FUN_00017838(auStack_34);
  FUN_00015454(auStack_4c);
  return this;
}


// ==== error_info_injector @ 00017084 ====

/* boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(boost::exception_detail::error_info_injector<boost::system::system_error>
   const&) */

error_info_injector<boost::system::system_error> * __thiscall
boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
          (error_info_injector<boost::system::system_error> *this,error_info_injector *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001711c + 0x170a4;
  system::system_error::system_error((system_error *)this,(system_error *)param_1);
  exception::exception((exception *)(this + 0x14),(exception *)(param_1 + 0x14));
  *(int *)this = *(int *)(iVar1 + DAT_00017120) + 8;
  *(int *)(this + 0x14) = *(int *)(iVar1 + DAT_00017120) + 0x1c;
  return this;
}


// ==== FUN_00017124 @ 00017124 ====

error_info_injector<boost::system::system_error> *
FUN_00017124(error_info_injector<boost::system::system_error> *param_1,error_info_injector *param_2)

{
  int iVar1;
  
  iVar1 = DAT_000171ec + 0x17144;
  boost::exception_detail::clone_base::clone_base
            ((clone_base *)(param_1 + 0x28),
             (clone_base *)(param_2 + *(int *)(*(int *)param_2 + -0xc)));
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
            (param_1,param_2);
  *(int *)param_1 = *(int *)(iVar1 + DAT_000171f0) + 0xc;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_000171f0) + 0x28;
  *(int *)(param_1 + 0x28) = *(int *)(iVar1 + DAT_000171f0) + 0x44;
  return param_1;
}


// ==== FUN_000171f4 @ 000171f4 ====

void FUN_000171f4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  error_info_injector<boost::system::system_error> aeStack_38 [40];
  
  iVar2 = DAT_0001728c + 0x17210;
  FUN_00014728(param_1);
  uVar1 = __cxa_allocate_exception(0x2c);
  FUN_00017a40(aeStack_38,param_1);
  FUN_00017b34(uVar1,aeStack_38);
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
            (aeStack_38);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00017290),DAT_00017294 + 0x1726c);
}


// ==== FUN_00017298 @ 00017298 ====

undefined4 FUN_00017298(undefined4 param_1)

{
  FUN_00017cd0(param_1);
  return param_1;
}


// ==== FUN_000172c4 @ 000172c4 ====

undefined4 FUN_000172c4(undefined4 param_1)

{
  FUN_00015ff0(param_1);
  return param_1;
}


// ==== FUN_000172ec @ 000172ec ====

void FUN_000172ec(int *param_1)

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


// ==== FUN_00017364 @ 00017364 ====

void FUN_00017364(int *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*(int *)*param_1 + 0xc))(*param_1);
  }
  return;
}


// ==== clone_base @ 000173b0 ====

/* boost::exception_detail::clone_base::clone_base() */

clone_base * __thiscall boost::exception_detail::clone_base::clone_base(clone_base *this)

{
  *(int *)this = *(int *)(DAT_000173f0 + 0x173cc + DAT_000173f4) + 8;
  return this;
}


// ==== FUN_000173f8 @ 000173f8 ====

int * FUN_000173f8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_000174c4 + 0x17418;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 6));
  FUN_0001689c(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_000174c8) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_000174c8) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_000174c8) + 0x44;
  FUN_00014624(param_1,param_2);
  return param_1;
}


// ==== FUN_000174cc @ 000174cc ====

/* WARNING: Removing unreachable block (ram,0x0001755c) */

int * FUN_000174cc(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00017574 + 0x174e8;
  *param_1 = *(int *)(iVar1 + DAT_00017578) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00017578) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00017578) + 0x44;
  FUN_0001538c(param_1);
  FUN_0001459c(param_1 + 6);
  return param_1;
}


// ==== FUN_00017584 @ 00017584 ====

undefined4 FUN_00017584(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000174cc((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_000175c4 @ 000175c4 ====

void * FUN_000175c4(void *param_1)

{
  FUN_000174cc(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000175fc @ 000175fc ====

undefined4 FUN_000175fc(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000175c4((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_0001763c @ 0001763c ====

clone_impl * FUN_0001763c(clone_impl *param_1,error_info *param_2)

{
  clone_impl *pcVar1;
  
  pcVar1 = boost::exception_detail::
           set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>
                     (param_1,param_2);
  return pcVar1;
}


// ==== FUN_0001766c @ 0001766c ====

clone_impl * FUN_0001766c(clone_impl *param_1,error_info *param_2)

{
  clone_impl *pcVar1;
  
  pcVar1 = boost::exception_detail::
           set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>
                     (param_1,param_2);
  return pcVar1;
}


// ==== FUN_0001769c @ 0001769c ====

clone_impl * FUN_0001769c(clone_impl *param_1,error_info *param_2)

{
  clone_impl *pcVar1;
  
  pcVar1 = boost::exception_detail::
           set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>
                     (param_1,param_2);
  return pcVar1;
}


// ==== FUN_000176cc @ 000176cc ====

int * FUN_000176cc(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
  }
  *param_1 = iVar1;
  FUN_000149d0(param_1 + 1);
  FUN_00017e04(param_1,param_2,param_1 + 1);
  return param_1;
}


// ==== FUN_00017764 @ 00017764 ====

int * FUN_00017764(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017830 + 0x17784;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 6));
  FUN_00016cf8(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00017834) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00017834) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00017834) + 0x44;
  FUN_00014624(param_1,param_2);
  return param_1;
}


// ==== FUN_00017838 @ 00017838 ====

/* WARNING: Removing unreachable block (ram,0x000178c8) */

int * FUN_00017838(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000178e0 + 0x17854;
  *param_1 = *(int *)(iVar1 + DAT_000178e4) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_000178e4) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_000178e4) + 0x44;
  FUN_00015454(param_1);
  FUN_0001459c(param_1 + 6);
  return param_1;
}


// ==== FUN_000178f0 @ 000178f0 ====

undefined4 FUN_000178f0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00017838((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00017930 @ 00017930 ====

void * FUN_00017930(void *param_1)

{
  FUN_00017838(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00017968 @ 00017968 ====

undefined4 FUN_00017968(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00017930((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_000179a8 @ 000179a8 ====

int * FUN_000179a8(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
  }
  *param_1 = iVar1;
  FUN_000149d0(param_1 + 1);
  FUN_00017e60(param_1,param_2,param_1 + 1);
  return param_1;
}


// ==== FUN_00017a40 @ 00017a40 ====

error_info_injector<boost::system::system_error> *
FUN_00017a40(error_info_injector<boost::system::system_error> *param_1,system_error *param_2)

{
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
            (param_1,param_2);
  return param_1;
}


// ==== ~error_info_injector @ 00017a6c ====

/* WARNING: Removing unreachable block (ram,0x00017ad4) */
/* boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector()
    */

error_info_injector<boost::system::system_error> * __thiscall
boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
          (error_info_injector<boost::system::system_error> *this)

{
  int iVar1;
  
  iVar1 = DAT_00017aec + 0x17a88;
  *(int *)this = *(int *)(iVar1 + DAT_00017af0) + 8;
  *(int *)(this + 0x14) = *(int *)(iVar1 + DAT_00017af0) + 0x1c;
  exception::~exception((exception *)(this + 0x14));
  FUN_00014f7c(this);
  return this;
}


// ==== ~error_info_injector @ 00017af4 ====

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


// ==== ~error_info_injector @ 00017afc ====

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


// ==== ~error_info_injector @ 00017b2c ====

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


// ==== FUN_00017b34 @ 00017b34 ====

undefined4 FUN_00017b34(undefined4 param_1,undefined4 param_2)

{
  FUN_00017f38(param_1,param_2);
  return param_1;
}


// ==== FUN_00017b60 @ 00017b60 ====

/* WARNING: Removing unreachable block (ram,0x00017bf0) */

error_info_injector<boost::system::system_error> *
FUN_00017b60(error_info_injector<boost::system::system_error> *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00017c08 + 0x17b7c;
  *(int *)param_1 = *(int *)(iVar1 + DAT_00017c0c) + 0xc;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00017c0c) + 0x28;
  *(int *)(param_1 + 0x28) = *(int *)(iVar1 + DAT_00017c0c) + 0x44;
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
            (param_1);
  FUN_0001459c(param_1 + 0x28);
  return param_1;
}


// ==== FUN_00017c18 @ 00017c18 ====

undefined4 FUN_00017c18(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00017b60((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00017c58 @ 00017c58 ====

void * FUN_00017c58(void *param_1)

{
  FUN_00017b60(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00017c90 @ 00017c90 ====

undefined4 FUN_00017c90(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00017c58((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00017cd0 @ 00017cd0 ====

undefined4 FUN_00017cd0(undefined4 param_1)

{
  FUN_00014af0(param_1);
  FUN_00015f84(param_1);
  return param_1;
}


// ==== FUN_00017d14 @ 00017d14 ====

pthread_key_t * FUN_00017d14(pthread_key_t *param_1)

{
  pthread_key_delete(*param_1);
  FUN_00014af0(param_1);
  return param_1;
}


// ==== set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>> @ 00017d5c ====

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


// ==== set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>> @ 00017d94 ====

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


// ==== set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>> @ 00017dcc ====

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


// ==== FUN_00017e04 @ 00017e04 ====

void FUN_00017e04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_c [4];
  
  FUN_00018014(auStack_c,param_2);
  FUN_00014a94(auStack_c,param_3);
  FUN_00014a00(auStack_c);
  FUN_00014adc(param_1,param_2,param_2);
  return;
}


// ==== FUN_00017e60 @ 00017e60 ====

void FUN_00017e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_c [4];
  
  FUN_00018088(auStack_c,param_2);
  FUN_00014a94(auStack_c,param_3);
  FUN_00014a00(auStack_c);
  FUN_00014adc(param_1,param_2,param_2);
  return;
}


// ==== error_info_injector @ 00017ebc ====

/* boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(boost::system::system_error
   const&) */

error_info_injector<boost::system::system_error> * __thiscall
boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
          (error_info_injector<boost::system::system_error> *this,system_error *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00017f30 + 0x17edc;
  system::system_error::system_error((system_error *)this,param_1);
  FUN_0001446c(this + 0x14);
  *(int *)this = *(int *)(iVar1 + DAT_00017f34) + 8;
  *(int *)(this + 0x14) = *(int *)(iVar1 + DAT_00017f34) + 0x1c;
  return this;
}


// ==== FUN_00017f38 @ 00017f38 ====

error_info_injector<boost::system::system_error> *
FUN_00017f38(error_info_injector<boost::system::system_error> *param_1,error_info_injector *param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001800c + 0x17f58;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 0x28));
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
            (param_1,param_2);
  *(int *)param_1 = *(int *)(iVar1 + DAT_00018010) + 0xc;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00018010) + 0x28;
  *(int *)(param_1 + 0x28) = *(int *)(iVar1 + DAT_00018010) + 0x44;
  FUN_00014624(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}


// ==== FUN_00018014 @ 00018014 ====

undefined4 * FUN_00018014(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  pvVar1 = operator_new(0x10);
  FUN_000180fc(pvVar1,param_2);
  *param_1 = pvVar1;
  return param_1;
}


// ==== FUN_00018088 @ 00018088 ====

undefined4 * FUN_00018088(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  pvVar1 = operator_new(0x10);
  FUN_0001815c(pvVar1,param_2);
  *param_1 = pvVar1;
  return param_1;
}


// ==== FUN_000180fc @ 000180fc ====

int * FUN_000180fc(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00018154 + 0x1811c;
  FUN_000147c4(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00018158) + 8;
  param_1[3] = param_2;
  return param_1;
}


// ==== FUN_0001815c @ 0001815c ====

int * FUN_0001815c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_000181b4 + 0x1817c;
  FUN_000147c4(param_1);
  *param_1 = *(int *)(iVar1 + DAT_000181b8) + 8;
  param_1[3] = param_2;
  return param_1;
}


// ==== FUN_000181bc @ 000181bc ====

/* WARNING: Removing unreachable block (ram,0x00018200) */

int * FUN_000181bc(int *param_1)

{
  *param_1 = *(int *)(DAT_00018218 + 0x181d8 + DAT_0001821c) + 8;
  FUN_00014824(param_1);
  return param_1;
}


// ==== FUN_00018220 @ 00018220 ====

void * FUN_00018220(void *param_1)

{
  FUN_000181bc(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00018250 @ 00018250 ====

/* WARNING: Removing unreachable block (ram,0x00018294) */

int * FUN_00018250(int *param_1)

{
  *param_1 = *(int *)(DAT_000182ac + 0x1826c + DAT_000182b0) + 8;
  FUN_00014824(param_1);
  return param_1;
}


// ==== FUN_000182b4 @ 000182b4 ====

void * FUN_000182b4(void *param_1)

{
  FUN_00018250(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000182e4 @ 000182e4 ====

/* WARNING: Removing unreachable block (ram,0x00018328) */

int * FUN_000182e4(int *param_1)

{
  *param_1 = *(int *)(DAT_00018340 + 0x18300 + DAT_00018344) + 8;
  FUN_00014b14(param_1);
  return param_1;
}


// ==== FUN_00018348 @ 00018348 ====

void * FUN_00018348(void *param_1)

{
  FUN_000182e4(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00018378 @ 00018378 ====

/* WARNING: Removing unreachable block (ram,0x000183bc) */

int * FUN_00018378(int *param_1)

{
  *param_1 = *(int *)(DAT_000183d4 + 0x18394 + DAT_000183d8) + 8;
  FUN_00014b14(param_1);
  return param_1;
}


// ==== FUN_000183dc @ 000183dc ====

void * FUN_000183dc(void *param_1)

{
  FUN_00018378(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_0001840c @ 0001840c ====

/* WARNING: Removing unreachable block (ram,0x00018450) */

int * FUN_0001840c(int *param_1)

{
  *param_1 = *(int *)(DAT_00018468 + 0x18428 + DAT_0001846c) + 8;
  FUN_00014b14(param_1);
  return param_1;
}


// ==== FUN_00018470 @ 00018470 ====

void * FUN_00018470(void *param_1)

{
  FUN_0001840c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000184a0 @ 000184a0 ====

undefined4 FUN_000184a0(undefined4 param_1)

{
  FUN_00017d14(param_1);
  return param_1;
}


// ==== FUN_000184cc @ 000184cc ====

void FUN_000184cc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_000188c4 + 0x184ec;
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)(DAT_000188c8 + 0x18510));
    __aeabi_atexit(DAT_000188cc + 0x18520,*(undefined4 *)(iVar2 + DAT_000188d0),
                   DAT_000188d4 + 0x18538);
    FUN_00014af0(DAT_000188d8 + 0x18548);
    FUN_00014af0(DAT_000188dc + 0x18558);
    FUN_00014af0(DAT_000188e0 + 0x18568);
    FUN_00014af0(DAT_000188e4 + 0x18578);
    FUN_00014af0(DAT_000188e8 + 0x18588);
    FUN_00014af0(DAT_000188ec + 0x18598);
    FUN_00014af0(DAT_000188f0 + 0x185a8);
    FUN_00014af0(DAT_000188f4 + 0x185b8);
    FUN_00014af0(DAT_000188f8 + 0x185c8);
    if ((**(uint **)(iVar2 + DAT_000188fc) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_000188fc) = 1;
      boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>
                (*(exception_detail **)(iVar2 + DAT_00018900));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018900),DAT_00018904 + 0x1861c,
                     DAT_00018908 + 0x18628);
    }
    if ((**(uint **)(iVar2 + DAT_0001890c) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_0001890c) = 1;
      boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>
                (*(exception_detail **)(iVar2 + DAT_00018910));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018910),DAT_00018914 + 0x1867c,
                     DAT_00018918 + 0x18688);
    }
    uVar1 = FUN_000156ac();
    *(undefined4 *)(DAT_0001891c + 100000) = uVar1;
    uVar1 = FUN_0001595c();
    *(undefined4 *)(DAT_00018920 + 0x186b4) = uVar1;
    uVar1 = FUN_00015bb8();
    *(undefined4 *)(DAT_00018924 + 0x186c8) = uVar1;
    uVar1 = FUN_00015ec4();
    *(undefined4 *)(DAT_00018928 + 0x186dc) = uVar1;
    if ((**(uint **)(iVar2 + DAT_0001892c) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_0001892c) = 1;
      FUN_00017298(*(undefined4 *)(iVar2 + DAT_00018930));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018930),DAT_00018934 + 0x1872c,
                     DAT_00018938 + 0x18738);
    }
    if ((**(uint **)(iVar2 + DAT_0001893c) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_0001893c) = 1;
      FUN_000172c4(*(undefined4 *)(iVar2 + DAT_00018940));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018940),DAT_00018944 + 0x1878c,
                     DAT_00018948 + 0x18798);
    }
    if ((**(uint **)(iVar2 + DAT_0001894c) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_0001894c) = 1;
      FUN_000172c4(*(undefined4 *)(iVar2 + DAT_00018950));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018950),DAT_00018954 + 0x187ec,
                     DAT_00018958 + 0x187f8);
    }
    if ((**(uint **)(iVar2 + DAT_0001895c) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_0001895c) = 1;
      FUN_00017298(*(undefined4 *)(iVar2 + DAT_00018960));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018960),DAT_00018964 + 0x1884c,
                     DAT_00018968 + 0x18858);
    }
    if ((**(uint **)(iVar2 + DAT_0001896c) & 1) == 0) {
      **(undefined4 **)(iVar2 + DAT_0001896c) = 1;
      FUN_000172c4(*(undefined4 *)(iVar2 + DAT_00018970));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_00018970),DAT_00018974 + 0x188ac,
                     DAT_00018978 + 0x188b8);
    }
  }
  return;
}


// ==== FUN_0001897c @ 0001897c ====

void FUN_0001897c(int param_1)

{
  FUN_000148ac(*(undefined4 *)(param_1 + 0xc));
  return;
}


// ==== FUN_000189f0 @ 000189f0 ====

int FUN_000189f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x2c);
  FUN_00018de0(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_00018a60 @ 00018a60 ====

undefined4 FUN_00018a60(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000189f0((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_00018aa0 @ 00018aa0 ====

void FUN_00018aa0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00018afc + 0x18abc;
  uVar1 = __cxa_allocate_exception(0x2c);
  FUN_00017124(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00018b00),DAT_00018b04 + 0x18aec);
}


// ==== FUN_00018b08 @ 00018b08 ====

void FUN_00018b08(int *param_1)

{
  FUN_00018aa0((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_00018b40 @ 00018b40 ====

int FUN_00018b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x1c);
  FUN_00018ec4(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_00018bb0 @ 00018bb0 ====

undefined4 FUN_00018bb0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018b40((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_00018bf0 @ 00018bf0 ====

void FUN_00018bf0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00018c4c + 0x18c0c;
  uVar1 = __cxa_allocate_exception(0x1c);
  FUN_00016d84(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00018c50),DAT_00018c54 + 0x18c3c);
}


// ==== FUN_00018c58 @ 00018c58 ====

void FUN_00018c58(int *param_1)

{
  FUN_00018bf0((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_00018c90 @ 00018c90 ====

int FUN_00018c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x1c);
  FUN_00018fa0(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_00018d00 @ 00018d00 ====

undefined4 FUN_00018d00(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018c90((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_00018d40 @ 00018d40 ====

void FUN_00018d40(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00018d9c + 0x18d5c;
  uVar1 = __cxa_allocate_exception(0x1c);
  FUN_00016928(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00018da0),DAT_00018da4 + 0x18d8c);
}


// ==== FUN_00018da8 @ 00018da8 ====

void FUN_00018da8(int *param_1)

{
  FUN_00018d40((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_00018de0 @ 00018de0 ====

error_info_injector<boost::system::system_error> *
FUN_00018de0(error_info_injector<boost::system::system_error> *param_1,error_info_injector *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00018ebc + 0x18e04;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 0x28));
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector
            (param_1,param_2);
  *(int *)param_1 = *(int *)(iVar1 + DAT_00018ec0) + 0xc;
  *(int *)(param_1 + 0x14) = *(int *)(iVar1 + DAT_00018ec0) + 0x28;
  *(int *)(param_1 + 0x28) = *(int *)(iVar1 + DAT_00018ec0) + 0x44;
  FUN_00014624(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}


// ==== FUN_00018ec4 @ 00018ec4 ====

int * FUN_00018ec4(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00018f98 + 0x18ee8;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 6));
  FUN_00016cf8(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00018f9c) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00018f9c) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00018f9c) + 0x44;
  FUN_00014624(param_1,param_2);
  return param_1;
}


// ==== FUN_00018fa0 @ 00018fa0 ====

int * FUN_00018fa0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00019074 + 0x18fc4;
  boost::exception_detail::clone_base::clone_base((clone_base *)(param_1 + 6));
  FUN_0001689c(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00019078) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00019078) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00019078) + 0x44;
  FUN_00014624(param_1,param_2);
  return param_1;
}


// ==== FUN_00019094 @ 00019094 ====

undefined4 FUN_00019094(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = boost::system::generic_category();
  FUN_00014be0(param_1,param_2,uVar1);
  return param_1;
}


// ==== FUN_000190d0 @ 000190d0 ====

int * FUN_000190d0(int *param_1)

{
  FUN_000158c0(param_1);
  *param_1 = DAT_00019110 + 0x19104;
  return param_1;
}


// ==== FUN_00019114 @ 00019114 ====

int * FUN_00019114(int *param_1)

{
  FUN_000158c0(param_1);
  *param_1 = DAT_00019154 + 0x19148;
  return param_1;
}


// ==== FUN_00019be0 @ 00019be0 ====

undefined4 FUN_00019be0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)boost::system::generic_category();
  (**(code **)(*piVar1 + 0xc))(param_1,piVar1,param_3);
  return param_1;
}


// ==== system_category @ 00019c2c ====

/* boost::system::system_category() */

int __thiscall boost::system::system_category(system *this)

{
  int iVar1;
  
  if (((*(uint *)(DAT_00019cd0 + 0x19c40) & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(DAT_00019cd4 + 0x19c58), iVar1 != 0)) {
    FUN_00019114(DAT_00019cd8 + 0x19c84);
    __cxa_guard_release(DAT_00019cdc + 0x19c94);
    __aeabi_atexit(DAT_00019ce0 + 0x19ca4,DAT_00019ce4 + 0x19cb0,DAT_00019ce8 + 0x19cbc);
  }
  return DAT_00019cec + 0x19ccc;
}


// ==== generic_category @ 00019cf0 ====

/* boost::system::generic_category() */

int boost::system::generic_category(void)

{
  int iVar1;
  
  if (((*(uint *)(DAT_00019d94 + 0x19d04) & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(DAT_00019d98 + 0x19d1c), iVar1 != 0)) {
    FUN_000190d0(DAT_00019d9c + 0x19d48);
    __cxa_guard_release(DAT_00019da0 + 0x19d58);
    __aeabi_atexit(DAT_00019da4 + 0x19d68,DAT_00019da8 + 0x19d74,DAT_00019dac + 0x19d80);
  }
  return DAT_00019db0 + 0x19d90;
}


// ==== FUN_00019db4 @ 00019db4 ====

/* WARNING: Removing unreachable block (ram,0x00019df0) */

int * FUN_00019db4(int *param_1)

{
  *param_1 = DAT_00019e08 + 0x19ddc;
  FUN_00014b14(param_1);
  return param_1;
}


// ==== FUN_00019e0c @ 00019e0c ====

void * FUN_00019e0c(void *param_1)

{
  FUN_00019db4(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00019e3c @ 00019e3c ====

/* WARNING: Removing unreachable block (ram,0x00019e78) */

int * FUN_00019e3c(int *param_1)

{
  *param_1 = DAT_00019e90 + 0x19e64;
  FUN_00014b14(param_1);
  return param_1;
}


// ==== FUN_00019e94 @ 00019e94 ====

void * FUN_00019e94(void *param_1)

{
  FUN_00019e3c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== __libc_init @ 0001f000 ====

/* WARNING: Control flow encountered bad instruction data */

void __libc_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_atexit @ 0001f004 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr0 @ 0001f00c ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr1 @ 0001f014 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __gxx_personality_v0 @ 0001f01c ====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator.delete @ 0001f020 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_end_cleanup @ 0001f024 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_call_unexpected @ 0001f028 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_call_unexpected(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== allocator @ 0001f02c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== string @ 0001f030 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::string(string *this,char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== runtime_error @ 0001f034 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~string @ 0001f038 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::~string(string *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~allocator @ 0001f03c ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== string @ 0001f040 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::string(string *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~runtime_error @ 0001f044 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== empty @ 0001f048 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::empty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== what @ 0001f04c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator= @ 0001f050 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::operator=(string *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator+= @ 0001f054 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::operator+=(string *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator+= @ 0001f058 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::operator+=(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== c_str @ 0001f05c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::c_str(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_begin_catch @ 0001f060 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_end_catch @ 0001f064 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== string @ 0001f068 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::string(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~exception @ 0001f06c ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~bad_alloc @ 0001f074 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~bad_exception @ 0001f078 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_guard_acquire @ 0001f07c ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_guard_release @ 0001f080 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_atexit @ 0001f084 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_key_create @ 0001f088 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator<< @ 0001f08c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator<< @ 0001f090 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,string *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator<< @ 0001f094 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== endl<char,std::char_traits<char>> @ 0001f09c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _llog_set_ident @ 0001f0a0 ====

/* WARNING: Control flow encountered bad instruction data */

void _llog_set_ident(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _llogmsg_print @ 0001f0a4 ====

/* WARNING: Control flow encountered bad instruction data */

void _llogmsg_print(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __errno @ 0001f0a8 ====

/* WARNING: Control flow encountered bad instruction data */

void __errno(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strtol @ 0001f0ac ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== getopt_long @ 0001f0b0 ====

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== lab126_daemon_checksingleton @ 0001f0b4 ====

/* WARNING: Control flow encountered bad instruction data */

void lab126_daemon_checksingleton(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== lab126_daemon_cleansingleton @ 0001f0b8 ====

/* WARNING: Control flow encountered bad instruction data */

void lab126_daemon_cleansingleton(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== exit @ 0001f0bc ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== AlexaDaemon @ 0001f0c0 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall AlexaDaemon::AlexaDaemon(AlexaDaemon *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pause @ 0001f0c4 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pause(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~AlexaDaemon @ 0001f0c8 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall AlexaDaemon::~AlexaDaemon(AlexaDaemon *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator.new @ 0001f0d8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_guard_abort @ 0001f0dc ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_allocate_exception @ 0001f0e0 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_throw @ 0001f0e4 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_free_exception @ 0001f0e8 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_key_delete @ 0001f0ec ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_rethrow @ 0001f0f0 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== what @ 0001f0f4 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::bad_exception::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== what @ 0001f0f8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::bad_alloc::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_pure_virtual @ 0001f0fc ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== Init @ 0001f118 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~Init @ 0001f11c ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::~Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strerror @ 0001f120 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


