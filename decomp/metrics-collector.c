// metrics-collector  functions=1041

// ==== __libc_init @ 00012fec ====

void __libc_init(void)

{
  (*(code *)PTR___libc_init_00031e5c)();
  return;
}


// ==== __cxa_atexit @ 00012ff8 ====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00031e60)();
  return;
}


// ==== operator<< @ 00013004 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00031e64)(param_1);
  return poVar1;
}


// ==== operator<< @ 00013010 ====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00031e68)(this);
  return;
}


// ==== getopt_long @ 0001301c ====

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00031e6c)();
  return;
}


// ==== daemon @ 00013028 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_daemon_00031e70)(__nochdir);
  return iVar1;
}


// ==== lab126_daemon_checksingleton @ 00013034 ====

void lab126_daemon_checksingleton(void)

{
  (*(code *)PTR_lab126_daemon_checksingleton_00031e74)();
  return;
}


// ==== _llog_set_ident @ 00013040 ====

void _llog_set_ident(void)

{
  (*(code *)PTR__llog_set_ident_00031e78)();
  return;
}


// ==== allocator @ 0001304c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
  (*(code *)PTR_allocator_00031e7c)();
  return;
}


// ==== string @ 00013058 ====

void __thiscall std::string::string(string *this,char *param_1,allocator *param_2)

{
  (*(code *)PTR_string_00031e80)(this);
  return;
}


// ==== ~string @ 00013064 ====

void __thiscall std::string::~string(string *this)

{
  (*(code *)PTR__string_00031e84)(this);
  return;
}


// ==== ~allocator @ 00013070 ====

void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00031e88)(this);
  return;
}


// ==== signal @ 0001307c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00031e8c)(__sig);
  return p_Var1;
}


// ==== _llogmsg_print @ 00013088 ====

void _llogmsg_print(void)

{
  (*(code *)PTR__llogmsg_print_00031e90)();
  return;
}


// ==== lab126_daemon_cleansingleton @ 00013094 ====

void lab126_daemon_cleansingleton(void)

{
  (*(code *)PTR_lab126_daemon_cleansingleton_00031e94)();
  return;
}


// ==== __cxa_end_cleanup @ 000130a0 ====

void __cxa_end_cleanup(void)

{
  (*(code *)PTR___cxa_end_cleanup_00031e98)();
  return;
}


// ==== __gxx_personality_v0 @ 000130ac ====

void __gxx_personality_v0(void)

{
  (*(code *)PTR___gxx_personality_v0_00031e9c)();
  return;
}


// ==== Init @ 000130b8 ====

void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00031ea0)(this);
  return;
}


// ==== __aeabi_atexit @ 000130c4 ====

void __aeabi_atexit(void)

{
  (*(code *)PTR___aeabi_atexit_00031ea4)();
  return;
}


// ==== operator.delete @ 000130d0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00031ea8)(param_1);
  return;
}


// ==== __cxa_call_unexpected @ 000130dc ====

void __cxa_call_unexpected(void)

{
  (*(code *)PTR___cxa_call_unexpected_00031eac)();
  return;
}


// ==== runtime_error @ 000130e8 ====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,string *param_1)

{
  (*(code *)PTR_runtime_error_00031eb0)(this);
  return;
}


// ==== string @ 000130f4 ====

void __thiscall std::string::string(string *this)

{
  (*(code *)PTR_string_00031eb4)(this);
  return;
}


// ==== ~runtime_error @ 00013100 ====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_00031eb8)(this);
  return;
}


// ==== empty @ 0001310c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::empty(void)

{
  (*(code *)PTR_empty_00031ebc)();
  return;
}


// ==== what @ 00013118 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
  (*(code *)PTR_what_00031ec0)();
  return;
}


// ==== operator= @ 00013124 ====

void __thiscall std::string::operator=(string *this,char *param_1)

{
  (*(code *)PTR_operator__00031ec4)(this);
  return;
}


// ==== operator+= @ 00013130 ====

void __thiscall std::string::operator+=(string *this,char *param_1)

{
  (*(code *)PTR_operator___00031ec8)(this);
  return;
}


// ==== operator+= @ 0001313c ====

void __thiscall std::string::operator+=(string *this,string *param_1)

{
  (*(code *)PTR_operator___00031ecc)(this);
  return;
}


// ==== c_str @ 00013148 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::c_str(void)

{
  (*(code *)PTR_c_str_00031ed0)();
  return;
}


// ==== __cxa_begin_catch @ 00013154 ====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00031ed4)();
  return;
}


// ==== __cxa_end_catch @ 00013160 ====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00031ed8)();
  return;
}


// ==== pthread_mutex_lock @ 0001316c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00031edc)(__mutex);
  return iVar1;
}


// ==== pthread_mutex_unlock @ 00013178 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00031ee0)(__mutex);
  return iVar1;
}


// ==== pthread_mutex_init @ 00013184 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00031ee4)(__mutex);
  return iVar1;
}


// ==== pthread_mutex_destroy @ 00013190 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00031ee8)(__mutex);
  return iVar1;
}


// ==== pthread_cond_init @ 0001319c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_00031eec)(__cond);
  return iVar1;
}


// ==== pthread_cond_destroy @ 000131a8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_destroy_00031ef0)(__cond);
  return iVar1;
}


// ==== __cxa_allocate_exception @ 000131b4 ====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00031ef4)();
  return;
}


// ==== __cxa_throw @ 000131c0 ====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00031ef8)();
  return;
}


// ==== pthread_cond_wait @ 000131cc ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_wait_00031efc)(__cond);
  return iVar1;
}


// ==== pthread_cond_signal @ 000131d8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_signal_00031f00)(__cond);
  return iVar1;
}


// ==== malloc @ 000131e4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00031f04)(__size);
  return pvVar1;
}


// ==== free @ 000131f0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00031f08)(__ptr);
  return;
}


// ==== fgetc @ 000131fc ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_00031f0c)(__stream);
  return iVar1;
}


// ==== string @ 00013208 ====

void __thiscall std::string::string(string *this,string *param_1)

{
  (*(code *)PTR_string_00031f10)(this);
  return;
}


// ==== LipcGetStringParam @ 00013214 ====

void LipcGetStringParam(void)

{
  (*(code *)PTR_LipcGetStringParam_00031f14)();
  return;
}


// ==== LipcGetErrorString @ 00013220 ====

void LipcGetErrorString(void)

{
  (*(code *)PTR_LipcGetErrorString_00031f18)();
  return;
}


// ==== LipcGetEventSource @ 0001322c ====

void LipcGetEventSource(void)

{
  (*(code *)PTR_LipcGetEventSource_00031f1c)();
  return;
}


// ==== append @ 00013238 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::append(char *param_1)

{
  (*(code *)PTR_append_00031f20)(param_1);
  return;
}


// ==== LipcGetUInt64Param @ 00013244 ====

void LipcGetUInt64Param(void)

{
  (*(code *)PTR_LipcGetUInt64Param_00031f24)();
  return;
}


// ==== LipcSubscribeExt @ 00013250 ====

void LipcSubscribeExt(void)

{
  (*(code *)PTR_LipcSubscribeExt_00031f28)();
  return;
}


// ==== LipcOpenEx @ 0001325c ====

void LipcOpenEx(void)

{
  (*(code *)PTR_LipcOpenEx_00031f2c)();
  return;
}


// ==== LlogInitLogProperties @ 00013268 ====

void LlogInitLogProperties(void)

{
  (*(code *)PTR_LlogInitLogProperties_00031f30)();
  return;
}


// ==== fopen @ 00013274 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00031f34)(__filename);
  return pFVar1;
}


// ==== __errno @ 00013280 ====

void __errno(void)

{
  (*(code *)PTR___errno_00031f38)();
  return;
}


// ==== strerror @ 0001328c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00031f3c)(__errnum);
  return pcVar1;
}


// ==== fclose @ 00013298 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00031f40)(__stream);
  return iVar1;
}


// ==== strcasecmp @ 000132a4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_00031f44)(__s1);
  return iVar1;
}


// ==== operator.new @ 000132b0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00031f48)(param_1);
  return pvVar1;
}


// ==== ~exception @ 000132bc ====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_00031f4c)(this);
  return;
}


// ==== __cxa_free_exception @ 000132c8 ====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_00031f50)();
  return;
}


// ==== append @ 000132d4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::append(string *param_1)

{
  (*(code *)PTR_append_00031f54)(param_1);
  return;
}


// ==== _Rb_tree_increment @ 000132e0 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_increment_00031f58)(param_1);
  return;
}


// ==== setjmp @ 000132ec ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setjmp_00031f5c)(__env);
  return iVar1;
}


// ==== longjmp @ 000132f8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_longjmp_00031f60)(__env);
  return;
}


// ==== memcpy @ 00013304 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00031f64)(__dest);
  return pvVar1;
}


// ==== __cxa_guard_acquire @ 00013310 ====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_00031f68)();
  return;
}


// ==== __cxa_guard_release @ 0001331c ====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_00031f6c)();
  return;
}


// ==== __cxa_rethrow @ 00013328 ====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00031f70)();
  return;
}


// ==== compare @ 00013334 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::compare(string *param_1)

{
  (*(code *)PTR_compare_00031f74)(param_1);
  return;
}


// ==== memcmp @ 00013340 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00031f78)(__s1);
  return iVar1;
}


// ==== _Rb_tree_insert_and_rebalance @ 0001334c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
  (*(code *)PTR__Rb_tree_insert_and_rebalance_00031f7c)(param_1);
  return;
}


// ==== __throw_bad_alloc @ 00013358 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00031f80)();
  return;
}


// ==== _Rb_tree_decrement @ 00013364 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_decrement_00031f84)(param_1);
  return;
}


// ==== memset @ 00013370 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00031f88)(__s);
  return pvVar1;
}


// ==== __aeabi_ul2d @ 0001337c ====

void __aeabi_ul2d(void)

{
  (*(code *)PTR___aeabi_ul2d_00031f8c)();
  return;
}


// ==== memmove @ 00013388 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00031f90)(__dest);
  return pvVar1;
}


// ==== __cxa_pure_virtual @ 00013394 ====

void __cxa_pure_virtual(void)

{
  (*(code *)PTR___cxa_pure_virtual_00031f94)();
  return;
}


// ==== operator== @ 000133a0 ====

void __thiscall std::type_info::operator==(type_info *this,type_info *param_1)

{
  (*(code *)PTR_operator___00031f98)(this);
  return;
}


// ==== operator= @ 000133ac ====

void __thiscall std::string::operator=(string *this,string *param_1)

{
  (*(code *)PTR_operator__00031f9c)(this);
  return;
}


// ==== runtime_error @ 000133b8 ====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,string *param_1)

{
  (*(code *)PTR_runtime_error_00031fa0)(this);
  return;
}


// ==== g_hash_table_new @ 000133c4 ====

void g_hash_table_new(void)

{
  (*(code *)PTR_g_hash_table_new_00031fa4)();
  return;
}


// ==== g_hash_table_insert @ 000133d0 ====

void g_hash_table_insert(void)

{
  (*(code *)PTR_g_hash_table_insert_00031fa8)();
  return;
}


// ==== record_device_metric @ 000133dc ====

void record_device_metric(void)

{
  (*(code *)PTR_record_device_metric_00031fac)();
  return;
}


// ==== g_hash_table_destroy @ 000133e8 ====

void g_hash_table_destroy(void)

{
  (*(code *)PTR_g_hash_table_destroy_00031fb0)();
  return;
}


// ==== size @ 000133f4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::size(void)

{
  (*(code *)PTR_size_00031fb4)();
  return;
}


// ==== data @ 00013400 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::data(void)

{
  (*(code *)PTR_data_00031fb8)();
  return;
}


// ==== ~bad_alloc @ 0001340c ====

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  (*(code *)PTR__bad_alloc_00031fbc)(this);
  return;
}


// ==== ~bad_exception @ 00013418 ====

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  (*(code *)PTR__bad_exception_00031fc0)(this);
  return;
}


// ==== pthread_key_create @ 00013424 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_create_00031fc4)(__key);
  return iVar1;
}


// ==== pthread_getspecific @ 00013430 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_pthread_getspecific_00031fc8)(__key);
  return pvVar1;
}


// ==== __cxa_guard_abort @ 0001343c ====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_00031fcc)();
  return;
}


// ==== _Rb_tree_rebalance_for_erase @ 00013448 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
  (*(code *)PTR__Rb_tree_rebalance_for_erase_00031fd0)(param_1);
  return;
}


// ==== _Alloc_hider @ 00013454 ====

void __thiscall
std::string::_Alloc_hider::_Alloc_hider(_Alloc_hider *this,char *param_1,allocator *param_2)

{
  (*(code *)PTR__Alloc_hider_00031fd4)(this);
  return;
}


// ==== _S_empty_rep @ 00013460 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::_S_empty_rep(void)

{
  (*(code *)PTR__S_empty_rep_00031fd8)();
  return;
}


// ==== _M_refdata @ 0001346c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::_Rep::_M_refdata(void)

{
  (*(code *)PTR__M_refdata_00031fdc)();
  return;
}


// ==== __throw_logic_error @ 00013478 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_logic_error(char *param_1)

{
  (*(code *)PTR___throw_logic_error_00031fe0)(param_1);
  return;
}


// ==== _S_create @ 00013484 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::_Rep::_S_create(uint param_1,uint param_2,allocator *param_3)

{
  (*(code *)PTR__S_create_00031fe4)(param_1);
  return;
}


// ==== _S_copy_chars @ 00013490 ====

void std::string::_S_copy_chars(void)

{
  (*(code *)PTR__S_copy_chars_00031fe8)();
  return;
}


// ==== _M_set_length_and_sharable @ 0001349c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::_Rep::_M_set_length_and_sharable(uint param_1)

{
  (*(code *)PTR__M_set_length_and_sharable_00031fec)(param_1);
  return;
}


// ==== _M_destroy @ 000134a8 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::_Rep::_M_destroy(allocator *param_1)

{
  (*(code *)PTR__M_destroy_00031ff0)(param_1);
  return;
}


// ==== what @ 000134b4 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::bad_exception::what(void)

{
  (*(code *)PTR_what_00031ff4)();
  return;
}


// ==== pthread_cond_broadcast @ 000134cc ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_broadcast_00031ffc)(__cond);
  return iVar1;
}


// ==== entry @ 000134d8 ====

/* WARNING: Control flow encountered bad instruction data */

void processEntry entry(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = iRam0001353c + 0x134f0;
  local_18 = *(undefined4 *)(iVar1 + DAT_00013540);
  local_14 = *(undefined4 *)(iVar1 + DAT_00013544);
  local_10 = *(undefined4 *)(iVar1 + DAT_00013548);
  __libc_init(&stack0x00000000,0,*(undefined4 *)(iVar1 + DAT_0001354c),&local_18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00013550 @ 00013550 ====

void FUN_00013550(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}


// ==== FUN_0001357c @ 0001357c ====

undefined4 FUN_0001357c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(DAT_000135bc + 0x13598,param_1,DAT_000135c0 + 0x135a8);
  return uVar1;
}


// ==== FUN_000135c4 @ 000135c4 ====

void FUN_000135c4(void)

{
  if (*(int *)(DAT_00013604 + 0x135e0) != 0) {
    FUN_00017634(*(undefined4 *)(DAT_00013608 + 0x135f4));
  }
  return;
}


// ==== FUN_0001360c @ 0001360c ====

void FUN_0001360c(char *param_1)

{
  ostream *poVar1;
  int iVar2;
  
  iVar2 = DAT_00013730 + 0x13628;
  poVar1 = std::operator<<(*(ostream **)(iVar2 + DAT_00013734),param_1);
  poVar1 = std::operator<<(poVar1,(char *)(DAT_00013738 + 0x1364c));
  poVar1 = (ostream *)
           std::ostream::operator<<
                     (poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001373c));
  poVar1 = (ostream *)
           std::ostream::operator<<
                     (poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001373c));
  poVar1 = std::operator<<(poVar1,(char *)(DAT_00013740 + 0x13694));
  poVar1 = (ostream *)
           std::ostream::operator<<
                     (poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001373c));
  poVar1 = std::operator<<(poVar1,(char *)(DAT_00013744 + 0x136c4));
  poVar1 = (ostream *)
           std::ostream::operator<<
                     (poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001373c));
  poVar1 = std::operator<<(poVar1,(char *)(DAT_00013748 + 0x136f4));
  poVar1 = (ostream *)
           std::ostream::operator<<
                     (poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001373c));
  std::ostream::operator<<(poVar1,*(_func_ostream_ptr_ostream_ptr **)(iVar2 + DAT_0001373c));
  return;
}


// ==== main @ 0001374c ====

undefined4 main(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  allocator aaStack_98 [2];
  char local_96;
  char local_95;
  undefined4 local_94;
  string asStack_90 [4];
  char *local_8c;
  int local_88;
  int local_84;
  undefined1 auStack_80 [116];
  
  iVar1 = DAT_00013b14 + 0x1376c;
  local_96 = '\x01';
  local_95 = '\0';
  local_94 = 0;
  local_8c = (char *)0x0;
  local_88 = getopt_long(param_1,param_2,*(undefined4 *)(DAT_00013b18 + 0x13794),
                         DAT_00013b1c + 0x137b4,&local_94);
  do {
    if (local_88 == -1) {
      if (local_96 != '\0') {
        daemon(0,0);
      }
      local_84 = lab126_daemon_checksingleton(*(undefined4 *)(DAT_00013b2c + 0x13928));
      if (local_84 < 0) {
        uVar2 = 1;
      }
      else {
        _llog_set_ident(DAT_00013b30 + 0x13958);
        *(undefined4 *)(DAT_00013b34 + 0x13968) = 0xfff0000;
        if (local_95 != '\0') {
          *(undefined4 *)(DAT_00013b38 + 0x13988) = 0xffffff00;
        }
        pcVar3 = local_8c;
        if (local_8c == (char *)0x0) {
          pcVar3 = *(char **)(DAT_00013b3c + 0x139a4);
        }
        std::allocator<char>::allocator();
        std::string::string(asStack_90,pcVar3,aaStack_98);
        FUN_00015544(auStack_80,asStack_90);
        std::string::~string(asStack_90);
        std::allocator<char>::~allocator((allocator<char> *)aaStack_98);
        iVar1 = FUN_00016234(auStack_80);
        if (iVar1 == 0) {
          if ((*(uint *)(DAT_00013b48 + 0x13a54) & 0x2000000) != 0) {
            _llogmsg_print(0x2000000,DAT_00013b4c + 0x13a70);
          }
          lab126_daemon_cleansingleton(*(undefined4 *)(DAT_00013b50 + 0x13a80),local_84);
          uVar2 = 1;
        }
        else {
          *(undefined1 **)(DAT_00013b40 + 0x13a20) = auStack_80;
          signal(2,(__sighandler_t)(DAT_00013b44 + 0x13a34));
          FUN_00017418(auStack_80);
          lab126_daemon_cleansingleton(*(undefined4 *)(DAT_00013b54 + 0x13aa0),local_84);
          uVar2 = 0;
        }
        FUN_00015674(auStack_80);
      }
      return uVar2;
    }
    switch(local_88) {
    case 0x3f:
      goto LAB_000138a8;
    case 0x40:
      break;
    case 0x41:
      break;
    case 0x42:
      break;
    case 0x43:
      break;
    case 0x44:
      break;
    case 0x45:
      break;
    case 0x46:
      break;
    case 0x47:
      break;
    case 0x48:
      break;
    case 0x49:
      break;
    case 0x4a:
      break;
    case 0x4b:
      break;
    case 0x4c:
      break;
    case 0x4d:
      break;
    case 0x4e:
      break;
    case 0x4f:
      break;
    case 0x50:
      break;
    case 0x51:
      break;
    case 0x52:
      break;
    case 0x53:
      break;
    case 0x54:
      break;
    case 0x55:
      break;
    case 0x56:
      break;
    case 0x57:
      break;
    case 0x58:
      break;
    case 0x59:
      break;
    case 0x5a:
      break;
    case 0x5b:
      break;
    case 0x5c:
      break;
    case 0x5d:
      break;
    case 0x5e:
      break;
    case 0x5f:
      break;
    case 0x60:
      break;
    case 0x61:
      break;
    case 0x62:
      break;
    case 99:
      local_8c = (char *)**(undefined4 **)(iVar1 + DAT_00013b20);
      break;
    case 100:
      local_95 = '\x01';
      break;
    case 0x65:
      break;
    case 0x66:
      local_96 = '\0';
      break;
    case 0x67:
      break;
    case 0x68:
LAB_000138a8:
      FUN_0001360c(*param_2);
      return 0;
    }
    local_88 = getopt_long(param_1,param_2,*(undefined4 *)(DAT_00013b24 + 0x138d0),
                           DAT_00013b28 + 0x138f0,&local_94);
  } while( true );
}


// ==== FUN_00013b58 @ 00013b58 ====

void FUN_00013b58(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00013bd0 + 0x13b78;
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)(DAT_00013bd4 + 0x13b9c));
    __aeabi_atexit(DAT_00013bd8 + 0x13bac,*(undefined4 *)(iVar1 + DAT_00013bdc),
                   DAT_00013be0 + 0x13bc4);
  }
  return;
}


// ==== FUN_00013bfc @ 00013bfc ====

undefined4 FUN_00013bfc(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== FUN_00013c44 @ 00013c44 ====

uint FUN_00013c44(uint param_1)

{
  if (param_1 < 0x200) {
    param_1 = 0x200 / param_1;
  }
  else {
    param_1 = 1;
  }
  return param_1;
}


// ==== FUN_00013c84 @ 00013c84 ====

int * FUN_00013c84(int *param_1)

{
  *param_1 = *(int *)(DAT_00013cf4 + 0x13ca0 + DAT_00013cf8) + 8;
  FUN_000141b8(param_1 + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = -1;
  return param_1;
}


// ==== FUN_00013cfc @ 00013cfc ====

/* WARNING: Removing unreachable block (ram,0x00013d44) */

int * FUN_00013cfc(int *param_1)

{
  *param_1 = *(int *)(DAT_00013d7c + 0x13d18 + DAT_00013d80) + 8;
  FUN_000176a4(param_1 + 1);
  return param_1;
}


// ==== FUN_00013d84 @ 00013d84 ====

/* WARNING: Removing unreachable block (ram,0x00013dbc) */

int * FUN_00013d84(int *param_1)

{
  *param_1 = *(int *)(DAT_00013dd4 + 0x13da0 + DAT_00013dd8) + 8;
  return param_1;
}


// ==== FUN_00013ddc @ 00013ddc ====

void * FUN_00013ddc(void *param_1)

{
  FUN_00013d84(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00013e0c @ 00013e0c ====

void FUN_00013e0c(int param_1,int param_2)

{
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  int *local_c;
  
  FUN_000141b8(auStack_14);
  local_c = (int *)FUN_000143f8(param_2 + 4);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 0x14))(auStack_10,local_c);
    FUN_000176cc(auStack_14,auStack_10);
    FUN_000176a4(auStack_10);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_000176cc(param_1 + 4,auStack_14);
  FUN_000176a4(auStack_14);
  return;
}


// ==== FUN_00013f10 @ 00013f10 ====

void FUN_00013f10(void)

{
  return;
}


// ==== FUN_00013f2c @ 00013f2c ====

void FUN_00013f2c(int *param_1)

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


// ==== FUN_00013f68 @ 00013f68 ====

int FUN_00013f68(int *param_1)

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


// ==== FUN_00013fac @ 00013fac ====

int * FUN_00013fac(int *param_1)

{
  *param_1 = *(int *)(DAT_00014004 + 0x13fc8 + DAT_00014008) + 8;
  param_1[1] = 1;
  param_1[2] = 1;
  return param_1;
}


// ==== FUN_0001400c @ 0001400c ====

/* WARNING: Removing unreachable block (ram,0x00014044) */

int * FUN_0001400c(int *param_1)

{
  *param_1 = *(int *)(DAT_0001405c + 0x14028 + DAT_00014060) + 8;
  return param_1;
}


// ==== FUN_00014064 @ 00014064 ====

void * FUN_00014064(void *param_1)

{
  FUN_0001400c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00014094 @ 00014094 ====

void FUN_00014094(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}


// ==== FUN_000140d0 @ 000140d0 ====

void FUN_000140d0(int param_1)

{
  FUN_00013f2c(param_1 + 4);
  return;
}


// ==== FUN_000140f8 @ 000140f8 ====

void FUN_000140f8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00013f68(param_1 + 1);
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_0001415c(param_1);
  }
  return;
}


// ==== FUN_0001415c @ 0001415c ====

void FUN_0001415c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00013f68(param_1 + 2);
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  return;
}


// ==== FUN_000141b8 @ 000141b8 ====

undefined4 * FUN_000141b8(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}


// ==== FUN_000141e8 @ 000141e8 ====

int * FUN_000141e8(int *param_1)

{
  if (*param_1 != 0) {
    FUN_000140f8(*param_1);
  }
  return param_1;
}


// ==== FUN_00014228 @ 00014228 ====

int * FUN_00014228(int *param_1,int *param_2)

{
  *param_1 = *param_2;
  if (*param_1 != 0) {
    FUN_000140d0(*param_1);
  }
  return param_1;
}


// ==== FUN_0001427c @ 0001427c ====

void FUN_0001427c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_2 = *param_1;
  *param_1 = uVar1;
  return;
}


// ==== FUN_000142c4 @ 000142c4 ====

undefined4 FUN_000142c4(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)*param_1 + 0x14))(*param_1);
  }
  return uVar1;
}


// ==== FUN_00014320 @ 00014320 ====

void FUN_00014320(void)

{
  return;
}


// ==== FUN_00014334 @ 00014334 ====

undefined4 * FUN_00014334(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00014228(param_1 + 1,param_2 + 1);
  return param_1;
}


// ==== FUN_00014384 @ 00014384 ====

int FUN_00014384(int param_1)

{
  FUN_000141e8(param_1 + 4);
  return param_1;
}


// ==== FUN_000143b4 @ 000143b4 ====

undefined4 * FUN_000143b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}


// ==== FUN_000143f8 @ 000143f8 ====

undefined4 FUN_000143f8(undefined4 *param_1)

{
  return *param_1;
}


// ==== FUN_00014420 @ 00014420 ====

undefined4 FUN_00014420(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(code **)(**(int **)(param_2 + 4) + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar1 = FUN_000143f8(param_2);
  (*pcVar2)(param_1,uVar3,uVar1);
  return param_1;
}


// ==== FUN_0001447c @ 0001447c ====

runtime_error *
FUN_0001447c(runtime_error *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  allocator aaStack_18 [4];
  string asStack_14 [4];
  
  iVar1 = DAT_0001456c + 0x144a4;
  std::allocator<char>::allocator();
  std::string::string(asStack_14,param_4,aaStack_18);
  std::runtime_error::runtime_error(param_1,asStack_14);
  std::string::~string(asStack_14);
  std::allocator<char>::~allocator((allocator<char> *)aaStack_18);
  *(int *)param_1 = *(int *)(iVar1 + DAT_00014570) + 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  std::string::string((string *)(param_1 + 0x10));
  return param_1;
}


// ==== FUN_00014574 @ 00014574 ====

/* WARNING: Removing unreachable block (ram,0x000145c8) */

runtime_error * FUN_00014574(runtime_error *param_1)

{
  *(int *)param_1 = *(int *)(DAT_00014614 + 0x14590 + DAT_00014618) + 8;
  std::string::~string((string *)(param_1 + 0x10));
  std::runtime_error::~runtime_error(param_1);
  return param_1;
}


// ==== FUN_0001461c @ 0001461c ====

void * FUN_0001461c(void *param_1)

{
  FUN_00014574(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_0001464c @ 0001464c ====

undefined4 FUN_0001464c(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  string asStack_14 [8];
  
  iVar2 = std::string::empty();
  if (iVar2 != 0) {
    pcVar3 = (char *)std::runtime_error::what();
    std::string::operator=((string *)(param_1 + 0x10),pcVar3);
    cVar1 = std::string::empty();
    if (cVar1 != '\x01') {
      std::string::operator+=((string *)(param_1 + 0x10),(char *)(DAT_00014798 + 0x146d8));
    }
    FUN_00014420(asStack_14,param_1 + 8);
    std::string::operator+=((string *)(param_1 + 0x10),asStack_14);
    std::string::~string(asStack_14);
  }
  uVar4 = std::string::c_str();
  return uVar4;
}


// ==== FUN_0001479c @ 0001479c ====

int * FUN_0001479c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar2 = DAT_0001481c + 0x147c0;
  uVar1 = FUN_00028e68();
  FUN_000143b4(&local_18,param_2,uVar1);
  FUN_0001447c(param_1,local_18,uStack_14,param_3);
  *param_1 = *(int *)(iVar2 + DAT_00014820) + 8;
  return param_1;
}


// ==== FUN_00014824 @ 00014824 ====

/* WARNING: Removing unreachable block (ram,0x00014868) */

int * FUN_00014824(int *param_1)

{
  *param_1 = *(int *)(DAT_00014880 + 0x14840 + DAT_00014884) + 8;
  FUN_00014574(param_1);
  return param_1;
}


// ==== FUN_00014888 @ 00014888 ====

void * FUN_00014888(void *param_1)

{
  FUN_00014824(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000148b8 @ 000148b8 ====

int * FUN_000148b8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar2 = DAT_00014938 + 0x148dc;
  uVar1 = FUN_00028e68();
  FUN_000143b4(&local_18,param_2,uVar1);
  FUN_0001447c(param_1,local_18,uStack_14,param_3);
  *param_1 = *(int *)(iVar2 + DAT_0001493c) + 8;
  return param_1;
}


// ==== FUN_00014940 @ 00014940 ====

int * FUN_00014940(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_00014998 + 0x14964;
  FUN_0001479c(param_1,param_2,param_3);
  *param_1 = *(int *)(iVar1 + DAT_0001499c) + 8;
  return param_1;
}


// ==== FUN_000149a0 @ 000149a0 ====

/* WARNING: Removing unreachable block (ram,0x000149e4) */

int * FUN_000149a0(int *param_1)

{
  *param_1 = *(int *)(DAT_000149fc + 0x149bc + DAT_00014a00) + 8;
  FUN_00014824(param_1);
  return param_1;
}


// ==== FUN_00014a04 @ 00014a04 ====

void * FUN_00014a04(void *param_1)

{
  FUN_000149a0(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00014a34 @ 00014a34 ====

int * FUN_00014a34(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_00014a8c + 0x14a58;
  FUN_0001479c(param_1,param_2,param_3);
  *param_1 = *(int *)(iVar1 + DAT_00014a90) + 8;
  return param_1;
}


// ==== FUN_00014a94 @ 00014a94 ====

/* WARNING: Removing unreachable block (ram,0x00014ad8) */

int * FUN_00014a94(int *param_1)

{
  *param_1 = *(int *)(DAT_00014af0 + 0x14ab0 + DAT_00014af4) + 8;
  FUN_00014824(param_1);
  return param_1;
}


// ==== FUN_00014af8 @ 00014af8 ====

void * FUN_00014af8(void *param_1)

{
  FUN_00014a94(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00014b28 @ 00014b28 ====

undefined4 * FUN_00014b28(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  pthread_mutex_lock((pthread_mutex_t *)*param_1);
  return param_1;
}


// ==== FUN_00014b74 @ 00014b74 ====

void FUN_00014b74(undefined4 *param_1)

{
  pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// ==== FUN_00014ba8 @ 00014ba8 ====

int FUN_00014ba8(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_00014b74(param_1);
  }
  return param_1;
}


// ==== FUN_00014be0 @ 00014be0 ====

pthread_mutex_t * FUN_00014be0(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined1 auStack_1c [20];
  
  iVar1 = pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  if (iVar1 != 0) {
    FUN_00014a34(auStack_1c,iVar1,DAT_00014c60 + 0x14c2c);
    FUN_00017b88(auStack_1c);
  }
  return param_1;
}


// ==== FUN_00014c64 @ 00014c64 ====

pthread_mutex_t * FUN_00014c64(pthread_mutex_t *param_1)

{
  int local_14;
  pthread_mutex_t *local_10;
  int local_c;
  
  local_10 = param_1;
  do {
    local_14 = pthread_mutex_destroy(local_10);
    local_c = local_14;
  } while (local_14 == 4);
  FUN_00013f10(&local_14);
  return param_1;
}


// ==== FUN_00014cc4 @ 00014cc4 ====

void FUN_00014cc4(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined1 auStack_1c [20];
  
  do {
    iVar1 = pthread_mutex_lock(param_1);
  } while (iVar1 == 4);
  if (iVar1 != 0) {
    FUN_00014940(auStack_1c,iVar1,DAT_00014d4c + 0x14d24);
    FUN_00017df8(auStack_1c);
    FUN_000149a0(auStack_1c);
    __cxa_end_cleanup();
  }
  return;
}


// ==== FUN_00014d50 @ 00014d50 ====

void FUN_00014d50(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined1 auStack_1c [20];
  
  do {
    iVar1 = pthread_mutex_unlock(param_1);
  } while (iVar1 == 4);
  if (iVar1 != 0) {
    FUN_00014940(auStack_1c,iVar1,DAT_00014dd8 + 0x14db0);
    FUN_00017df8(auStack_1c);
    FUN_000149a0(auStack_1c);
    __cxa_end_cleanup();
  }
  return;
}


// ==== FUN_00014ddc @ 00014ddc ====

pthread_mutex_t * FUN_00014ddc(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined1 auStack_1c [20];
  
  iVar1 = pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  if (iVar1 != 0) {
    FUN_00014a34(auStack_1c,iVar1,DAT_00014ec8 + 0x14e28);
    FUN_00017b88(auStack_1c);
  }
  iVar1 = pthread_cond_init((pthread_cond_t *)&(param_1->__data).__count,(pthread_condattr_t *)0x0);
  if (iVar1 != 0) {
    pthread_mutex_destroy(param_1);
    FUN_00014a34(auStack_1c,iVar1,DAT_00014ecc + 0x14e84);
    FUN_00017b88(auStack_1c);
  }
  return param_1;
}


// ==== FUN_00014ed0 @ 00014ed0 ====

pthread_mutex_t * FUN_00014ed0(pthread_mutex_t *param_1)

{
  int iVar1;
  
  do {
    iVar1 = pthread_mutex_destroy(param_1);
  } while (iVar1 == 4);
  do {
    iVar1 = pthread_cond_destroy((pthread_cond_t *)&(param_1->__data).__count);
  } while (iVar1 == 4);
  return param_1;
}


// ==== FUN_00014f34 @ 00014f34 ====

void FUN_00014f34(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00014f9c + 0x14f50;
  if (*(char *)(*param_1 + 0x71) != '\0') {
    *(undefined1 *)(*param_1 + 0x71) = 0;
    uVar1 = __cxa_allocate_exception(1);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00014fa0),0);
  }
  return;
}


// ==== FUN_00014fa4 @ 00014fa4 ====

int * FUN_00014fa4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_c [4];
  
  iVar1 = FUN_00025850();
  *param_1 = iVar1;
  param_1[1] = param_2;
  if ((*param_1 == 0) || (*(char *)(*param_1 + 0x70) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar2;
  if ((char)param_1[2] == '\0') {
    pthread_mutex_lock((pthread_mutex_t *)param_1[1]);
  }
  else {
    FUN_00017e9c(auStack_c,*param_1 + 0x18);
    FUN_00014f34(param_1);
    *(int *)(*param_1 + 0x50) = param_2;
    *(undefined4 *)(*param_1 + 0x54) = param_3;
    pthread_mutex_lock((pthread_mutex_t *)param_1[1]);
    FUN_00017edc(auStack_c);
  }
  return param_1;
}


// ==== FUN_000150bc @ 000150bc ====

int * FUN_000150bc(int *param_1)

{
  undefined1 auStack_c [4];
  
  if ((char)param_1[2] == '\0') {
    pthread_mutex_unlock((pthread_mutex_t *)param_1[1]);
  }
  else {
    pthread_mutex_unlock((pthread_mutex_t *)param_1[1]);
    FUN_00017e9c(auStack_c,*param_1 + 0x18);
    *(undefined4 *)(*param_1 + 0x50) = 0;
    *(undefined4 *)(*param_1 + 0x54) = 0;
    FUN_00017edc(auStack_c);
  }
  return param_1;
}


// ==== FUN_00015160 @ 00015160 ====

void FUN_00015160(pthread_mutex_t *param_1,undefined4 param_2)

{
  undefined1 auStack_24 [4];
  int local_20;
  undefined1 auStack_1c [20];
  
  local_20 = 0;
  FUN_000141b8(auStack_24);
  FUN_00014fa4(auStack_1c,param_1,&(param_1->__data).__count);
  FUN_00017f4c(auStack_24,param_2);
  do {
    local_20 = pthread_cond_wait((pthread_cond_t *)&(param_1->__data).__count,param_1);
  } while (local_20 == 4);
  FUN_000150bc(auStack_1c);
  FUN_00017f0c(auStack_24);
  FUN_000258a0();
  if (local_20 != 0) {
    FUN_000148b8(auStack_1c,local_20,DAT_00015270 + 0x15224);
    FUN_000181dc(auStack_1c);
    FUN_000150bc(auStack_1c);
    FUN_00017f0c(auStack_24);
    __cxa_end_cleanup();
    FUN_00017fd8(auStack_1c);
    __cxa_end_cleanup();
  }
  return;
}


// ==== FUN_00015274 @ 00015274 ====

void FUN_00015274(int param_1)

{
  undefined1 auStack_10 [8];
  
  FUN_00014b28(auStack_10,param_1);
  pthread_cond_signal((pthread_cond_t *)(param_1 + 4));
  FUN_00014ba8(auStack_10);
  return;
}


// ==== FUN_000152d4 @ 000152d4 ====

void * FUN_000152d4(undefined4 param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_2);
  return pvVar1;
}


// ==== FUN_00015300 @ 00015300 ====

void FUN_00015300(void *param_1)

{
  free(param_1);
  return;
}


// ==== FUN_00015320 @ 00015320 ====

undefined8 FUN_00015320(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_1 < -0x134) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(DAT_00015380 + 0x1533c + DAT_00015384) + (param_1 + 0x134) * 8)
    ;
    uVar1 = *puVar2;
    uVar3 = puVar2[1];
  }
  return CONCAT44(uVar3,uVar1);
}


// ==== FUN_00015388 @ 00015388 ====

undefined4 * FUN_00015388(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  FUN_00015450(param_1);
  return param_1;
}


// ==== FUN_000153cc @ 000153cc ====

undefined1 FUN_000153cc(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}


// ==== FUN_000153f4 @ 000153f4 ====

undefined1 FUN_000153f4(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 4);
  FUN_00015450(param_1);
  return uVar1;
}


// ==== FUN_00015428 @ 00015428 ====

undefined4 FUN_00015428(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ==== FUN_00015450 @ 00015450 ====

void FUN_00015450(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = fgetc((FILE *)*param_1);
  if (iVar1 == -1) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    *(char *)(param_1 + 1) = (char)iVar1;
    param_1[2] = param_1[2] + 1;
  }
  return;
}


// ==== FUN_000154c0 @ 000154c0 ====

undefined4 FUN_000154c0(undefined4 param_1)

{
  FUN_000182d4(param_1);
  return param_1;
}


// ==== FUN_000154ec @ 000154ec ====

undefined4 FUN_000154ec(undefined4 param_1)

{
  FUN_00018380(param_1);
  return param_1;
}


// ==== FUN_00015518 @ 00015518 ====

undefined4 FUN_00015518(undefined4 param_1)

{
  FUN_00018404(param_1);
  return param_1;
}


// ==== FUN_00015544 @ 00015544 ====

string * FUN_00015544(string *param_1,string *param_2)

{
  undefined1 auStack_38 [44];
  
  std::string::string(param_1,param_2);
  param_1[4] = (string)0x0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00018280(param_1 + 0xc);
  FUN_0001832c(param_1 + 0x24);
  FUN_00014be0(param_1 + 0x3c);
  FUN_00014ddc(param_1 + 0x40);
  FUN_000183d8(auStack_38);
  FUN_0001848c(param_1 + 0x48,auStack_38);
  FUN_00018404(auStack_38);
  return param_1;
}


// ==== FUN_00015674 @ 00015674 ====

string * FUN_00015674(string *param_1)

{
  FUN_00017634(param_1);
  FUN_00015518(param_1 + 0x48);
  FUN_00014ed0(param_1 + 0x40);
  FUN_00014c64(param_1 + 0x3c);
  FUN_000154ec(param_1 + 0x24);
  FUN_000154c0(param_1 + 0xc);
  std::string::~string(param_1);
  return param_1;
}


// ==== FUN_00015770 @ 00015770 ====

int FUN_00015770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  allocator aaStack_24 [4];
  char *local_20;
  string asStack_1c [4];
  undefined4 local_18;
  int local_14;
  
  iVar3 = DAT_0001588c + 0x15798;
  local_20 = (char *)0x0;
  local_18 = param_4;
  local_14 = LipcGetStringParam(param_3,&local_20);
  pcVar1 = local_20;
  if (local_14 == 0) {
    std::allocator<char>::allocator();
    std::string::string(asStack_1c,pcVar1,aaStack_24);
    FUN_00015ee0(local_18,asStack_1c);
    std::string::~string(asStack_1c);
    local_14 = std::allocator<char>::~allocator((allocator<char> *)aaStack_24);
  }
  else if ((**(uint **)(iVar3 + DAT_00015890) & 0x2000000) != 0) {
    uVar2 = LipcGetErrorString(local_14);
    local_14 = _llogmsg_print(0x2000000,DAT_00015894 + 0x157fc,uVar2);
  }
  return local_14;
}


// ==== FUN_00015898 @ 00015898 ====

void FUN_00015898(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  allocator aaStack_38 [4];
  string asStack_34 [4];
  char *local_30;
  string asStack_2c [4];
  undefined4 local_28;
  char *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_28 = param_4;
  local_24 = (char *)LipcGetEventSource(param_3);
  std::allocator<char>::allocator();
  std::string::string(asStack_34,local_24,(allocator *)&local_20);
  std::allocator<char>::~allocator((allocator<char> *)&local_20);
  std::string::append((char *)asStack_34);
  iVar2 = LipcGetUInt64Param(param_3,&local_20);
  if (iVar2 == 0) {
    local_30 = (char *)0x0;
    LipcGetStringParam(param_3,&local_30);
    if (local_30 == (char *)0x0) {
      local_30 = (char *)(DAT_00015a4c + 0x15968);
    }
    pcVar1 = local_30;
    std::allocator<char>::allocator();
    std::string::string(asStack_2c,pcVar1,aaStack_38);
    iVar2 = FUN_00015a50(local_28,asStack_34,local_20,uStack_1c,asStack_2c);
    std::string::~string(asStack_2c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_38);
    if (iVar2 != 0) {
      FUN_00015b48(local_28,asStack_34);
    }
  }
  std::string::~string(asStack_34);
  return;
}


// ==== FUN_00015a50 @ 00015a50 ====

bool FUN_00015a50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  
  FUN_000184c0(auStack_18,param_1 + 0x3c);
  local_20 = FUN_00018548(param_1 + 0xc,param_2);
  local_1c = FUN_0001857c(param_1 + 0xc);
  iVar1 = FUN_000185a8(&local_20,&local_1c);
  if (iVar1 != 0) {
    iVar2 = FUN_000185ec(&local_20);
    uVar3 = FUN_000143f8(iVar2 + 4);
    FUN_00021974((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4,param_5);
  }
  FUN_00018504(auStack_18);
  return iVar1 != 0;
}


// ==== FUN_00015b48 @ 00015b48 ====

void FUN_00015b48(int param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  FUN_000184c0(auStack_10,param_1 + 0x3c);
  FUN_00018620(param_1 + 0x48,param_2);
  FUN_00015274(param_1 + 0x40);
  FUN_00018504(auStack_10);
  return;
}


// ==== FUN_00015bc4 @ 00015bc4 ====

undefined4 FUN_00015bc4(undefined4 param_1,int param_2,string *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  string asStack_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  iVar4 = DAT_00015ec0 + 0x15bec;
  FUN_000184c0(auStack_28,param_2 + 0x3c);
  std::operator+(asStack_38,param_3);
  local_34 = FUN_00018548(param_2 + 0xc,asStack_38);
  local_30 = FUN_0001857c(param_2 + 0xc);
  iVar1 = FUN_000185a8(&local_34,&local_30);
  if (iVar1 == 0) {
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar2 = std::string::c_str();
    uVar3 = std::string::c_str();
    local_2c = LipcSubscribeExt(uVar5,uVar2,uVar3,DAT_00015ec4 + 0x15cd0,param_2);
    if (local_2c == 0) {
      uVar3 = *(undefined4 *)(param_2 + 8);
      uVar2 = std::string::c_str();
      local_2c = LipcSubscribeExt(uVar3,uVar2,DAT_00015ed0 + 0x15d7c,DAT_00015ed4 + 0x15d88,param_2)
      ;
      if ((local_2c == 0) || (local_2c == 0x14)) {
        FUN_000186d4(auStack_20,asStack_38);
        uVar2 = FUN_000187c0(param_2 + 0xc,asStack_38);
        FUN_0001892c(uVar2,auStack_20);
        FUN_00014334(param_1,auStack_20);
        FUN_00014384(auStack_20);
      }
      else {
        if ((**(uint **)(iVar4 + DAT_00015ec8) & 0x1000000) != 0) {
          uVar2 = LipcGetErrorString(local_2c);
          uVar3 = std::string::c_str();
          _llogmsg_print(0x1000000,DAT_00015edc + 0x15df4,uVar2,uVar3,DAT_00015ed8 + 0x15de4);
        }
        FUN_00018698(param_1);
      }
    }
    else {
      if ((**(uint **)(iVar4 + DAT_00015ec8) & 0x2000000) != 0) {
        uVar2 = LipcGetErrorString(local_2c);
        uVar3 = std::string::c_str();
        uVar5 = std::string::c_str();
        _llogmsg_print(0x2000000,DAT_00015ecc + 0x15d34,uVar2,uVar3,uVar5);
      }
      FUN_00018698(param_1);
    }
  }
  else {
    iVar1 = FUN_000185ec(&local_34);
    FUN_00014334(param_1,iVar1 + 4);
  }
  std::string::~string(asStack_38);
  FUN_00018504(auStack_28);
  return param_1;
}


// ==== FUN_00015ee0 @ 00015ee0 ====

undefined4 FUN_00015ee0(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_r5;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined4 local_20 [3];
  
  iVar6 = DAT_000161d4 + 0x15f00;
  FUN_000184c0(auStack_38,param_1 + 0x3c);
  FUN_000141b8(&local_3c);
  local_3c = FUN_00018990(param_1 + 0x24);
  while( true ) {
    local_20[0] = FUN_000189bc(param_1 + 0x24);
    iVar4 = FUN_000185a8(&local_3c,local_20);
    if (iVar4 == 0) break;
    iVar4 = FUN_000185ec(&local_3c);
    FUN_00014334(auStack_30,iVar4 + 4);
    FUN_00018698(auStack_28);
    FUN_00018698(local_20);
    uVar5 = FUN_000143f8(auStack_30);
    iVar4 = FUN_00023240(uVar5,param_2,auStack_28,local_20);
    if (iVar4 == 0) {
      bVar1 = true;
    }
    else {
      uVar5 = FUN_000143f8(auStack_28);
      uVar2 = FUN_000143f8(local_20);
      uVar2 = FUN_0001e3ec(uVar2);
      FUN_000219c0(uVar5,uVar2);
      if ((**(uint **)(iVar6 + DAT_000161d8) & 0x800000) != 0) {
        uVar5 = std::string::c_str();
        uVar2 = FUN_000143f8(auStack_28);
        FUN_0001e3ec(uVar2);
        uVar2 = std::string::c_str();
        uVar3 = FUN_000143f8(local_20);
        FUN_0001e3ec(uVar3);
        uVar3 = std::string::c_str();
        _llogmsg_print(0x800000,DAT_000161dc + 0x16068,uVar5,uVar2,uVar3);
      }
      unaff_r5 = 1;
      bVar1 = false;
    }
    FUN_00014384(local_20);
    FUN_00014384(auStack_28);
    FUN_00014384(auStack_30);
    if (!bVar1) goto LAB_0001616c;
    FUN_000189e8(&local_3c,0);
  }
  if ((**(uint **)(iVar6 + DAT_000161d8) & 0x1000000) != 0) {
    uVar5 = std::string::c_str();
    _llogmsg_print(0x1000000,DAT_000161e0 + 0x16160,uVar5);
  }
  unaff_r5 = 0;
LAB_0001616c:
  FUN_00018504(auStack_38);
  return unaff_r5;
}


// ==== FUN_000161e4 @ 000161e4 ====

int FUN_000161e4(int param_1)

{
  FUN_00018ad0(param_1 + 0x10);
  FUN_00018aac(param_1);
  return param_1;
}


// ==== FUN_00016234 @ 00016234 ====

undefined4 FUN_00016234(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_58;
  FILE *local_54;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [52];
  
  iVar7 = DAT_000164d0 + 0x16250;
  uVar3 = LipcOpenEx(DAT_000164d4 + 0x1625c,&local_58);
  *(undefined4 *)(param_1 + 8) = uVar3;
  LlogInitLogProperties(*(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar7 + DAT_000164d8));
  if (local_58 == 0) {
    pcVar4 = (char *)std::string::c_str();
    local_54 = fopen(pcVar4,(char *)(DAT_000164e0 + 0x16300));
    if (local_54 == (FILE *)0x0) {
      if ((**(uint **)(iVar7 + DAT_000164d8) & 0x2000000) != 0) {
        piVar5 = (int *)__errno();
        pcVar4 = strerror(*piVar5);
        _llogmsg_print(0x2000000,DAT_000164e4 + 0x16358,pcVar4);
      }
      uVar3 = 0;
    }
    else {
      FUN_00015388(auStack_4c,local_54);
      FUN_00018a34(auStack_40,0,0x400);
      FUN_00018b4c(auStack_40,auStack_4c);
      fclose(local_54);
      iVar6 = FUN_00018c54(auStack_40);
      if ((iVar6 == 0) && (cVar2 = FUN_00018c8c(auStack_40), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((**(uint **)(iVar7 + DAT_000164d8) & 0x2000000) != 0) {
          _llogmsg_print(0x2000000,DAT_000164e8 + 0x1641c);
        }
        uVar3 = 0;
      }
      else {
        FUN_00016540(param_1,auStack_40);
        uVar3 = 1;
      }
      FUN_000161e4(auStack_40);
    }
  }
  else {
    if ((**(uint **)(iVar7 + DAT_000164d8) & 0x2000000) != 0) {
      uVar3 = LipcGetErrorString(local_58);
      _llogmsg_print(0x2000000,DAT_000164dc + 0x162d0,uVar3);
    }
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_000164f0 @ 000164f0 ====

string * FUN_000164f0(string *param_1)

{
  FUN_00014384(param_1 + 4);
  std::string::~string(param_1);
  return param_1;
}


// ==== FUN_00016540 @ 00016540 ====

void FUN_00016540(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_10f;
  string asStack_10c [4];
  string asStack_108 [4];
  string asStack_104 [4];
  string asStack_100 [4];
  string asStack_fc [4];
  string asStack_f8 [4];
  string asStack_f4 [4];
  string asStack_f0 [4];
  string asStack_ec [4];
  string asStack_e8 [4];
  string asStack_e4 [4];
  string asStack_e0 [4];
  string asStack_dc [4];
  string asStack_d8 [4];
  string asStack_d4 [4];
  string asStack_d0 [4];
  uint local_cc;
  char *local_c8;
  uint local_c4;
  undefined4 local_c0;
  char *local_bc;
  char *local_b8;
  char *local_b4;
  char *local_b0;
  uint local_ac;
  char *local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char *local_98;
  char *local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  allocator aaStack_68 [8];
  allocator aaStack_60 [8];
  allocator aaStack_58 [8];
  allocator aaStack_50 [8];
  allocator aaStack_48 [8];
  allocator aaStack_40 [12];
  allocator aaStack_34 [16];
  
  iVar7 = DAT_000173a8 + 0x16560;
  local_cc = 0;
  while (uVar6 = FUN_00018cc4(param_2), local_cc < uVar6) {
    local_c0 = FUN_00018cec(param_2,local_cc);
    uVar3 = FUN_00018d1c(local_c0,DAT_000173ac + 0x16590);
    local_bc = (char *)FUN_000143f8(uVar3);
    uVar3 = FUN_00018d1c(local_c0,DAT_000173b0 + 0x165b4);
    local_b8 = (char *)FUN_000143f8(uVar3);
    std::allocator<char>::allocator();
    std::string::string(asStack_10c,local_bc,aaStack_40);
    std::allocator<char>::allocator();
    std::string::string(asStack_108,local_b8,aaStack_34);
    FUN_00015bc4(auStack_78,param_1,asStack_10c,asStack_108);
    std::string::~string(asStack_108);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_34);
    std::string::~string(asStack_10c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_40);
    uVar3 = FUN_00018d1c(local_c0,DAT_000173b4 + 0x16668);
    local_b4 = (char *)FUN_000143f8(uVar3);
    uVar3 = FUN_00018d1c(local_c0,DAT_000173b8 + 0x1668c);
    uVar2 = FUN_00018d4c(uVar3);
    local_c8 = (char *)(DAT_000173bc + 0x166b0);
    iVar4 = FUN_00018d88(local_c0,DAT_000173c0 + 0x166c0);
    if (iVar4 != 0) {
      uVar3 = FUN_00018d1c(local_c0,DAT_000173c4 + 0x166e0);
      local_c8 = (char *)FUN_000143f8(uVar3);
    }
    uVar3 = FUN_00018d1c(local_c0,DAT_000173c8 + 0x16704);
    local_b0 = (char *)FUN_000143f8(uVar3);
    iVar4 = strcasecmp(local_b0,(char *)(DAT_000173cc + 0x16728));
    local_ac = (uint)(iVar4 == 0);
    uVar3 = FUN_00018d1c(local_c0,DAT_000173d0 + 0x16758);
    local_a8 = (char *)FUN_000143f8(uVar3);
    iVar4 = strcasecmp(local_a8,(char *)(DAT_000173d4 + 0x1677c));
    local_a4 = (uint)(iVar4 != 0);
    local_10f = 0;
    FUN_00018698(auStack_70);
    iVar4 = FUN_00018d88(local_c0,DAT_000173d8 + 0x167bc);
    if (iVar4 == 0) {
      uVar3 = FUN_00018d1c(local_c0,DAT_000173f8 + 0x16c60);
      local_88 = (char *)FUN_000143f8(uVar3);
      uVar3 = FUN_00018d1c(local_c0,DAT_000173fc + 0x16c84);
      local_84 = (char *)FUN_000143f8(uVar3);
      std::allocator<char>::allocator();
      std::string::string(asStack_e4,local_88,aaStack_48);
      std::allocator<char>::allocator();
      std::string::string(asStack_e0,local_84,aaStack_40);
      FUN_00015bc4(aaStack_34,param_1,asStack_e4,asStack_e0);
      std::string::~string(asStack_e0);
      std::allocator<char>::~allocator((allocator<char> *)aaStack_40);
      std::string::~string(asStack_e4);
      std::allocator<char>::~allocator((allocator<char> *)aaStack_48);
      uVar3 = FUN_00018d1c(local_c0,DAT_00017400 + 0x16d38);
      local_80 = (char *)FUN_000143f8(uVar3);
      uVar3 = FUN_00018d1c(local_c0,DAT_00017404 + 0x16d5c);
      local_7c = (char *)FUN_000143f8(uVar3);
      iVar4 = FUN_00018d88(local_c0,DAT_00017408 + 0x16d80);
      if (iVar4 != 0) {
        uVar3 = FUN_00018d1c(local_c0,DAT_0001740c + 0x16da0);
        local_10f = FUN_00018d4c(uVar3);
      }
      std::allocator<char>::allocator();
      std::string::string(asStack_dc,local_b4,aaStack_68);
      std::allocator<char>::allocator();
      std::string::string(asStack_d8,local_80,aaStack_60);
      std::allocator<char>::allocator();
      std::string::string(asStack_d4,local_7c,aaStack_58);
      std::allocator<char>::allocator();
      std::string::string(asStack_d0,local_c8,aaStack_40);
      FUN_00014334(aaStack_50,aaStack_34);
      FUN_00014334(aaStack_48,auStack_78);
      pvVar5 = operator_new(0x48);
      FUN_00022978(pvVar5,asStack_dc,asStack_d8,asStack_d4,local_ac,local_a4,uVar2,local_10f,
                   asStack_d0,aaStack_50,aaStack_48);
      FUN_00018dc8(auStack_70,pvVar5);
      FUN_00014384(aaStack_48);
      FUN_00014384(aaStack_50);
      std::string::~string(asStack_d0);
      std::allocator<char>::~allocator((allocator<char> *)aaStack_40);
      std::string::~string(asStack_d4);
      std::allocator<char>::~allocator((allocator<char> *)aaStack_58);
      std::string::~string(asStack_d8);
      std::allocator<char>::~allocator((allocator<char> *)aaStack_60);
      std::string::~string(asStack_dc);
      std::allocator<char>::~allocator((allocator<char> *)aaStack_68);
      FUN_00014384(aaStack_34);
    }
    else {
      local_a0 = FUN_00018d1c(local_c0,DAT_000173dc + 0x167dc);
      bVar1 = true;
      local_c4 = 0;
      while (uVar6 = FUN_00018cc4(local_a0), local_c4 < uVar6) {
        local_9c = FUN_00018cec(local_a0,local_c4);
        uVar3 = FUN_00018d1c(local_9c,DAT_000173e0 + 0x16820);
        local_98 = (char *)FUN_000143f8(uVar3);
        uVar3 = FUN_00018d1c(local_9c,DAT_000173e4 + 0x16844);
        local_94 = (char *)FUN_000143f8(uVar3);
        std::allocator<char>::allocator();
        std::string::string(asStack_104,local_98,aaStack_48);
        std::allocator<char>::allocator();
        std::string::string(asStack_100,local_94,aaStack_40);
        FUN_00015bc4(aaStack_34,param_1,asStack_104,asStack_100);
        std::string::~string(asStack_100);
        std::allocator<char>::~allocator((allocator<char> *)aaStack_40);
        std::string::~string(asStack_104);
        std::allocator<char>::~allocator((allocator<char> *)aaStack_48);
        uVar3 = FUN_00018d1c(local_9c,DAT_000173e8 + 0x168f8);
        local_90 = (char *)FUN_000143f8(uVar3);
        uVar3 = FUN_00018d1c(local_9c,DAT_000173ec + 0x1691c);
        local_8c = (char *)FUN_000143f8(uVar3);
        iVar4 = FUN_00018d88(local_9c,DAT_000173f0 + 0x16940);
        if (iVar4 == 0) {
          local_10f = 0;
        }
        else {
          uVar3 = FUN_00018d1c(local_9c,DAT_000173f4 + 0x16960);
          local_10f = FUN_00018d4c(uVar3);
        }
        if (bVar1) {
          std::allocator<char>::allocator();
          std::string::string(asStack_fc,local_b4,aaStack_58);
          std::allocator<char>::allocator();
          std::string::string(asStack_f8,local_90,aaStack_50);
          std::allocator<char>::allocator();
          std::string::string(asStack_f4,local_8c,aaStack_48);
          std::allocator<char>::allocator();
          std::string::string(asStack_f0,local_c8,aaStack_40);
          FUN_00014334(aaStack_68,aaStack_34);
          FUN_00014334(aaStack_60,auStack_78);
          pvVar5 = operator_new(0x48);
          FUN_00022978(pvVar5,asStack_fc,asStack_f8,asStack_f4,local_ac,local_a4,uVar2,local_10f,
                       asStack_f0,aaStack_68,aaStack_60);
          FUN_00018dc8(auStack_70,pvVar5);
          FUN_00014384(aaStack_60);
          FUN_00014384(aaStack_68);
          std::string::~string(asStack_f0);
          std::allocator<char>::~allocator((allocator<char> *)aaStack_40);
          std::string::~string(asStack_f4);
          std::allocator<char>::~allocator((allocator<char> *)aaStack_48);
          std::string::~string(asStack_f8);
          std::allocator<char>::~allocator((allocator<char> *)aaStack_50);
          std::string::~string(asStack_fc);
          std::allocator<char>::~allocator((allocator<char> *)aaStack_58);
          bVar1 = false;
        }
        else {
          uVar3 = FUN_000143f8(auStack_70);
          std::allocator<char>::allocator();
          std::string::string(asStack_ec,local_90,aaStack_48);
          std::allocator<char>::allocator();
          std::string::string(asStack_e8,local_8c,aaStack_40);
          FUN_00014334(aaStack_58,aaStack_34);
          FUN_00022d8c(uVar3,asStack_ec,asStack_e8,aaStack_58,local_10f);
          FUN_00014384(aaStack_58);
          std::string::~string(asStack_e8);
          std::allocator<char>::~allocator((allocator<char> *)aaStack_40);
          std::string::~string(asStack_ec);
          std::allocator<char>::~allocator((allocator<char> *)aaStack_48);
        }
        FUN_00014384(aaStack_34);
        local_c4 = local_c4 + 1;
      }
    }
    uVar3 = FUN_000143f8(auStack_78);
    uVar3 = FUN_0001e3ec(uVar3);
    FUN_00018e24(aaStack_40,uVar3,auStack_70);
    FUN_00018e70(aaStack_34,aaStack_40);
    FUN_00018ec4(param_1 + 0x24,aaStack_34);
    FUN_000164f0(aaStack_34);
    FUN_000164f0(aaStack_40);
    if ((**(uint **)(iVar7 + DAT_00017410) & 0x8000) != 0) {
      uVar3 = FUN_000143f8(auStack_78);
      FUN_0001e3ec(uVar3);
      uVar3 = std::string::c_str();
      _llogmsg_print(0x8000,DAT_00017414 + 0x17038,uVar3);
    }
    FUN_00014384(auStack_70);
    FUN_00014384(auStack_78);
    local_cc = local_cc + 1;
  }
  return;
}


// ==== FUN_00017418 @ 00017418 ====

void FUN_00017418(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined1 auStack_14 [8];
  
  iVar3 = DAT_00017628 + 0x17434;
  FUN_000184c0(auStack_20,param_1 + 0x3c);
  *(undefined1 *)(param_1 + 4) = 1;
  while (*(char *)(param_1 + 4) != '\0') {
    iVar1 = FUN_00018ef8(param_1 + 0x48);
    if (iVar1 != 0) {
      FUN_00015160(param_1 + 0x40,auStack_20);
    }
    while (iVar1 = FUN_00018f24(param_1 + 0x48), iVar1 != 0) {
      local_28 = FUN_00018f50(param_1 + 0x48);
      FUN_00018f7c(&local_18,param_1 + 0x24,local_28);
      FUN_000141b8(&local_2c);
      local_2c = local_18;
      while (iVar1 = FUN_000185a8(&local_2c,auStack_14), iVar1 != 0) {
        iVar1 = FUN_000185ec(&local_2c);
        iVar1 = FUN_00018ff4(iVar1 + 4);
        if (iVar1 == -1) {
          if ((**(uint **)(iVar3 + DAT_0001762c) & 0x2000000) != 0) {
            uVar2 = std::string::c_str();
            _llogmsg_print(0x2000000,DAT_00017630 + 0x17574,uVar2);
          }
        }
        else {
          iVar1 = FUN_000185ec(&local_2c);
          local_24 = FUN_000143f8(iVar1 + 4);
          FUN_00023380(local_24);
        }
        FUN_00018fb8(&local_2c);
      }
      FUN_00019030(param_1 + 0x48);
    }
  }
  FUN_00018504(auStack_20);
  return;
}


// ==== FUN_00017634 @ 00017634 ====

void FUN_00017634(int param_1)

{
  undefined1 auStack_10 [8];
  
  FUN_000184c0(auStack_10,param_1 + 0x3c);
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00015274(param_1 + 0x40);
  FUN_00018504(auStack_10);
  return;
}


// ==== FUN_000176a4 @ 000176a4 ====

undefined4 FUN_000176a4(undefined4 param_1)

{
  FUN_00019054(param_1);
  return param_1;
}


// ==== FUN_000176cc @ 000176cc ====

undefined4 FUN_000176cc(undefined4 param_1,undefined4 *param_2)

{
  FUN_000190cc(param_1,*param_2);
  return param_1;
}


// ==== FUN_00017704 @ 00017704 ====

int * FUN_00017704(int *param_1)

{
  *param_1 = *(int *)(DAT_00017748 + 0x17724 + DAT_0001774c) + 8;
  return param_1;
}


// ==== FUN_00017750 @ 00017750 ====

int * FUN_00017750(int *param_1)

{
  *param_1 = *(int *)(DAT_00017794 + 0x17770 + DAT_00017798) + 8;
  return param_1;
}


// ==== FUN_0001779c @ 0001779c ====

int * FUN_0001779c(int *param_1,int param_2)

{
  *param_1 = *(int *)(DAT_00017828 + 0x177bc + DAT_0001782c) + 8;
  FUN_00019104(param_1 + 1,param_2 + 4);
  param_1[2] = *(int *)(param_2 + 8);
  param_1[3] = *(int *)(param_2 + 0xc);
  param_1[4] = *(int *)(param_2 + 0x10);
  return param_1;
}


// ==== FUN_00017830 @ 00017830 ====

int * FUN_00017830(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_000178b4 + 0x17850;
  FUN_00017750(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_000178b8) + 8;
  std::string::string((string *)(param_1 + 1),(string *)(param_2 + 4));
  return param_1;
}


// ==== FUN_000178bc @ 000178bc ====

int * FUN_000178bc(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017958 + 0x178dc;
  FUN_00017830(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_0001795c) + 8;
  iVar1 = *(int *)(param_2 + 0xc);
  param_1[2] = *(int *)(param_2 + 8);
  param_1[3] = iVar1;
  std::string::string((string *)(param_1 + 4),(string *)(param_2 + 0x10));
  return param_1;
}


// ==== FUN_00017960 @ 00017960 ====

int * FUN_00017960(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_000179b4 + 0x17980;
  FUN_000178bc(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_000179b8) + 8;
  return param_1;
}


// ==== FUN_000179bc @ 000179bc ====

int * FUN_000179bc(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017a10 + 0x179dc;
  FUN_00017960(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00017a14) + 8;
  return param_1;
}


// ==== FUN_00017a18 @ 00017a18 ====

int * FUN_00017a18(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017ab0 + 0x17a38;
  FUN_000179bc(param_1,param_2);
  FUN_0001779c(param_1 + 5,param_2 + 0x14);
  *param_1 = *(int *)(iVar1 + DAT_00017ab4) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00017ab4) + 0x1c;
  return param_1;
}


// ==== FUN_00017ab8 @ 00017ab8 ====

int * FUN_00017ab8(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017b80 + 0x17ad8;
  FUN_00017704(param_1 + 10,(int)param_2 + *(int *)(*param_2 + -0xc));
  FUN_00017a18(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00017b84) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00017b84) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_00017b84) + 0x44;
  return param_1;
}


// ==== FUN_00017b88 @ 00017b88 ====

void FUN_00017b88(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_38 [40];
  
  iVar2 = DAT_00017c20 + 0x17ba4;
  FUN_00013f10(param_1);
  uVar1 = __cxa_allocate_exception(0x2c);
  FUN_00019140(auStack_38,param_1);
  FUN_00019234(uVar1,auStack_38);
  FUN_0001916c(auStack_38);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00017c24),DAT_00017c28 + 0x17c00);
}


// ==== FUN_00017c2c @ 00017c2c ====

int * FUN_00017c2c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017c80 + 0x17c4c;
  FUN_00017960(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00017c84) + 8;
  return param_1;
}


// ==== FUN_00017c88 @ 00017c88 ====

int * FUN_00017c88(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017d20 + 0x17ca8;
  FUN_00017c2c(param_1,param_2);
  FUN_0001779c(param_1 + 5,param_2 + 0x14);
  *param_1 = *(int *)(iVar1 + DAT_00017d24) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00017d24) + 0x1c;
  return param_1;
}


// ==== FUN_00017d28 @ 00017d28 ====

int * FUN_00017d28(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017df0 + 0x17d48;
  FUN_00017704(param_1 + 10,(int)param_2 + *(int *)(*param_2 + -0xc));
  FUN_00017c88(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00017df4) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00017df4) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_00017df4) + 0x44;
  return param_1;
}


// ==== FUN_00017df8 @ 00017df8 ====

void FUN_00017df8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_38 [40];
  
  iVar2 = DAT_00017e90 + 0x17e14;
  FUN_00013f10(param_1);
  uVar1 = __cxa_allocate_exception(0x2c);
  FUN_000193d0(auStack_38,param_1);
  FUN_000194c4(uVar1,auStack_38);
  FUN_000193fc(auStack_38);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00017e94),DAT_00017e98 + 0x17e70);
}


// ==== FUN_00017e9c @ 00017e9c ====

undefined4 * FUN_00017e9c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  FUN_00014cc4(*param_1);
  return param_1;
}


// ==== FUN_00017edc @ 00017edc ====

undefined4 * FUN_00017edc(undefined4 *param_1)

{
  FUN_00014d50(*param_1);
  return param_1;
}


// ==== FUN_00017f0c @ 00017f0c ====

int * FUN_00017f0c(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00019660(*param_1);
  }
  return param_1;
}


// ==== FUN_00017f4c @ 00017f4c ====

void FUN_00017f4c(undefined4 *param_1,undefined4 param_2)

{
  FUN_00019734(param_2);
  *param_1 = param_2;
  return;
}


// ==== FUN_00017f7c @ 00017f7c ====

int * FUN_00017f7c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00017fd0 + 0x17f9c;
  FUN_000178bc(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00017fd4) + 8;
  return param_1;
}


// ==== FUN_00017fd8 @ 00017fd8 ====

/* WARNING: Removing unreachable block (ram,0x0001801c) */

int * FUN_00017fd8(int *param_1)

{
  *param_1 = *(int *)(DAT_00018034 + 0x17ff4 + DAT_00018038) + 8;
  FUN_00014574(param_1);
  return param_1;
}


// ==== FUN_0001803c @ 0001803c ====

void * FUN_0001803c(void *param_1)

{
  FUN_00017fd8(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_0001806c @ 0001806c ====

int * FUN_0001806c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00018104 + 0x1808c;
  FUN_00017f7c(param_1,param_2);
  FUN_0001779c(param_1 + 5,param_2 + 0x14);
  *param_1 = *(int *)(iVar1 + DAT_00018108) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00018108) + 0x1c;
  return param_1;
}


// ==== FUN_0001810c @ 0001810c ====

int * FUN_0001810c(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_000181d4 + 0x1812c;
  FUN_00017704(param_1 + 10,(int)param_2 + *(int *)(*param_2 + -0xc));
  FUN_0001806c(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_000181d8) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_000181d8) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_000181d8) + 0x44;
  return param_1;
}


// ==== FUN_000181dc @ 000181dc ====

void FUN_000181dc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_38 [40];
  
  iVar2 = DAT_00018274 + 0x181f8;
  FUN_00013f10(param_1);
  uVar1 = __cxa_allocate_exception(0x2c);
  FUN_00019810(auStack_38,param_1);
  FUN_00019904(uVar1,auStack_38);
  FUN_0001983c(auStack_38);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00018278),DAT_0001827c + 0x18254);
}


// ==== FUN_00018280 @ 00018280 ====

undefined4 FUN_00018280(undefined4 param_1)

{
  FUN_00019aa0(param_1);
  return param_1;
}


// ==== FUN_000182ac @ 000182ac ====

undefined4 FUN_000182ac(undefined4 param_1)

{
  FUN_00019acc(param_1);
  return param_1;
}


// ==== FUN_000182d4 @ 000182d4 ====

undefined4 FUN_000182d4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015428(param_1);
  FUN_00019af4(param_1,uVar1);
  FUN_000182ac(param_1);
  return param_1;
}


// ==== FUN_0001832c @ 0001832c ====

undefined4 FUN_0001832c(undefined4 param_1)

{
  FUN_00019b58(param_1);
  return param_1;
}


// ==== FUN_00018358 @ 00018358 ====

undefined4 FUN_00018358(undefined4 param_1)

{
  FUN_00019acc(param_1);
  return param_1;
}


// ==== FUN_00018380 @ 00018380 ====

undefined4 FUN_00018380(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015428(param_1);
  FUN_00019b84(param_1,uVar1);
  FUN_00018358(param_1);
  return param_1;
}


// ==== FUN_000183d8 @ 000183d8 ====

undefined4 FUN_000183d8(undefined4 param_1)

{
  FUN_00019c10(param_1);
  return param_1;
}


// ==== FUN_00018404 @ 00018404 ====

undefined4 FUN_00018404(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  FUN_00019cf0(auStack_28,param_1);
  FUN_00019d24(auStack_18,param_1);
  uVar1 = FUN_00018aac(param_1);
  FUN_00019dc0(param_1,auStack_28,auStack_18,uVar1);
  FUN_00019c5c(param_1);
  return param_1;
}


// ==== FUN_0001848c @ 0001848c ====

undefined4 FUN_0001848c(undefined4 param_1,undefined4 param_2)

{
  FUN_00019e24(param_1,param_2);
  return param_1;
}


// ==== FUN_000184c0 @ 000184c0 ====

undefined4 * FUN_000184c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00019660(param_1);
  return param_1;
}


// ==== FUN_00018504 @ 00018504 ====

undefined4 * FUN_00018504(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_000153cc(param_1);
  if (iVar1 != 0) {
    FUN_00014d50(*param_1);
  }
  return param_1;
}


// ==== FUN_00018548 @ 00018548 ====

undefined4 FUN_00018548(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019f10(param_1,param_2);
  return uVar1;
}


// ==== FUN_0001857c @ 0001857c ====

undefined4 FUN_0001857c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019ff8(param_1);
  return uVar1;
}


// ==== FUN_000185a8 @ 000185a8 ====

bool FUN_000185a8(int *param_1,int *param_2)

{
  return *param_1 != *param_2;
}


// ==== FUN_000185ec @ 000185ec ====

undefined4 FUN_000185ec(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018aac(*param_1 + 0x10);
  return uVar1;
}


// ==== FUN_00018620 @ 00018620 ====

void FUN_00018620(undefined4 param_1,undefined4 param_2)

{
  FUN_0001a030(param_1,param_2);
  return;
}


// ==== operator+ @ 0001864c ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::string std::TEMPNAMEPLACEHOLDERVALUE(std::string const&, std::string const&) */

string * std::operator+(string *param_1,string *param_2)

{
  std::string::string(param_1,param_2);
  std::string::append(param_1);
  return param_1;
}


// ==== FUN_00018698 @ 00018698 ====

undefined4 * FUN_00018698(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_000141b8(param_1 + 1);
  return param_1;
}


// ==== FUN_000186d4 @ 000186d4 ====

undefined4 FUN_000186d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  FUN_0001a0a8(auStack_18,0);
  uVar1 = FUN_0001a100(auStack_18);
  uVar2 = FUN_0001a130(uVar1);
  iVar3 = FUN_00013bfc(0x28,uVar2);
  if (iVar3 != 0) {
    FUN_00021878(iVar3,param_2);
  }
  FUN_0001a158(uVar1);
  FUN_00014320(auStack_18,uVar2,uVar2);
  FUN_0001a180(param_1,auStack_18,uVar2);
  FUN_00014384(auStack_18);
  return param_1;
}


// ==== FUN_000187c0 @ 000187c0 ====

int FUN_000187c0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [12];
  
  local_2c = FUN_0001a1d0(param_1,param_2);
  local_28 = FUN_0001857c(param_1);
  iVar2 = FUN_0001a290(&local_2c,&local_28);
  if (iVar2 == 0) {
    FUN_0001a204(param_1);
    uVar3 = FUN_0001a230(&local_2c);
    iVar2 = FUN_0001a25c(auStack_30,param_2,uVar3);
    if (iVar2 == 0) {
      bVar1 = false;
      goto LAB_0001886c;
    }
  }
  bVar1 = true;
LAB_0001886c:
  if (bVar1) {
    FUN_00018698(auStack_24);
    FUN_00018e24(auStack_1c,param_2,auStack_24);
    local_2c = FUN_0001a2d4(param_1,local_2c,auStack_1c);
    FUN_000164f0(auStack_1c);
    FUN_00014384(auStack_24);
  }
  iVar2 = FUN_0001a230(&local_2c);
  return iVar2 + 4;
}


// ==== FUN_0001892c @ 0001892c ====

undefined4 FUN_0001892c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  FUN_00014334(auStack_10,param_2);
  FUN_0001a32c(auStack_10,param_1);
  FUN_00014384(auStack_10);
  return param_1;
}


// ==== FUN_00018990 @ 00018990 ====

undefined4 FUN_00018990(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a378(param_1);
  return uVar1;
}


// ==== FUN_000189bc @ 000189bc ====

undefined4 FUN_000189bc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019ff8(param_1);
  return uVar1;
}


// ==== FUN_000189e8 @ 000189e8 ====

undefined4 FUN_000189e8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return uVar2;
}


// ==== FUN_00018a34 @ 00018a34 ====

int FUN_00018a34(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001a3b0(param_1);
  FUN_0001a3e0(param_1 + 0x10,param_2,param_3);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return param_1;
}


// ==== FUN_00018aac @ 00018aac ====

undefined4 FUN_00018aac(undefined4 param_1)

{
  return param_1;
}


// ==== FUN_00018ad0 @ 00018ad0 ====

int FUN_00018ad0(int param_1)

{
  void *pvVar1;
  
  FUN_00013f10(*(undefined4 *)(param_1 + 8));
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    FUN_0001a4f8(pvVar1);
    operator_delete(pvVar1);
  }
  return param_1;
}


// ==== FUN_00018b20 @ 00018b20 ====

undefined4 FUN_00018b20(undefined4 param_1)

{
  FUN_00018ad0(param_1);
  return param_1;
}


// ==== FUN_00018b4c @ 00018b4c ====

int FUN_00018b4c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_130 [292];
  
  FUN_0001a530(param_1);
  FUN_0001a57c(auStack_130,0,0x100);
  iVar1 = FUN_0001a5d0(auStack_130,param_2,param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_0001a824(auStack_130);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    uVar2 = FUN_0001a84c(auStack_130);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    FUN_0001a874(param_1);
  }
  else {
    uVar2 = FUN_0001a7a0(param_1 + 0x10,1);
    FUN_0001a7ec(param_1,uVar2);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_00018b20(auStack_130);
  return param_1;
}


// ==== FUN_00018c54 @ 00018c54 ====

bool FUN_00018c54(int param_1)

{
  return *(int *)(param_1 + 0x28) != 0;
}


// ==== FUN_00018c8c @ 00018c8c ====

bool FUN_00018c8c(int param_1)

{
  return *(int *)(param_1 + 0xc) == 4;
}


// ==== FUN_00018cc4 @ 00018cc4 ====

undefined4 FUN_00018cc4(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ==== FUN_00018cec @ 00018cec ====

undefined4 FUN_00018cec(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a89c(param_1,param_2);
  return uVar1;
}


// ==== FUN_00018d1c @ 00018d1c ====

undefined4 FUN_00018d1c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a8d4(param_1,param_2);
  return uVar1;
}


// ==== FUN_00018d4c @ 00018d4c ====

bool FUN_00018d4c(int param_1)

{
  return *(int *)(param_1 + 0xc) == 0x102;
}


// ==== FUN_00018d88 @ 00018d88 ====

bool FUN_00018d88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001a9d0(param_1,param_2);
  return iVar1 != 0;
}


// ==== FUN_00018dc8 @ 00018dc8 ====

void FUN_00018dc8(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  FUN_0001aa00(auStack_10,param_2);
  FUN_0001a32c(auStack_10,param_1);
  FUN_00014384(auStack_10);
  return;
}


// ==== FUN_00018e24 @ 00018e24 ====

string * FUN_00018e24(string *param_1,string *param_2,undefined4 param_3)

{
  std::string::string(param_1,param_2);
  FUN_00014334(param_1 + 4,param_3);
  return param_1;
}


// ==== FUN_00018e70 @ 00018e70 ====

string * FUN_00018e70(string *param_1,string *param_2)

{
  std::string::string(param_1,param_2);
  FUN_00014334(param_1 + 4,param_2 + 4);
  return param_1;
}


// ==== FUN_00018ec4 @ 00018ec4 ====

undefined4 FUN_00018ec4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001aa70(param_1,param_2);
  return uVar1;
}


// ==== FUN_00018ef8 @ 00018ef8 ====

undefined4 FUN_00018ef8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001aae4(param_1);
  return uVar1;
}


// ==== FUN_00018f24 @ 00018f24 ====

undefined4 FUN_00018f24(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001ab20(param_1);
  return uVar1;
}


// ==== FUN_00018f50 @ 00018f50 ====

undefined4 FUN_00018f50(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001ab5c(param_1);
  return uVar1;
}


// ==== FUN_00018f7c @ 00018f7c ====

undefined4 FUN_00018f7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001ab98(param_1,param_2,param_3);
  return param_1;
}


// ==== FUN_00018fb8 @ 00018fb8 ====

undefined4 * FUN_00018fb8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}


// ==== FUN_00018ff4 @ 00018ff4 ====

undefined4 FUN_00018ff4(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_00019030 @ 00019030 ====

void FUN_00019030(undefined4 param_1)

{
  FUN_0001ad28(param_1);
  return;
}


// ==== FUN_00019054 @ 00019054 ====

void FUN_00019054(int *param_1)

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


// ==== FUN_000190cc @ 000190cc ====

void FUN_000190cc(undefined4 *param_1,undefined4 param_2)

{
  FUN_00019054(param_1);
  *param_1 = param_2;
  FUN_0001ad94(param_1);
  return;
}


// ==== FUN_00019104 @ 00019104 ====

undefined4 * FUN_00019104(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_0001ad94(param_1);
  return param_1;
}


// ==== FUN_00019140 @ 00019140 ====

undefined4 FUN_00019140(undefined4 param_1,undefined4 param_2)

{
  FUN_0001ae28(param_1,param_2);
  return param_1;
}


// ==== FUN_0001916c @ 0001916c ====

/* WARNING: Removing unreachable block (ram,0x000191d4) */

int * FUN_0001916c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000191ec + 0x19188;
  *param_1 = *(int *)(iVar1 + DAT_000191f0) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_000191f0) + 0x1c;
  FUN_00013cfc(param_1 + 5);
  FUN_00014a94(param_1);
  return param_1;
}


// ==== FUN_000191fc @ 000191fc ====

void * FUN_000191fc(void *param_1)

{
  FUN_0001916c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00019234 @ 00019234 ====

undefined4 FUN_00019234(undefined4 param_1,undefined4 param_2)

{
  FUN_0001aea4(param_1,param_2);
  return param_1;
}


// ==== FUN_00019260 @ 00019260 ====

/* WARNING: Removing unreachable block (ram,0x000192f0) */

int * FUN_00019260(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00019308 + 0x1927c;
  *param_1 = *(int *)(iVar1 + DAT_0001930c) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_0001930c) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_0001930c) + 0x44;
  FUN_0001916c(param_1);
  FUN_00013d84(param_1 + 10);
  return param_1;
}


// ==== FUN_00019318 @ 00019318 ====

undefined4 FUN_00019318(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019260((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00019358 @ 00019358 ====

void * FUN_00019358(void *param_1)

{
  FUN_00019260(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00019390 @ 00019390 ====

undefined4 FUN_00019390(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019358((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_000193d0 @ 000193d0 ====

undefined4 FUN_000193d0(undefined4 param_1,undefined4 param_2)

{
  FUN_0001af80(param_1,param_2);
  return param_1;
}


// ==== FUN_000193fc @ 000193fc ====

/* WARNING: Removing unreachable block (ram,0x00019464) */

int * FUN_000193fc(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001947c + 0x19418;
  *param_1 = *(int *)(iVar1 + DAT_00019480) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00019480) + 0x1c;
  FUN_00013cfc(param_1 + 5);
  FUN_000149a0(param_1);
  return param_1;
}


// ==== FUN_0001948c @ 0001948c ====

void * FUN_0001948c(void *param_1)

{
  FUN_000193fc(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000194c4 @ 000194c4 ====

undefined4 FUN_000194c4(undefined4 param_1,undefined4 param_2)

{
  FUN_0001affc(param_1,param_2);
  return param_1;
}


// ==== FUN_000194f0 @ 000194f0 ====

/* WARNING: Removing unreachable block (ram,0x00019580) */

int * FUN_000194f0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00019598 + 0x1950c;
  *param_1 = *(int *)(iVar1 + DAT_0001959c) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_0001959c) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_0001959c) + 0x44;
  FUN_000193fc(param_1);
  FUN_00013d84(param_1 + 10);
  return param_1;
}


// ==== FUN_000195a8 @ 000195a8 ====

undefined4 FUN_000195a8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000194f0((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_000195e8 @ 000195e8 ====

void * FUN_000195e8(void *param_1)

{
  FUN_000194f0(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00019620 @ 00019620 ====

undefined4 FUN_00019620(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000195e8((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00019660 @ 00019660 ====

void FUN_00019660(int *param_1)

{
  int iVar1;
  undefined1 auStack_1c [20];
  
  if (*param_1 == 0) {
    FUN_00014940(auStack_1c,1,DAT_0001972c + 0x19698);
    FUN_00017df8(auStack_1c);
  }
  iVar1 = FUN_000153cc(param_1);
  if (iVar1 != 0) {
    FUN_00014940(auStack_1c,0x23,DAT_00019730 + 0x196d4);
    FUN_00017df8(auStack_1c);
  }
  FUN_00014cc4(*param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


// ==== FUN_00019734 @ 00019734 ====

void FUN_00019734(int *param_1)

{
  char cVar1;
  undefined1 auStack_1c [20];
  
  if (*param_1 == 0) {
    FUN_00014940(auStack_1c,1,DAT_00019808 + 0x1976c);
    FUN_00017df8(auStack_1c);
  }
  cVar1 = FUN_000153cc(param_1);
  if (cVar1 != '\x01') {
    FUN_00014940(auStack_1c,1,DAT_0001980c + 0x197b0);
    FUN_00017df8(auStack_1c);
  }
  FUN_00014d50(*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// ==== FUN_00019810 @ 00019810 ====

undefined4 FUN_00019810(undefined4 param_1,undefined4 param_2)

{
  FUN_0001b0d8(param_1,param_2);
  return param_1;
}


// ==== FUN_0001983c @ 0001983c ====

/* WARNING: Removing unreachable block (ram,0x000198a4) */

int * FUN_0001983c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000198bc + 0x19858;
  *param_1 = *(int *)(iVar1 + DAT_000198c0) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_000198c0) + 0x1c;
  FUN_00013cfc(param_1 + 5);
  FUN_00017fd8(param_1);
  return param_1;
}


// ==== FUN_000198cc @ 000198cc ====

void * FUN_000198cc(void *param_1)

{
  FUN_0001983c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00019904 @ 00019904 ====

undefined4 FUN_00019904(undefined4 param_1,undefined4 param_2)

{
  FUN_0001b154(param_1,param_2);
  return param_1;
}


// ==== FUN_00019930 @ 00019930 ====

/* WARNING: Removing unreachable block (ram,0x000199c0) */

int * FUN_00019930(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000199d8 + 0x1994c;
  *param_1 = *(int *)(iVar1 + DAT_000199dc) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_000199dc) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_000199dc) + 0x44;
  FUN_0001983c(param_1);
  FUN_00013d84(param_1 + 10);
  return param_1;
}


// ==== FUN_000199e8 @ 000199e8 ====

undefined4 FUN_000199e8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019930((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00019a28 @ 00019a28 ====

void * FUN_00019a28(void *param_1)

{
  FUN_00019930(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00019a60 @ 00019a60 ====

undefined4 FUN_00019a60(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019a28((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00019aa0 @ 00019aa0 ====

undefined4 FUN_00019aa0(undefined4 param_1)

{
  FUN_0001b230(param_1);
  return param_1;
}


// ==== FUN_00019acc @ 00019acc ====

undefined4 FUN_00019acc(undefined4 param_1)

{
  FUN_00018aac(param_1);
  return param_1;
}


// ==== FUN_00019af4 @ 00019af4 ====

void FUN_00019af4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18 = param_2;
  while (local_18 != 0) {
    uVar1 = FUN_0001b29c(local_18);
    FUN_00019af4(param_1,uVar1);
    iVar2 = FUN_00015428(local_18);
    FUN_0001b2c4(param_1,local_18);
    local_18 = iVar2;
  }
  return;
}


// ==== FUN_00019b58 @ 00019b58 ====

undefined4 FUN_00019b58(undefined4 param_1)

{
  FUN_0001b340(param_1);
  return param_1;
}


// ==== FUN_00019b84 @ 00019b84 ====

void FUN_00019b84(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18 = param_2;
  while (local_18 != 0) {
    uVar1 = FUN_0001b29c(local_18);
    FUN_00019b84(param_1,uVar1);
    iVar2 = FUN_00015428(local_18);
    FUN_0001b3ac(param_1,local_18);
    local_18 = iVar2;
  }
  return;
}


// ==== FUN_00019be8 @ 00019be8 ====

undefined4 FUN_00019be8(undefined4 param_1)

{
  FUN_00019acc(param_1);
  return param_1;
}


// ==== FUN_00019c10 @ 00019c10 ====

undefined4 FUN_00019c10(undefined4 param_1)

{
  FUN_0001b428(param_1);
  FUN_0001b488(param_1,0);
  return param_1;
}


// ==== FUN_00019c5c @ 00019c5c ====

int * FUN_00019c5c(int *param_1)

{
  if (*param_1 != 0) {
    FUN_0001b62c(param_1,param_1[5],param_1[9] + 4);
    FUN_0001b688(param_1,*param_1,param_1[1]);
  }
  FUN_00019be8(param_1);
  return param_1;
}


// ==== FUN_00019cf0 @ 00019cf0 ====

undefined4 FUN_00019cf0(undefined4 param_1,int param_2)

{
  FUN_00019d58(param_1,param_2 + 8);
  return param_1;
}


// ==== FUN_00019d24 @ 00019d24 ====

undefined4 FUN_00019d24(undefined4 param_1,int param_2)

{
  FUN_00019d58(param_1,param_2 + 0x18);
  return param_1;
}


// ==== FUN_00019d58 @ 00019d58 ====

undefined4 * FUN_00019d58(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}


// ==== FUN_00019dc0 @ 00019dc0 ====

void FUN_00019dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  FUN_00019d58(auStack_28,param_2,param_3,auStack_28,param_4);
  FUN_00019d58(auStack_18,param_3);
  FUN_0001b6d8(param_1,auStack_28,auStack_18);
  return;
}


// ==== FUN_00019e24 @ 00019e24 ====

int FUN_00019e24(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  int local_44;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_48 = param_2;
  local_44 = param_1;
  uVar1 = FUN_00018aac(param_2);
  uVar2 = FUN_0001ab20(local_48);
  FUN_0001b818(param_1,uVar1,uVar2);
  FUN_00019cf0(&local_30,local_48);
  FUN_00019d24(&local_20,local_48);
  FUN_00019d58(auStack_40,local_44 + 8);
  uVar1 = FUN_00018aac(local_44);
  FUN_0001b870(auStack_58,local_30,uStack_2c,uStack_28,local_24,local_20,uStack_1c,uStack_18,
               uStack_14,auStack_40,uVar1);
  return local_44;
}


// ==== FUN_00019f10 @ 00019f10 ====

undefined4 FUN_00019f10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = FUN_00015428(param_1);
  uVar2 = FUN_0001b8ec(param_1);
  local_18 = FUN_0001b914(param_1,uVar1,uVar2,param_2);
  local_14 = FUN_00019ff8(param_1);
  iVar3 = FUN_0001a290(&local_18,&local_14);
  if (iVar3 == 0) {
    uVar1 = FUN_0001b9b8(local_18);
    iVar3 = FUN_0001a25c(param_1,param_2,uVar1);
    if (iVar3 == 0) {
      return local_18;
    }
  }
  uVar1 = FUN_00019ff8(param_1);
  return uVar1;
}


// ==== FUN_00019ff8 @ 00019ff8 ====

undefined4 FUN_00019ff8(int param_1)

{
  undefined4 local_c;
  
  FUN_0001b9f4(&local_c,param_1 + 4);
  return local_c;
}


// ==== FUN_0001a030 @ 0001a030 ====

void FUN_0001a030(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x20) + -4) {
    FUN_0001ba88(param_1,param_2);
  }
  else {
    FUN_0001ba28(param_1,*(undefined4 *)(param_1 + 0x18),param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
  }
  return;
}


// ==== FUN_0001a0a8 @ 0001a0a8 ====

undefined4 * FUN_0001a0a8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  FUN_0001bb58(param_1 + 1,param_2);
  FUN_0001bbe4(param_1,param_2);
  return param_1;
}


// ==== FUN_0001a100 @ 0001a100 ====

undefined4 FUN_0001a100(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000142c4(param_1 + 4);
  return uVar1;
}


// ==== FUN_0001a130 @ 0001a130 ====

int FUN_0001a130(int param_1)

{
  return param_1 + 8;
}


// ==== FUN_0001a158 @ 0001a158 ====

void FUN_0001a158(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}


// ==== FUN_0001a180 @ 0001a180 ====

undefined4 * FUN_0001a180(undefined4 *param_1,int param_2,undefined4 param_3)

{
  *param_1 = param_3;
  FUN_00014228(param_1 + 1,param_2 + 4);
  return param_1;
}


// ==== FUN_0001a1d0 @ 0001a1d0 ====

undefined4 FUN_0001a1d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001bc10(param_1,param_2);
  return uVar1;
}


// ==== FUN_0001a204 @ 0001a204 ====

void FUN_0001a204(undefined4 param_1)

{
  FUN_0001bc60(param_1);
  return;
}


// ==== FUN_0001a230 @ 0001a230 ====

int FUN_0001a230(int *param_1)

{
  return *param_1 + 0x10;
}


// ==== FUN_0001a25c @ 0001a25c ====

undefined4 FUN_0001a25c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001bc80(param_2,param_3);
  return uVar1;
}


// ==== FUN_0001a290 @ 0001a290 ====

bool FUN_0001a290(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}


// ==== FUN_0001a2d4 @ 0001a2d4 ====

undefined4 FUN_0001a2d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14 [2];
  
  local_20 = param_2;
  local_1c = param_1;
  FUN_0001bcb8(local_14,&local_20);
  uVar1 = FUN_0001bcf0(param_1,local_14[0],param_3);
  return uVar1;
}


// ==== FUN_0001a32c @ 0001a32c ====

void FUN_0001a32c(int param_1,int param_2)

{
  FUN_0001bd90(param_1,param_2);
  FUN_0001427c(param_1 + 4,param_2 + 4);
  return;
}


// ==== FUN_0001a378 @ 0001a378 ====

undefined4 FUN_0001a378(int param_1)

{
  undefined4 local_c;
  
  FUN_0001b9f4(&local_c,*(undefined4 *)(param_1 + 0xc));
  return local_c;
}


// ==== FUN_0001a3b0 @ 0001a3b0 ====

int FUN_0001a3b0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return param_1;
}


// ==== FUN_0001a3e0 @ 0001a3e0 ====

int * FUN_0001a3e0(int *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_3;
  if (*param_1 == 0) {
    pvVar1 = operator_new(0x14);
    FUN_0001bdd8(pvVar1,0x10000,0);
    *param_1 = (int)pvVar1;
    param_1[1] = *param_1;
  }
  iVar2 = FUN_0001be84(*param_1,param_1[5]);
  param_1[2] = iVar2;
  param_1[3] = param_1[2];
  param_1[4] = param_1[2] + param_1[5];
  return param_1;
}


// ==== FUN_0001a4f8 @ 0001a4f8 ====

int FUN_0001a4f8(int param_1)

{
  FUN_0001bf50(param_1);
  operator_delete(*(void **)(param_1 + 0x10));
  return param_1;
}


// ==== FUN_0001a530 @ 0001a530 ====

undefined4 FUN_0001a530(undefined4 param_1)

{
  int iVar1;
  
  FUN_00018aac(param_1);
  iVar1 = FUN_00013bfc(0x10,param_1);
  if (iVar1 != 0) {
    FUN_0001a3b0(iVar1);
  }
  return param_1;
}


// ==== FUN_0001a57c @ 0001a57c ====

int FUN_0001a57c(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001a3e0(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return param_1;
}


// ==== FUN_0001a5d0 @ 0001a5d0 ====

undefined4 FUN_0001a5d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  iVar1 = setjmp((__jmp_buf_tag *)(param_1 + 0x18));
  if (iVar1 == 0) {
    FUN_0001bfec(param_2);
    iVar1 = FUN_000153cc(param_2);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x118) = DAT_0001a794 + 0x1a67c;
      uVar2 = FUN_00015428(param_2);
      *(undefined4 *)(param_1 + 0x11c) = uVar2;
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
    }
    iVar1 = FUN_000153cc(param_2);
    if (iVar1 == 0x5b) {
      FUN_0001c2ac(param_1,param_2,param_3);
    }
    else {
      if (iVar1 != 0x7b) {
        *(int *)(param_1 + 0x118) = DAT_0001a798 + 0x1a6f8;
        uVar2 = FUN_00015428(param_2);
        *(undefined4 *)(param_1 + 0x11c) = uVar2;
                    /* WARNING: Subroutine does not return */
        longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
      }
      FUN_0001c0b0(param_1,param_2,param_3);
    }
    FUN_0001bfec(param_2);
    iVar1 = FUN_000153cc(param_2);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x118) = DAT_0001a79c + 0x1a75c;
      uVar2 = FUN_00015428(param_2);
      *(undefined4 *)(param_1 + 0x11c) = uVar2;
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
    }
    uVar2 = 1;
  }
  else {
    FUN_0001bfc0(param_1);
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0001a7a0 @ 0001a7a0 ====

undefined4 FUN_0001a7a0(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2 * -0x10;
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== FUN_0001a7ec @ 0001a7ec ====

void FUN_0001a7ec(void *param_1,void *param_2)

{
  memcpy(param_1,param_2,0x10);
  *(undefined4 *)((int)param_2 + 0xc) = 0;
  return;
}


// ==== FUN_0001a824 @ 0001a824 ====

undefined4 FUN_0001a824(int param_1)

{
  return *(undefined4 *)(param_1 + 0x118);
}


// ==== FUN_0001a84c @ 0001a84c ====

undefined4 FUN_0001a84c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x11c);
}


// ==== FUN_0001a874 @ 0001a874 ====

void FUN_0001a874(int param_1)

{
  FUN_0001bfc0(param_1 + 0x10);
  return;
}


// ==== FUN_0001a89c @ 0001a89c ====

int FUN_0001a89c(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x10;
}


// ==== FUN_0001a8d4 @ 0001a8d4 ====

int FUN_0001a8d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0001a9bc + 0x1a8f4;
  iVar1 = FUN_0001c400(param_1,param_2);
  if (iVar1 == 0) {
    if (((**(uint **)(iVar2 + DAT_0001a9c0) & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(*(undefined4 *)(iVar2 + DAT_0001a9c0)), iVar1 != 0)) {
      FUN_0001a3b0(*(undefined4 *)(iVar2 + DAT_0001a9c4));
      __cxa_guard_release(*(undefined4 *)(iVar2 + DAT_0001a9c0));
      __aeabi_atexit(*(undefined4 *)(iVar2 + DAT_0001a9c4),DAT_0001a9c8 + 0x1a998,
                     DAT_0001a9cc + 0x1a9a4);
    }
    iVar1 = *(int *)(iVar2 + DAT_0001a9c4);
  }
  else {
    iVar1 = iVar1 + 0x10;
  }
  return iVar1;
}


// ==== FUN_0001a9d0 @ 0001a9d0 ====

undefined4 FUN_0001a9d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001c400(param_1,param_2);
  return uVar1;
}


// ==== FUN_0001aa00 @ 0001aa00 ====

undefined4 * FUN_0001aa00(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  FUN_000141b8(param_1 + 1);
  FUN_0001c4b8(param_1,param_2,param_1 + 1);
  return param_1;
}


// ==== FUN_0001aa70 @ 0001aa70 ====

undefined4 FUN_0001aa70(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = FUN_00013bfc(auStack_14,param_2);
  FUN_0001c514(&local_10,param_1,uVar1);
  uVar1 = FUN_0001c5dc(param_1,local_10,local_c,param_2);
  return uVar1;
}


// ==== FUN_0001aae4 @ 0001aae4 ====

undefined4 FUN_0001aae4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a290(param_1 + 0x18,param_1 + 8);
  return uVar1;
}


// ==== FUN_0001ab20 @ 0001ab20 ====

undefined4 FUN_0001ab20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001c6f0(param_1 + 0x18,param_1 + 8);
  return uVar1;
}


// ==== FUN_0001ab5c @ 0001ab5c ====

undefined4 FUN_0001ab5c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [16];
  
  FUN_00019cf0(auStack_18,param_1);
  uVar1 = FUN_000143f8(auStack_18);
  return uVar1;
}


// ==== FUN_0001ab98 @ 0001ab98 ====

undefined4 FUN_0001ab98(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = FUN_00015428(param_2);
  local_1c = FUN_0001b8ec(param_2);
  while( true ) {
    while( true ) {
      if (local_20 == 0) {
        FUN_0001b9f4(&local_28,local_1c);
        FUN_0001b9f4(&local_24,local_1c);
        FUN_0001c8bc(param_1,&local_28,&local_24);
        return param_1;
      }
      uVar1 = FUN_0001b9b8(local_20);
      iVar2 = FUN_0001a25c(param_2,uVar1,param_3);
      if (iVar2 == 0) break;
      local_20 = FUN_0001b29c(local_20);
    }
    uVar1 = FUN_0001b9b8(local_20);
    iVar2 = FUN_0001a25c(param_2,param_3,uVar1);
    if (iVar2 == 0) break;
    local_1c = local_20;
    local_20 = FUN_00015428(local_20);
  }
  local_18 = local_20;
  local_14 = local_1c;
  local_1c = local_20;
  local_20 = FUN_00015428(local_20);
  local_18 = FUN_0001b29c(local_18);
  local_28 = FUN_0001c77c(param_2,local_20,local_1c,param_3);
  local_24 = FUN_0001c820(param_2,local_18,local_14,param_3);
  FUN_0001c8bc(param_1,&local_28,&local_24);
  return param_1;
}


// ==== FUN_0001ad28 @ 0001ad28 ====

void FUN_0001ad28(int param_1)

{
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x10) + -4) {
    FUN_0001c92c(param_1);
  }
  else {
    FUN_0001c908(param_1,*(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  return;
}


// ==== FUN_0001ad94 @ 0001ad94 ====

void FUN_0001ad94(int *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*(int *)*param_1 + 0xc))(*param_1);
  }
  return;
}


// ==== FUN_0001ade0 @ 0001ade0 ====

int * FUN_0001ade0(int *param_1)

{
  *param_1 = *(int *)(DAT_0001ae20 + 0x1adfc + DAT_0001ae24) + 8;
  return param_1;
}


// ==== FUN_0001ae28 @ 0001ae28 ====

int * FUN_0001ae28(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001ae9c + 0x1ae48;
  FUN_000179bc(param_1,param_2);
  FUN_00013c84(param_1 + 5);
  *param_1 = *(int *)(iVar1 + DAT_0001aea0) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_0001aea0) + 0x1c;
  return param_1;
}


// ==== FUN_0001aea4 @ 0001aea4 ====

int * FUN_0001aea4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001af78 + 0x1aec4;
  FUN_0001ade0(param_1 + 10);
  FUN_00017a18(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_0001af7c) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_0001af7c) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_0001af7c) + 0x44;
  FUN_00013e0c(param_1 + 5,param_2 + 0x14);
  return param_1;
}


// ==== FUN_0001af80 @ 0001af80 ====

int * FUN_0001af80(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001aff4 + 0x1afa0;
  FUN_00017c2c(param_1,param_2);
  FUN_00013c84(param_1 + 5);
  *param_1 = *(int *)(iVar1 + DAT_0001aff8) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_0001aff8) + 0x1c;
  return param_1;
}


// ==== FUN_0001affc @ 0001affc ====

int * FUN_0001affc(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001b0d0 + 0x1b01c;
  FUN_0001ade0(param_1 + 10);
  FUN_00017c88(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_0001b0d4) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_0001b0d4) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_0001b0d4) + 0x44;
  FUN_00013e0c(param_1 + 5,param_2 + 0x14);
  return param_1;
}


// ==== FUN_0001b0d8 @ 0001b0d8 ====

int * FUN_0001b0d8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001b14c + 0x1b0f8;
  FUN_00017f7c(param_1,param_2);
  FUN_00013c84(param_1 + 5);
  *param_1 = *(int *)(iVar1 + DAT_0001b150) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_0001b150) + 0x1c;
  return param_1;
}


// ==== FUN_0001b154 @ 0001b154 ====

int * FUN_0001b154(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001b228 + 0x1b174;
  FUN_0001ade0(param_1 + 10);
  FUN_0001806c(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_0001b22c) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_0001b22c) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_0001b22c) + 0x44;
  FUN_00013e0c(param_1 + 5,param_2 + 0x14);
  return param_1;
}


// ==== FUN_0001b230 @ 0001b230 ====

int FUN_0001b230(int param_1)

{
  FUN_00019acc(param_1);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0001c9ec(param_1);
  return param_1;
}


// ==== FUN_0001b29c @ 0001b29c ====

undefined4 FUN_0001b29c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== FUN_0001b2c4 @ 0001b2c4 ====

void FUN_0001b2c4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_c [4];
  
  FUN_0001ca40(auStack_c,param_1);
  uVar1 = FUN_00018aac(param_2 + 0x10);
  FUN_0001ca78(auStack_c,uVar1);
  FUN_00019acc(auStack_c);
  FUN_0001ca9c(param_1,param_2);
  return;
}


// ==== FUN_0001b340 @ 0001b340 ====

int FUN_0001b340(int param_1)

{
  FUN_00019acc(param_1);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0001c9ec(param_1);
  return param_1;
}


// ==== FUN_0001b3ac @ 0001b3ac ====

void FUN_0001b3ac(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_c [4];
  
  FUN_0001cacc(auStack_c,param_1);
  uVar1 = FUN_00018aac(param_2 + 0x10);
  FUN_0001ca78(auStack_c,uVar1);
  FUN_00019acc(auStack_c);
  FUN_0001ca9c(param_1,param_2);
  return;
}


// ==== FUN_0001b428 @ 0001b428 ====

undefined4 * FUN_0001b428(undefined4 *param_1)

{
  FUN_00019acc(param_1);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0001cb04(param_1 + 2);
  FUN_0001cb04(param_1 + 6);
  return param_1;
}


// ==== FUN_0001b488 @ 0001b488 ====

void FUN_0001b488(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = FUN_00013c44(4);
  local_1c = param_2 / uVar1 + 1;
  local_24 = 8;
  local_20 = param_2 / uVar1 + 3;
  piVar2 = (int *)FUN_0001c9a4(&local_24,&local_20);
  param_1[1] = *piVar2;
  iVar3 = FUN_0001cb58(param_1,param_1[1]);
  *param_1 = iVar3;
  local_18 = *param_1 + ((uint)(param_1[1] - local_1c) >> 1) * 4;
  local_14 = local_18 + local_1c * 4;
  FUN_0001cbc4(param_1,local_18,local_14);
  FUN_0001cc4c(param_1 + 2,local_18);
  FUN_0001cc4c(param_1 + 6,local_14 + -4);
  param_1[2] = param_1[3];
  iVar3 = param_1[7];
  uVar1 = FUN_00013c44(4);
  param_1[6] = iVar3 + (param_2 - uVar1 * (param_2 / uVar1)) * 4;
  return;
}


// ==== FUN_0001b62c @ 0001b62c ====

void FUN_0001b62c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *local_c;
  
  for (local_c = param_2; local_c < param_3; local_c = local_c + 1) {
    FUN_0001cca4(param_1,*local_c);
  }
  return;
}


// ==== FUN_0001b688 @ 0001b688 ====

void FUN_0001b688(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_c [4];
  
  FUN_0001cce0(auStack_c,param_1);
  FUN_0001cd18(auStack_c,param_2,param_3);
  FUN_00019acc(auStack_c);
  return;
}


// ==== FUN_0001b6d8 @ 0001b6d8 ====

void FUN_0001b6d8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *local_14;
  
  local_14 = (int *)param_2[3];
  while (local_14 = local_14 + 1, local_14 < (int *)param_3[3]) {
    iVar5 = *local_14;
    iVar3 = *local_14;
    iVar1 = FUN_0001cd40();
    uVar2 = FUN_00018aac(param_1);
    FUN_0001cd5c(iVar5,iVar3 + iVar1 * 4,uVar2);
  }
  if (param_2[3] == param_3[3]) {
    uVar6 = *param_2;
    uVar4 = *param_3;
    uVar2 = FUN_00018aac(param_1);
    FUN_0001cd5c(uVar6,uVar4,uVar2);
  }
  else {
    uVar6 = *param_2;
    uVar4 = param_2[2];
    uVar2 = FUN_00018aac(param_1);
    FUN_0001cd5c(uVar6,uVar4,uVar2);
    uVar6 = param_3[1];
    uVar4 = *param_3;
    uVar2 = FUN_00018aac(param_1);
    FUN_0001cd5c(uVar6,uVar4,uVar2);
  }
  return;
}


// ==== FUN_0001b818 @ 0001b818 ====

undefined4 FUN_0001b818(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001cd88(param_1,param_2);
  FUN_0001b488(param_1,param_3);
  return param_1;
}


// ==== FUN_0001b870 @ 0001b870 ====

undefined4
FUN_0001b870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  undefined1 auStack_28 [16];
  
  FUN_00019d58(auStack_28,param_10);
  FUN_0001cdf0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,auStack_28);
  return param_1;
}


// ==== FUN_0001b8ec @ 0001b8ec ====

int FUN_0001b8ec(int param_1)

{
  return param_1 + 4;
}


// ==== FUN_0001b914 @ 0001b914 ====

undefined4 FUN_0001b914(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int local_24;
  int local_20;
  undefined4 local_14 [2];
  
  local_24 = param_3;
  local_20 = param_2;
  while (local_20 != 0) {
    uVar2 = FUN_0001b9b8(local_20);
    cVar1 = FUN_0001a25c(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_20 = FUN_0001b29c(local_20);
    }
    else {
      local_24 = local_20;
      local_20 = FUN_00015428(local_20);
    }
  }
  FUN_0001b9f4(local_14,local_24);
  return local_14[0];
}


// ==== FUN_0001b9b8 @ 0001b9b8 ====

undefined4 FUN_0001b9b8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_c [4];
  
  uVar1 = FUN_0001ce6c(param_1);
  uVar1 = FUN_00013bfc(auStack_c,uVar1);
  return uVar1;
}


// ==== FUN_0001b9f4 @ 0001b9f4 ====

undefined4 * FUN_0001b9f4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}


// ==== FUN_0001ba28 @ 0001ba28 ====

void FUN_0001ba28(undefined4 param_1,undefined4 param_2,string *param_3)

{
  string *this;
  
  this = (string *)FUN_00013bfc(4,param_2);
  if (this != (string *)0x0) {
    std::string::string(this,param_3);
  }
  return;
}


// ==== FUN_0001ba88 @ 0001ba88 ====

void FUN_0001ba88(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0001ce94(param_1,1);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar1 = FUN_0001cef8(param_1);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  FUN_0001ba28(param_1,*(undefined4 *)(param_1 + 0x18),param_2);
  FUN_0001cc4c(param_1 + 0x18,*(int *)(param_1 + 0x24) + 4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// ==== FUN_0001bb58 @ 0001bb58 ====

undefined4 * FUN_0001bb58(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  pvVar1 = operator_new(0x40);
  FUN_0001cf38(pvVar1,param_2);
  *param_1 = pvVar1;
  return param_1;
}


// ==== FUN_0001bbe4 @ 0001bbe4 ====

void FUN_0001bbe4(undefined4 param_1,undefined4 param_2)

{
  FUN_00014320(param_1,param_2,param_2);
  return;
}


// ==== FUN_0001bc10 @ 0001bc10 ====

undefined4 FUN_0001bc10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00015428(param_1);
  uVar2 = FUN_0001b8ec(param_1);
  uVar1 = FUN_0001b914(param_1,uVar1,uVar2,param_2);
  return uVar1;
}


// ==== FUN_0001bc60 @ 0001bc60 ====

undefined4 FUN_0001bc60(void)

{
  undefined4 in_r3;
  
  return in_r3;
}


// ==== FUN_0001bc80 @ 0001bc80 ====

uint FUN_0001bc80(string *param_1)

{
  uint uVar1;
  
  uVar1 = std::string::compare(param_1);
  return uVar1 >> 0x1f;
}


// ==== FUN_0001bcb8 @ 0001bcb8 ====

undefined4 * FUN_0001bcb8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return param_1;
}


// ==== FUN_0001bcf0 @ 0001bcf0 ====

undefined4 FUN_0001bcf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  uVar1 = FUN_00013bfc(&local_14,param_3);
  FUN_0001cfa8(&local_10,param_1,param_2,uVar1);
  if (local_c == 0) {
    FUN_0001b9f4(&local_14,local_10);
  }
  else {
    local_14 = FUN_0001d384(param_1,local_10,local_c,param_3);
  }
  return local_14;
}


// ==== FUN_0001bd90 @ 0001bd90 ====

void FUN_0001bd90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


// ==== FUN_0001bdd8 @ 0001bdd8 ====

undefined4 * FUN_0001bdd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  if (param_1[3] == 0) {
    pvVar1 = operator_new(1);
    param_1[3] = pvVar1;
    param_1[4] = param_1[3];
  }
  FUN_0001d498(param_1,param_1[1]);
  return param_1;
}


// ==== FUN_0001be84 @ 0001be84 ====

int FUN_0001be84(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_2 + 3U & 0xfffffffc;
  if (*(uint *)*param_1 < *(int *)(*param_1 + 4) + uVar2) {
    uVar3 = uVar2;
    if (uVar2 < (uint)param_1[1]) {
      uVar3 = param_1[1];
    }
    FUN_0001d498(param_1,uVar3);
  }
  iVar1 = *param_1;
  iVar4 = *(int *)(*param_1 + 4);
  *(uint *)(*param_1 + 4) = *(int *)(*param_1 + 4) + uVar2;
  return iVar1 + iVar4 + 0xc;
}


// ==== FUN_0001bf50 @ 0001bf50 ====

void FUN_0001bf50(int *param_1)

{
  int iVar1;
  
  while ((*param_1 != 0 && (*param_1 != param_1[2]))) {
    iVar1 = *(int *)(*param_1 + 8);
    FUN_00015300(*param_1);
    *param_1 = iVar1;
  }
  return;
}


// ==== FUN_0001bfc0 @ 0001bfc0 ====

void FUN_0001bfc0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== FUN_0001bfec @ 0001bfec ====

void FUN_0001bfec(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_14 = *param_1;
  uStack_10 = param_1[1];
  uStack_c = param_1[2];
  while( true ) {
    iVar2 = FUN_000153cc(&local_14);
    if ((((iVar2 == 0x20) || (iVar2 = FUN_000153cc(&local_14), iVar2 == 10)) ||
        (iVar2 = FUN_000153cc(&local_14), iVar2 == 0xd)) ||
       (iVar2 = FUN_000153cc(&local_14), iVar2 == 9)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    FUN_000153f4(&local_14);
  }
  *param_1 = local_14;
  param_1[1] = uStack_10;
  param_1[2] = uStack_c;
  return;
}


// ==== FUN_0001c0b0 @ 0001c0b0 ====

void FUN_0001c0b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  FUN_000153f4(param_2);
  FUN_0001d508(param_3);
  FUN_0001bfec(param_2);
  iVar1 = FUN_000153cc(param_2);
  if (iVar1 == 0x7d) {
    FUN_000153f4(param_2);
    FUN_0001d55c(param_3,0);
  }
  else {
    local_c = 0;
    while( true ) {
      iVar1 = FUN_000153cc(param_2);
      if (iVar1 != 0x22) {
        *(int *)(param_1 + 0x118) = DAT_0001c2a0 + 0x1c158;
        uVar2 = FUN_00015428(param_2);
        *(undefined4 *)(param_1 + 0x11c) = uVar2;
                    /* WARNING: Subroutine does not return */
        longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
      }
      FUN_0001d5c0(param_1,param_2,param_3);
      FUN_0001bfec(param_2);
      iVar1 = FUN_000153f4(param_2);
      if (iVar1 != 0x3a) {
        *(int *)(param_1 + 0x118) = DAT_0001c2a4 + 0x1c1cc;
        uVar2 = FUN_00015428(param_2);
        *(undefined4 *)(param_1 + 0x11c) = uVar2;
                    /* WARNING: Subroutine does not return */
        longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
      }
      FUN_0001bfec(param_2);
      FUN_0001d9d8(param_1,param_2,param_3);
      FUN_0001bfec(param_2);
      local_c = local_c + 1;
      iVar1 = FUN_000153f4(param_2);
      if (iVar1 != 0x2c) break;
      FUN_0001bfec(param_2);
    }
    if (iVar1 != 0x7d) {
      *(int *)(param_1 + 0x118) = DAT_0001c2a8 + 0x1c270;
      uVar2 = FUN_00015428(param_2);
      *(undefined4 *)(param_1 + 0x11c) = uVar2;
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
    }
    FUN_0001d55c(param_3,local_c);
  }
  return;
}


// ==== FUN_0001c2ac @ 0001c2ac ====

void FUN_0001c2ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  FUN_000153f4(param_2);
  FUN_0001dac8(param_3);
  FUN_0001bfec(param_2);
  iVar1 = FUN_000153cc(param_2);
  if (iVar1 == 0x5d) {
    FUN_000153f4(param_2);
    FUN_0001db1c(param_3,0);
  }
  else {
    local_c = 0;
    while( true ) {
      FUN_0001d9d8(param_1,param_2,param_3);
      local_c = local_c + 1;
      FUN_0001bfec(param_2);
      iVar1 = FUN_000153f4(param_2);
      if (iVar1 != 0x2c) break;
      FUN_0001bfec(param_2);
    }
    if (iVar1 != 0x5d) {
      *(int *)(param_1 + 0x118) = DAT_0001c3c4 + 0x1c394;
      uVar2 = FUN_00015428(param_2);
      *(undefined4 *)(param_1 + 0x11c) = uVar2;
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
    }
    FUN_0001db1c(param_3,local_c);
  }
  return;
}


// ==== FUN_0001c3c8 @ 0001c3c8 ====

int FUN_0001c3c8(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
}


// ==== FUN_0001c400 @ 0001c400 ====

undefined4 * FUN_0001c400(int *param_1,void *param_2)

{
  size_t __n;
  int iVar1;
  undefined4 *local_14;
  
  __n = FUN_0001db80(param_2);
  local_14 = (undefined4 *)*param_1;
  while( true ) {
    if ((undefined4 *)(*param_1 + param_1[1] * 0x20) == local_14) {
      return (undefined4 *)0x0;
    }
    if ((local_14[1] == __n) && (iVar1 = memcmp((void *)*local_14,param_2,__n), iVar1 == 0)) break;
    local_14 = local_14 + 8;
  }
  return local_14;
}


// ==== FUN_0001c4b8 @ 0001c4b8 ====

void FUN_0001c4b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_c [4];
  
  FUN_0001dbd4(auStack_c,param_2);
  FUN_0001427c(auStack_c,param_3);
  FUN_000141e8(auStack_c);
  FUN_00014320(param_1,param_2,param_2);
  return;
}


// ==== FUN_0001c514 @ 0001c514 ====

undefined4 FUN_0001c514(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = FUN_00015428(param_2);
  local_14 = FUN_0001b8ec(param_2);
  while (local_18 != 0) {
    local_14 = local_18;
    uVar1 = FUN_0001b9b8(local_18);
    iVar2 = FUN_0001a25c(param_2,param_3,uVar1);
    if (iVar2 == 0) {
      local_18 = FUN_0001b29c(local_18);
    }
    else {
      local_18 = FUN_00015428(local_18);
    }
  }
  local_20 = local_18;
  local_1c = local_14;
  FUN_0001dc48(param_1,&local_20,&local_1c);
  return param_1;
}


// ==== FUN_0001c5dc @ 0001c5dc ====

undefined4 FUN_0001c5dc(int param_1,int param_2,_Rb_tree_node_base *param_3,undefined4 param_4)

{
  _Rb_tree_node_base *p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_24 [3];
  bool local_21;
  undefined4 local_20;
  _Rb_tree_node_base *local_1c;
  
  if ((param_2 == 0) && (p_Var1 = (_Rb_tree_node_base *)FUN_0001b8ec(param_1), p_Var1 != param_3)) {
    uVar2 = FUN_00013bfc(auStack_24,param_4);
    uVar3 = FUN_0001b9b8(param_3);
    iVar4 = FUN_0001a25c(param_1,uVar2,uVar3);
    if (iVar4 == 0) {
      local_21 = false;
      goto LAB_0001c670;
    }
  }
  local_21 = true;
LAB_0001c670:
  local_1c = (_Rb_tree_node_base *)FUN_0001dc94(param_1,param_4);
  std::_Rb_tree_insert_and_rebalance(local_21,local_1c,param_3,(_Rb_tree_node_base *)(param_1 + 4));
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  FUN_0001b9f4(&local_20,local_1c);
  return local_20;
}


// ==== FUN_0001c6f0 @ 0001c6f0 ====

int FUN_0001c6f0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001cd40();
  return ((param_1[3] - param_2[3] >> 2) + -1) * iVar1 + (*param_1 - param_1[1] >> 2) +
         (param_2[2] - *param_2 >> 2);
}


// ==== FUN_0001c77c @ 0001c77c ====

undefined4 FUN_0001c77c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int local_24;
  int local_20;
  undefined4 local_14 [2];
  
  local_24 = param_3;
  local_20 = param_2;
  while (local_20 != 0) {
    uVar2 = FUN_0001b9b8(local_20);
    cVar1 = FUN_0001a25c(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_20 = FUN_0001b29c(local_20);
    }
    else {
      local_24 = local_20;
      local_20 = FUN_00015428(local_20);
    }
  }
  FUN_0001b9f4(local_14,local_24);
  return local_14[0];
}


// ==== FUN_0001c820 @ 0001c820 ====

undefined4 FUN_0001c820(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_24;
  int local_20;
  undefined4 local_14 [2];
  
  local_24 = param_3;
  local_20 = param_2;
  while (local_20 != 0) {
    uVar1 = FUN_0001b9b8(local_20);
    iVar2 = FUN_0001a25c(param_1,param_4,uVar1);
    if (iVar2 == 0) {
      local_20 = FUN_0001b29c(local_20);
    }
    else {
      local_24 = local_20;
      local_20 = FUN_00015428(local_20);
    }
  }
  FUN_0001b9f4(local_14,local_24);
  return local_14[0];
}


// ==== FUN_0001c8bc @ 0001c8bc ====

undefined4 * FUN_0001c8bc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return param_1;
}


// ==== FUN_0001c908 @ 0001c908 ====

void FUN_0001c908(undefined4 param_1,string *param_2)

{
  std::string::~string(param_2);
  return;
}


// ==== FUN_0001c92c @ 0001c92c ====

void FUN_0001c92c(int param_1)

{
  FUN_0001c908(param_1,*(undefined4 *)(param_1 + 8));
  FUN_0001cca4(param_1,*(undefined4 *)(param_1 + 0xc));
  FUN_0001cc4c(param_1 + 8,*(int *)(param_1 + 0x14) + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== FUN_0001c9a4 @ 0001c9a4 ====

uint * FUN_0001c9a4(uint *param_1,uint *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}


// ==== FUN_0001c9ec @ 0001c9ec ====

void FUN_0001c9ec(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0xc) = param_1 + 4;
  *(int *)(param_1 + 0x10) = param_1 + 4;
  return;
}


// ==== FUN_0001ca40 @ 0001ca40 ====

undefined4 FUN_0001ca40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018aac(param_2);
  FUN_0001dd44(param_1,uVar1);
  return param_1;
}


// ==== FUN_0001ca78 @ 0001ca78 ====

void FUN_0001ca78(undefined4 param_1,undefined4 param_2)

{
  FUN_000164f0(param_2);
  return;
}


// ==== FUN_0001ca9c @ 0001ca9c ====

void FUN_0001ca9c(undefined4 param_1,undefined4 param_2)

{
  FUN_0001cd18(param_1,param_2,1);
  return;
}


// ==== FUN_0001cacc @ 0001cacc ====

undefined4 FUN_0001cacc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018aac(param_2);
  FUN_0001dd44(param_1,uVar1);
  return param_1;
}


// ==== FUN_0001cb04 @ 0001cb04 ====

undefined4 * FUN_0001cb04(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


// ==== FUN_0001cb58 @ 0001cb58 ====

undefined4 FUN_0001cb58(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_14 [8];
  
  FUN_0001cce0(auStack_14,param_1);
  uVar1 = FUN_0001dd70(auStack_14,param_2,0);
  FUN_00019acc(auStack_14);
  return uVar1;
}


// ==== FUN_0001cbc4 @ 0001cbc4 ====

void FUN_0001cbc4(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_c;
  
  local_c = param_2;
  while( true ) {
    if (param_3 <= local_c) break;
    uVar1 = FUN_0001cef8(param_1);
    *local_c = uVar1;
    local_c = local_c + 1;
  }
  return;
}


// ==== FUN_0001cc4c @ 0001cc4c ====

void FUN_0001cc4c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 **)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 4) = *param_2;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = FUN_0001cd40();
  *(int *)(param_1 + 8) = iVar2 + iVar1 * 4;
  return;
}


// ==== FUN_0001cca4 @ 0001cca4 ====

void FUN_0001cca4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013c44(4);
  FUN_0001cd18(param_1,param_2,uVar1);
  return;
}


// ==== FUN_0001cce0 @ 0001cce0 ====

undefined4 FUN_0001cce0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018aac(param_2);
  FUN_0001dd44(param_1,uVar1);
  return param_1;
}


// ==== FUN_0001cd18 @ 0001cd18 ====

void FUN_0001cd18(undefined4 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}


// ==== FUN_0001cd40 @ 0001cd40 ====

undefined4 FUN_0001cd40(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013c44(4);
  return uVar1;
}


// ==== FUN_0001cd5c @ 0001cd5c ====

void FUN_0001cd5c(undefined4 param_1,undefined4 param_2)

{
  FUN_0001ddd4(param_1,param_2);
  return;
}


// ==== FUN_0001cd88 @ 0001cd88 ====

undefined4 * FUN_0001cd88(undefined4 *param_1,undefined4 param_2)

{
  FUN_0001ddfc(param_1,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0001cb04(param_1 + 2);
  FUN_0001cb04(param_1 + 6);
  return param_1;
}


// ==== FUN_0001cdf0 @ 0001cdf0 ====

undefined4
FUN_0001cdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  undefined1 auStack_28 [16];
  
  FUN_00019d58(auStack_28,param_10);
  FUN_0001de2c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,auStack_28);
  return param_1;
}


// ==== FUN_0001ce6c @ 0001ce6c ====

int FUN_0001ce6c(int param_1)

{
  return param_1 + 0x10;
}


// ==== FUN_0001ce94 @ 0001ce94 ====

void FUN_0001ce94(int *param_1,int param_2)

{
  if ((uint)(param_1[1] - (param_1[9] - *param_1 >> 2)) < param_2 + 1U) {
    FUN_0001df28(param_1,param_2,0);
  }
  return;
}


// ==== FUN_0001cef8 @ 0001cef8 ====

undefined4 FUN_0001cef8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013c44(4);
  uVar1 = FUN_0001dd70(param_1,uVar1,0);
  return uVar1;
}


// ==== FUN_0001cf38 @ 0001cf38 ====

int * FUN_0001cf38(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001cfa0 + 0x1cf58;
  FUN_00013fac(param_1);
  *param_1 = *(int *)(iVar1 + DAT_0001cfa4) + 8;
  param_1[3] = param_2;
  FUN_0001e17c(param_1 + 4);
  return param_1;
}


// ==== FUN_0001cfa8 @ 0001cfa8 ====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0001cfa8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18 [3];
  
  local_2c = param_3;
  local_28 = param_2;
  local_24 = param_1;
  iVar2 = FUN_0001e1d4(&local_2c);
  local_20 = iVar2;
  iVar3 = FUN_0001b8ec(local_28);
  uVar6 = local_28;
  if (iVar2 != iVar3) {
    uVar5 = FUN_0001b9b8(local_20);
    iVar3 = FUN_0001a25c(uVar6,param_4,uVar5);
    iVar2 = local_20;
    uVar6 = local_28;
    if (iVar3 != 0) {
      local_1c = local_20;
      piVar7 = (int *)FUN_0001e3ec(local_28);
      uVar6 = local_28;
      if (iVar2 == *piVar7) {
        uVar6 = FUN_0001e3ec(local_28);
        uVar5 = FUN_0001e3ec(local_28);
        FUN_0001dc48(local_24,uVar6,uVar5);
        return local_24;
      }
      puVar4 = (undefined4 *)FUN_0001e414(&local_1c);
      uVar5 = FUN_0001b9b8(*puVar4);
      iVar2 = FUN_0001a25c(uVar6,uVar5,param_4);
      if (iVar2 != 0) {
        iVar2 = FUN_0001b29c(local_1c);
        if (iVar2 != 0) {
          FUN_0001dc48(local_24,&local_20,&local_20);
          return local_24;
        }
        local_18[1] = 0;
        FUN_0001dc48(local_24,local_18 + 1,&local_1c);
        return local_24;
      }
      FUN_0001e234(local_24,local_28,param_4);
      return local_24;
    }
    uVar5 = FUN_0001b9b8(local_20);
    iVar3 = FUN_0001a25c(uVar6,uVar5,param_4);
    iVar2 = local_20;
    if (iVar3 == 0) {
      local_18[1] = 0;
      FUN_0001dc48(local_24,&local_20,local_18 + 1);
      return local_24;
    }
    local_18[0] = local_20;
    piVar7 = (int *)FUN_0001ce6c(local_28);
    uVar6 = local_28;
    if (iVar2 == *piVar7) {
      local_18[1] = 0;
      uVar6 = FUN_0001ce6c(local_28);
      FUN_0001dc48(local_24,local_18 + 1,uVar6);
      return local_24;
    }
    puVar4 = (undefined4 *)FUN_00018fb8(local_18);
    uVar5 = FUN_0001b9b8(*puVar4);
    iVar2 = FUN_0001a25c(uVar6,param_4,uVar5);
    if (iVar2 == 0) {
      FUN_0001e234(local_24,local_28,param_4);
      return local_24;
    }
    iVar2 = FUN_0001b29c(local_20);
    if (iVar2 != 0) {
      FUN_0001dc48(local_24,local_18,local_18);
      return local_24;
    }
    local_18[1] = 0;
    FUN_0001dc48(local_24,local_18 + 1,&local_20);
    return local_24;
  }
  iVar2 = FUN_0001e20c(local_28);
  uVar6 = local_28;
  if (iVar2 != 0) {
    puVar4 = (undefined4 *)FUN_0001ce6c(local_28);
    uVar5 = FUN_0001b9b8(*puVar4);
    iVar2 = FUN_0001a25c(uVar6,uVar5,param_4);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_0001d05c;
    }
  }
  bVar1 = false;
LAB_0001d05c:
  if (bVar1) {
    local_18[1] = 0;
    uVar6 = FUN_0001ce6c(local_28);
    FUN_0001dc48(local_24,local_18 + 1,uVar6);
  }
  else {
    FUN_0001e234(local_24,local_28,param_4);
  }
  return local_24;
}


// ==== FUN_0001d384 @ 0001d384 ====

undefined4 FUN_0001d384(int param_1,int param_2,_Rb_tree_node_base *param_3,undefined4 param_4)

{
  _Rb_tree_node_base *p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_24 [3];
  bool local_21;
  undefined4 local_20;
  _Rb_tree_node_base *local_1c;
  
  if ((param_2 == 0) && (p_Var1 = (_Rb_tree_node_base *)FUN_0001b8ec(param_1), p_Var1 != param_3)) {
    uVar2 = FUN_00013bfc(auStack_24,param_4);
    uVar3 = FUN_0001b9b8(param_3);
    iVar4 = FUN_0001a25c(param_1,uVar2,uVar3);
    if (iVar4 == 0) {
      local_21 = false;
      goto LAB_0001d418;
    }
  }
  local_21 = true;
LAB_0001d418:
  local_1c = (_Rb_tree_node_base *)FUN_0001e450(param_1,param_4);
  std::_Rb_tree_insert_and_rebalance(local_21,local_1c,param_3,(_Rb_tree_node_base *)(param_1 + 4));
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  FUN_0001b9f4(&local_20,local_1c);
  return local_20;
}


// ==== FUN_0001d498 @ 0001d498 ====

void FUN_0001d498(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_000152d4(param_1[3],param_2 + 0xc);
  *piVar1 = param_2;
  piVar1[1] = 0;
  piVar1[2] = *param_1;
  *param_1 = (int)piVar1;
  return;
}


// ==== FUN_0001d508 @ 0001d508 ====

void FUN_0001d508(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0001e500(param_1 + 0x10,1);
  iVar2 = FUN_00013bfc(0x10,uVar1);
  if (iVar2 != 0) {
    FUN_0001e638(iVar2,3);
  }
  return;
}


// ==== FUN_0001d55c @ 0001d55c ====

void FUN_0001d55c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0001e6a0(param_1 + 0x10,param_2);
  uVar2 = FUN_0001e6ec(param_1 + 0x10);
  uVar3 = FUN_0001e71c(param_1);
  FUN_0001e74c(uVar2,uVar1,param_2,uVar3);
  return;
}


// ==== FUN_0001d5c0 @ 0001d5c0 ====

void FUN_0001d5c0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  void *__dest;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 auStack_30 [4];
  int local_2c;
  uint local_28;
  uint local_24;
  size_t local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar7 = DAT_0001d9bc + 0x1d5e4;
  local_1c = *param_2;
  uStack_18 = param_2[1];
  uStack_14 = param_2[2];
  FUN_000153f4(&local_1c);
  local_2c = 0;
  while( true ) {
    while (bVar2 = FUN_000153f4(&local_1c), bVar2 == 0x5c) {
      bVar2 = FUN_000153f4(&local_1c);
      if (*(char *)(*(int *)(iVar7 + DAT_0001d9c0) + (uint)bVar2) == '\0') {
        if (bVar2 != 0x75) {
          *(int *)(param_1 + 0x118) = DAT_0001d9cc + 0x1d848;
          iVar7 = FUN_00015428(param_2);
          *(int *)(param_1 + 0x11c) = iVar7 + -1;
                    /* WARNING: Subroutine does not return */
          longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
        }
        local_28 = FUN_0001e904(param_1,&local_1c);
        if ((0xd7ff < local_28) && (local_28 < 0xdc00)) {
          iVar4 = FUN_000153f4(&local_1c);
          if ((iVar4 == 0x5c) && (iVar4 = FUN_000153f4(&local_1c), iVar4 == 0x75)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            *(int *)(param_1 + 0x118) = DAT_0001d9c4 + 0x1d718;
            iVar7 = FUN_00015428(&local_1c);
            *(int *)(param_1 + 0x11c) = iVar7 + -2;
                    /* WARNING: Subroutine does not return */
            longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
          }
          local_24 = FUN_0001e904(param_1,&local_1c);
          if ((local_24 < 0xdc00) || (0xdfff < local_24)) {
            *(int *)(param_1 + 0x118) = DAT_0001d9c8 + 0x1d788;
            iVar7 = FUN_00015428(&local_1c);
            *(int *)(param_1 + 0x11c) = iVar7 + -2;
                    /* WARNING: Subroutine does not return */
            longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
          }
          local_28 = ((local_28 - 0xd800) * 0x400 | local_24 - 0xdc00) + 0x10000;
        }
        iVar4 = FUN_0001ea68(auStack_30,local_28);
        local_20 = iVar4 - (int)auStack_30;
        __dest = (void *)FUN_0001e7d8(param_1,local_20);
        memcpy(__dest,auStack_30,local_20);
        local_2c = local_2c + local_20;
      }
      else {
        puVar3 = (undefined1 *)FUN_0001e7d8(param_1,1);
        *puVar3 = *(undefined1 *)(*(int *)(iVar7 + DAT_0001d9c0) + (uint)bVar2);
        local_2c = local_2c + 1;
      }
    }
    if (bVar2 == 0x22) {
      puVar3 = (undefined1 *)FUN_0001e7d8(param_1,1);
      *puVar3 = 0;
      local_2c = local_2c + 1;
      uVar5 = FUN_0001ed44(param_1,local_2c);
      FUN_0001ec64(param_3,uVar5,local_2c + -1,1);
      *param_2 = local_1c;
      param_2[1] = uStack_18;
      param_2[2] = uStack_14;
      return;
    }
    if (bVar2 == 0) break;
    if (bVar2 < 0x20) {
      *(int *)(param_1 + 0x118) = DAT_0001d9d4 + 0x1d954;
      iVar7 = FUN_00015428(param_2);
      *(int *)(param_1 + 0x11c) = iVar7 + -1;
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
    }
    pbVar6 = (byte *)FUN_0001e7d8(param_1,1);
    *pbVar6 = bVar2;
    local_2c = local_2c + 1;
  }
  *(int *)(param_1 + 0x118) = DAT_0001d9d0 + 0x1d90c;
  iVar7 = FUN_00015428(param_2);
  *(int *)(param_1 + 0x11c) = iVar7 + -1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
}


// ==== FUN_0001d9d8 @ 0001d9d8 ====

void FUN_0001d9d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_000153cc(param_2);
  if (iVar1 == 0x66) {
    FUN_0001ef14(param_1,param_2,param_3);
    return;
  }
  if (iVar1 < 0x67) {
    if (iVar1 == 0x22) {
      FUN_0001d5c0(param_1,param_2,param_3);
      return;
    }
    if (iVar1 == 0x5b) {
      FUN_0001c2ac(param_1,param_2,param_3);
      return;
    }
  }
  else {
    if (iVar1 == 0x74) {
      FUN_0001ee50(param_1,param_2,param_3);
      return;
    }
    if (iVar1 == 0x7b) {
      FUN_0001c0b0(param_1,param_2,param_3);
      return;
    }
    if (iVar1 == 0x6e) {
      FUN_0001ed8c(param_1,param_2,param_3);
      return;
    }
  }
  FUN_0001eff0(param_1,param_2,param_3);
  return;
}


// ==== FUN_0001dac8 @ 0001dac8 ====

void FUN_0001dac8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0001e500(param_1 + 0x10,1);
  iVar2 = FUN_00013bfc(0x10,uVar1);
  if (iVar2 != 0) {
    FUN_0001e638(iVar2,4);
  }
  return;
}


// ==== FUN_0001db1c @ 0001db1c ====

void FUN_0001db1c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0001a7a0(param_1 + 0x10,param_2);
  uVar2 = FUN_0001e6ec(param_1 + 0x10);
  uVar3 = FUN_0001e71c(param_1);
  FUN_0001fbd0(uVar2,uVar1,param_2,uVar3);
  return;
}


// ==== FUN_0001db80 @ 0001db80 ====

int FUN_0001db80(char *param_1)

{
  char *local_c;
  
  for (local_c = param_1; *local_c != '\0'; local_c = local_c + 1) {
  }
  return (int)local_c - (int)param_1;
}


// ==== FUN_0001dbd4 @ 0001dbd4 ====

undefined4 * FUN_0001dbd4(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  pvVar1 = operator_new(0x10);
  FUN_0001fc5c(pvVar1,param_2);
  *param_1 = pvVar1;
  return param_1;
}


// ==== FUN_0001dc48 @ 0001dc48 ====

undefined4 * FUN_0001dc48(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return param_1;
}


// ==== FUN_0001dc94 @ 0001dc94 ====

int FUN_0001dc94(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [4];
  int local_14;
  
  local_14 = FUN_0001fcbc(param_1);
  FUN_0001cacc(auStack_18,param_1);
  uVar1 = FUN_00018aac(local_14 + 0x10);
  FUN_0001fcf0(auStack_18,uVar1,param_2);
  FUN_00019acc(auStack_18);
  return local_14;
}


// ==== FUN_0001dd44 @ 0001dd44 ====

undefined4 FUN_0001dd44(undefined4 param_1)

{
  FUN_00018aac(param_1);
  return param_1;
}


// ==== FUN_0001dd70 @ 0001dd70 ====

void * FUN_0001dd70(undefined4 param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = FUN_0001fd50(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  pvVar2 = operator_new(param_2 << 2);
  return pvVar2;
}


// ==== FUN_0001ddd4 @ 0001ddd4 ====

void FUN_0001ddd4(undefined4 param_1,undefined4 param_2)

{
  FUN_0001fd74(param_1,param_2);
  return;
}


// ==== FUN_0001ddfc @ 0001ddfc ====

undefined4 FUN_0001ddfc(undefined4 param_1,undefined4 param_2)

{
  FUN_0001fdc4(param_1,param_2);
  return param_1;
}


// ==== FUN_0001de2c @ 0001de2c ====

undefined4 FUN_0001de2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_stack_00000014;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_00019d58(param_1,in_stack_00000014);
  while (iVar3 = FUN_0001fdec(&local_c,&stack0x00000004), iVar3 != 0) {
    uVar1 = FUN_000143f8(param_1);
    uVar1 = FUN_00018aac(uVar1);
    uVar2 = FUN_000143f8(&local_c);
    FUN_0001ff0c(uVar1,uVar2);
    FUN_0001fe24(&local_c);
    FUN_0001fe98(param_1);
  }
  return param_1;
}


// ==== FUN_0001df28 @ 0001df28 ====

void FUN_0001df28(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int local_30;
  int *local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = (param_1[9] - param_1[5] >> 2) + 1;
  local_1c = local_20 + param_2;
  local_30 = param_2;
  local_2c = param_1;
  if ((uint)(local_1c * 2) < (uint)param_1[1]) {
    if (param_3 == '\0') {
      param_2 = 0;
    }
    else {
      param_2 = param_2 << 2;
    }
    local_24 = *param_1 + ((uint)(param_1[1] - local_1c) >> 1) * 4 + param_2;
    if (local_24 < (uint)param_1[5]) {
      FUN_0001ffc0(param_1[5],param_1[9] + 4,local_24);
    }
    else {
      FUN_00020010(param_1[5],param_1[9] + 4,local_24 + local_20 * 4);
    }
  }
  else {
    iVar2 = param_1[1];
    piVar1 = (int *)FUN_0001c9a4(param_1 + 1,&local_30);
    local_18 = iVar2 + *piVar1 + 2;
    local_14 = FUN_0001cb58(local_2c,local_18);
    if (param_3 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = local_30 << 2;
    }
    local_24 = local_14 + ((uint)(local_18 - local_1c) >> 1) * 4 + iVar2;
    FUN_0001ffc0(local_2c[5],local_2c[9] + 4,local_24);
    FUN_0001b688(local_2c,*local_2c,local_2c[1]);
    *local_2c = local_14;
    local_2c[1] = local_18;
  }
  FUN_0001cc4c(local_2c + 2,local_24);
  FUN_0001cc4c(local_2c + 6,local_24 + (local_20 + 0x3fffffff) * 4);
  return;
}


// ==== FUN_0001e17c @ 0001e17c ====

undefined1 * FUN_0001e17c(undefined1 *param_1)

{
  *param_1 = 0;
  return param_1;
}


// ==== FUN_0001e1ac @ 0001e1ac ====

undefined4 FUN_0001e1ac(undefined4 param_1)

{
  FUN_00020108(param_1);
  return param_1;
}


// ==== FUN_0001e1d4 @ 0001e1d4 ====

undefined4 FUN_0001e1d4(undefined4 *param_1)

{
  undefined4 local_c;
  
  FUN_0001b9f4(&local_c,*param_1);
  return local_c;
}


// ==== FUN_0001e20c @ 0001e20c ====

undefined4 FUN_0001e20c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ==== FUN_0001e234 @ 0001e234 ====

undefined4 FUN_0001e234(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_25;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = FUN_00015428(param_2);
  local_14 = FUN_0001b8ec(param_2);
  local_25 = '\x01';
  while (local_18 != 0) {
    local_14 = local_18;
    uVar2 = FUN_0001b9b8(local_18);
    local_25 = FUN_0001a25c(param_2,param_3,uVar2);
    if (local_25 == '\0') {
      local_18 = FUN_0001b29c(local_18);
    }
    else {
      local_18 = FUN_00015428(local_18);
    }
  }
  FUN_0001b9f4(&local_24,local_14);
  if (local_25 != '\0') {
    local_1c = FUN_0001a378(param_2);
    iVar1 = FUN_0001a290(&local_24,&local_1c);
    if (iVar1 != 0) {
      local_20 = local_18;
      local_1c = local_14;
      FUN_0001dc48(param_1,&local_20,&local_1c);
      return param_1;
    }
    FUN_0001e414(&local_24);
  }
  uVar2 = FUN_0001b9b8(local_24);
  iVar1 = FUN_0001a25c(param_2,uVar2,param_3);
  if (iVar1 == 0) {
    local_1c = 0;
    FUN_0001dc48(param_1,&local_24,&local_1c);
  }
  else {
    local_20 = local_18;
    local_1c = local_14;
    FUN_0001dc48(param_1,&local_20,&local_1c);
  }
  return param_1;
}


// ==== FUN_0001e3ec @ 0001e3ec ====

int FUN_0001e3ec(int param_1)

{
  return param_1 + 0xc;
}


// ==== FUN_0001e414 @ 0001e414 ====

undefined4 * FUN_0001e414(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}


// ==== FUN_0001e450 @ 0001e450 ====

int FUN_0001e450(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [4];
  int local_14;
  
  local_14 = FUN_00020150(param_1);
  FUN_0001ca40(auStack_18,param_1);
  uVar1 = FUN_00018aac(local_14 + 0x10);
  FUN_0001fcf0(auStack_18,uVar1,param_2);
  FUN_00019acc(auStack_18);
  return local_14;
}


// ==== FUN_0001e500 @ 0001e500 ====

undefined4 FUN_0001e500(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint local_18;
  
  if ((uint)param_1[4] <= (uint)(param_1[3] + param_2 * 0x10)) {
    iVar4 = param_1[5];
    iVar1 = FUN_0001c3c8(param_1);
    iVar2 = FUN_0001c3c8(param_1);
    uVar5 = iVar2 + param_2 * 0x10;
    local_18 = iVar4 << 1;
    if ((uint)(iVar4 << 1) < uVar5) {
      local_18 = uVar5;
    }
    uVar3 = FUN_00020184(*param_1,param_1[2],param_1[5],local_18);
    param_1[2] = uVar3;
    param_1[5] = local_18;
    param_1[3] = param_1[2] + iVar1;
    param_1[4] = param_1[2] + param_1[5];
  }
  uVar3 = param_1[3];
  param_1[3] = param_1[3] + param_2 * 0x10;
  return uVar3;
}


// ==== FUN_0001e638 @ 0001e638 ====

void * FUN_0001e638(void *param_1,int param_2)

{
  *(undefined4 *)((int)param_1 + 0xc) =
       *(undefined4 *)(param_2 * 4 + *(int *)(DAT_0001e698 + 0x1e658 + DAT_0001e69c));
  memset(param_1,0,0xc);
  return param_1;
}


// ==== FUN_0001e6a0 @ 0001e6a0 ====

undefined4 FUN_0001e6a0(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2 * -0x20;
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== FUN_0001e6ec @ 0001e6ec ====

int FUN_0001e6ec(int param_1)

{
  return *(int *)(param_1 + 0xc) + -0x10;
}


// ==== FUN_0001e71c @ 0001e71c ====

undefined4 FUN_0001e71c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000143f8(param_1 + 0x10);
  return uVar1;
}


// ==== FUN_0001e74c @ 0001e74c ====

void FUN_0001e74c(undefined4 *param_1,void *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  param_1[3] = 3;
  uVar1 = FUN_0001be84(param_4,param_3 << 5);
  *param_1 = uVar1;
  memcpy((void *)*param_1,param_2,param_3 << 5);
  param_1[2] = param_3;
  param_1[1] = param_1[2];
  return;
}


// ==== FUN_0001e7d8 @ 0001e7d8 ====

undefined4 FUN_0001e7d8(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_18;
  
  if ((uint)param_1[4] <= (uint)(param_1[3] + param_2)) {
    iVar4 = param_1[5];
    iVar1 = FUN_0001c3c8(param_1);
    iVar2 = FUN_0001c3c8(param_1);
    local_18 = iVar4 << 1;
    if ((uint)(iVar4 << 1) < (uint)(iVar2 + param_2)) {
      local_18 = iVar2 + param_2;
    }
    uVar3 = FUN_00020184(*param_1,param_1[2],param_1[5],local_18);
    param_1[2] = uVar3;
    param_1[5] = local_18;
    param_1[3] = param_1[2] + iVar1;
    param_1[4] = param_1[2] + param_1[5];
  }
  uVar3 = param_1[3];
  param_1[3] = param_1[3] + param_2;
  return uVar3;
}


// ==== FUN_0001e904 @ 0001e904 ====

int FUN_0001e904(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_14 = *param_2;
  uStack_10 = param_2[1];
  uStack_c = param_2[2];
  local_1c = 0;
  local_18 = 0;
  do {
    if (3 < local_18) {
      *param_2 = local_14;
      param_2[1] = uStack_10;
      param_2[2] = uStack_c;
      return local_1c;
    }
    bVar1 = FUN_000153f4(&local_14);
    local_1c = local_1c * 0x10 + (uint)bVar1;
    if ((bVar1 < 0x30) || (0x39 < bVar1)) {
      if ((bVar1 < 0x41) || (0x46 < bVar1)) {
        if ((bVar1 < 0x61) || (0x66 < bVar1)) {
          *(int *)(param_1 + 0x118) = DAT_0001ea64 + 0x1e9f4;
          iVar2 = FUN_00015428(&local_14);
          *(int *)(param_1 + 0x11c) = iVar2 + -1;
                    /* WARNING: Subroutine does not return */
          longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
        }
        local_1c = local_1c + -0x57;
      }
      else {
        local_1c = local_1c + -0x37;
      }
    }
    else {
      local_1c = local_1c + -0x30;
    }
    local_18 = local_18 + 1;
  } while( true );
}


// ==== FUN_0001ea68 @ 0001ea68 ====

byte * FUN_0001ea68(byte *param_1,uint param_2)

{
  byte *local_c;
  
  if (param_2 < 0x80) {
    local_c = param_1 + 1;
    *param_1 = (byte)param_2;
  }
  else if (param_2 < 0x800) {
    *param_1 = ~((byte)~(byte)(((param_2 >> 6) << 0x1a) >> 0x18) >> 2);
    local_c = param_1 + 2;
    param_1[1] = ~((byte)~(byte)(((param_2 & 0x3f) << 0x19) >> 0x18) >> 1);
  }
  else if (param_2 < 0x10000) {
    *param_1 = ~((byte)~(byte)(((param_2 >> 0xc) << 0x1b) >> 0x18) >> 3);
    param_1[1] = ~((byte)~(byte)(((param_2 >> 6 & 0x3f) << 0x19) >> 0x18) >> 1);
    local_c = param_1 + 3;
    param_1[2] = ~((byte)~(byte)(((param_2 & 0x3f) << 0x19) >> 0x18) >> 1);
  }
  else {
    *param_1 = ~((byte)~(byte)(((param_2 >> 0x12) << 0x1c) >> 0x18) >> 4);
    param_1[1] = ~((byte)~(byte)(((param_2 >> 0xc & 0x3f) << 0x19) >> 0x18) >> 1);
    param_1[2] = ~((byte)~(byte)(((param_2 >> 6 & 0x3f) << 0x19) >> 0x18) >> 1);
    local_c = param_1 + 4;
    param_1[3] = ~((byte)~(byte)(((param_2 & 0x3f) << 0x19) >> 0x18) >> 1);
  }
  return local_c;
}


// ==== FUN_0001ec64 @ 0001ec64 ====

void FUN_0001ec64(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_4 == '\0') {
    uVar1 = FUN_0001e500(param_1 + 0x10,1);
    iVar3 = FUN_00013bfc(0x10,uVar1);
    if (iVar3 != 0) {
      FUN_000202ec(iVar3,param_2,param_3);
    }
  }
  else {
    uVar1 = FUN_0001e71c(param_1);
    uVar2 = FUN_0001e500(param_1 + 0x10,1);
    iVar3 = FUN_00013bfc(0x10,uVar2);
    if (iVar3 != 0) {
      FUN_000202ac(iVar3,param_2,param_3,uVar1);
    }
  }
  return;
}


// ==== FUN_0001ed44 @ 0001ed44 ====

undefined4 FUN_0001ed44(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - param_2;
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== FUN_0001ed8c @ 0001ed8c ====

void FUN_0001ed8c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  
  FUN_000153f4(param_2);
  iVar1 = FUN_000153f4(param_2);
  if (((iVar1 == 0x75) && (iVar1 = FUN_000153f4(param_2), iVar1 == 0x6c)) &&
     (iVar1 = FUN_000153f4(param_2), iVar1 == 0x6c)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_00020340(param_3);
    return;
  }
  *(int *)(param_1 + 0x118) = DAT_0001ee4c + 0x1ee18;
  iVar1 = FUN_00015428(param_2);
  *(int *)(param_1 + 0x11c) = iVar1 + -1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
}


// ==== FUN_0001ee50 @ 0001ee50 ====

void FUN_0001ee50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  FUN_000153f4(param_2);
  iVar1 = FUN_000153f4(param_2);
  if (((iVar1 == 0x72) && (iVar1 = FUN_000153f4(param_2), iVar1 == 0x75)) &&
     (iVar1 = FUN_000153f4(param_2), iVar1 == 0x65)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_00020390(param_3,1);
    return;
  }
  *(int *)(param_1 + 0x118) = DAT_0001ef10 + 0x1eee0;
  uVar2 = FUN_00015428(param_2);
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
}


// ==== FUN_0001ef14 @ 0001ef14 ====

void FUN_0001ef14(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  
  FUN_000153f4(param_2);
  iVar1 = FUN_000153f4(param_2);
  if ((((iVar1 == 0x61) && (iVar1 = FUN_000153f4(param_2), iVar1 == 0x6c)) &&
      (iVar1 = FUN_000153f4(param_2), iVar1 == 0x73)) &&
     (iVar1 = FUN_000153f4(param_2), iVar1 == 0x65)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_00020390(param_3,0);
    return;
  }
  *(int *)(param_1 + 0x118) = DAT_0001efec + 0x1efb8;
  iVar1 = FUN_00015428(param_2);
  *(int *)(param_1 + 0x11c) = iVar1 + -1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
}


// ==== FUN_0001eff0 @ 0001eff0 ====

void FUN_0001eff0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  double dVar12;
  undefined8 uVar13;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint uStack_34;
  double local_30;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_24 = *param_2;
  uStack_20 = param_2[1];
  uStack_1c = param_2[2];
  iVar5 = FUN_000153cc(&local_24);
  bVar9 = iVar5 == 0x2d;
  if (bVar9) {
    FUN_000153f4(&local_24);
  }
  bVar4 = false;
  iVar5 = FUN_000153cc(&local_24);
  if (iVar5 != 0x30) {
    uVar6 = FUN_000153cc(&local_24);
    if ((uVar6 < 0x31) || (uVar6 = FUN_000153cc(&local_24), 0x39 < uVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      *(int *)(param_1 + 0x118) = DAT_0001f998 + 0x1f2d0;
      uVar7 = FUN_00015428(param_2);
      *(undefined4 *)(param_1 + 0x11c) = uVar7;
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
    }
    iVar5 = FUN_000153f4(&local_24);
    local_44 = iVar5 - 0x30;
    if (!bVar9) {
      do {
        uVar6 = FUN_000153cc(&local_24);
        if ((uVar6 < 0x30) || (uVar6 = FUN_000153cc(&local_24), 0x39 < uVar6)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_0001f2f8;
        if (0x19999998 < local_44) {
          if ((local_44 == 0x19999999) && (uVar6 = FUN_000153cc(&local_24), uVar6 < 0x36)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto code_r0x0001f240;
        }
        iVar5 = FUN_000153f4(&local_24);
        local_44 = (local_44 * 10 + iVar5) - 0x30;
      } while( true );
    }
    do {
      uVar6 = FUN_000153cc(&local_24);
      if ((uVar6 < 0x30) || (uVar6 = FUN_000153cc(&local_24), 0x39 < uVar6)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_0001f2f8;
      if (0xccccccb < local_44) {
        if ((local_44 == 0xccccccc) && (uVar6 = FUN_000153cc(&local_24), uVar6 < 0x39)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto code_r0x0001f168;
      }
      iVar5 = FUN_000153f4(&local_24);
      local_44 = (local_44 * 10 + iVar5) - 0x30;
    } while( true );
  }
  local_44 = 0;
  FUN_000153f4(&local_24);
LAB_0001f2f8:
  local_38 = 0;
  uStack_34 = 0;
  bVar1 = false;
  if (bVar4) {
    local_38 = local_44;
    uStack_34 = 0;
    if (!bVar9) {
      do {
        uVar6 = FUN_000153cc(&local_24);
        if ((uVar6 < 0x30) || (uVar6 = FUN_000153cc(&local_24), 0x39 < uVar6)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (!bVar10) goto LAB_0001f574;
        bVar10 = 0x19999998 < uStack_34;
        if (uStack_34 == 0x19999999) {
          bVar10 = 0x99999997 < local_38;
        }
        if (bVar10 && (uStack_34 != 0x19999999 || local_38 != 0x99999998)) {
          if ((uStack_34 == 0x19999999 && local_38 == 0x99999999) &&
             (uVar6 = FUN_000153cc(&local_24), uVar6 < 0x36)) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if (bVar10) goto code_r0x0001f4c4;
        }
        bVar10 = CARRY4(local_38,local_38);
        uVar6 = local_38 * 2;
        bVar11 = CARRY4(local_38 * 4,local_38);
        uVar3 = local_38 * 5;
        uVar2 = local_38 * 10;
        iVar5 = FUN_000153f4(&local_24);
        uVar8 = iVar5 - 0x30;
        local_38 = uVar8 + uVar2;
        uStack_34 = ((int)uVar8 >> 0x1f) +
                    (uStack_34 * 5 + (uint)bVar10 * 2 + (uint)CARRY4(uVar6,uVar6) + (uint)bVar11) *
                    2 + (uint)CARRY4(uVar3,uVar3) + (uint)CARRY4(uVar8,uVar2);
      } while( true );
    }
    do {
      uVar6 = FUN_000153cc(&local_24);
      if ((uVar6 < 0x30) || (uVar6 = FUN_000153cc(&local_24), 0x39 < uVar6)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) break;
      bVar10 = 0xccccccb < uStack_34;
      if (uStack_34 == 0xccccccc) {
        bVar10 = 0xccccccca < local_38;
      }
      if (bVar10 && (uStack_34 != 0xccccccc || local_38 != 0xcccccccb)) {
        if ((uStack_34 == 0xccccccc && local_38 == 0xcccccccc) &&
           (uVar6 = FUN_000153cc(&local_24), uVar6 < 0x39)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto code_r0x0001f3a0;
      }
      bVar10 = CARRY4(local_38,local_38);
      uVar6 = local_38 * 2;
      bVar11 = CARRY4(local_38 * 4,local_38);
      uVar3 = local_38 * 5;
      uVar2 = local_38 * 10;
      iVar5 = FUN_000153f4(&local_24);
      uVar8 = iVar5 - 0x30;
      local_38 = uVar8 + uVar2;
      uStack_34 = ((int)uVar8 >> 0x1f) +
                  (uStack_34 * 5 + (uint)bVar10 * 2 + (uint)CARRY4(uVar6,uVar6) + (uint)bVar11) * 2
                  + (uint)CARRY4(uVar3,uVar3) + (uint)CARRY4(uVar8,uVar2);
    } while( true );
  }
LAB_0001f574:
  local_30 = 0.0;
  if (bVar1) {
    local_30 = (double)__aeabi_ul2d(local_38,uStack_34);
    while( true ) {
      uVar6 = FUN_000153cc(&local_24);
      if ((uVar6 < 0x30) || (uVar6 = FUN_000153cc(&local_24), 0x39 < uVar6)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) break;
      uVar6 = in_fpscr & 0xfffffff | (uint)(local_30 < DAT_0001f990) << 0x1f;
      in_fpscr = uVar6 | (uint)(NAN(local_30) || NAN(DAT_0001f990)) << 0x1c;
      if ((byte)(uVar6 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        *(int *)(param_1 + 0x118) = DAT_0001f99c + 0x1f5c8;
        uVar7 = FUN_00015428(param_2);
        *(undefined4 *)(param_1 + 0x11c) = uVar7;
                    /* WARNING: Subroutine does not return */
        longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
      }
      iVar5 = FUN_000153f4(&local_24);
      dVar12 = (double)VectorSignedToFloat(iVar5 + -0x30,(byte)(in_fpscr >> 0x16) & 3);
      local_30 = local_30 * 10.0 + dVar12;
    }
  }
  local_40 = 0;
  iVar5 = FUN_000153cc(&local_24);
  if (iVar5 == 0x2e) {
    if (!bVar1) {
      if (bVar4) {
        local_30 = (double)__aeabi_ul2d(local_38,uStack_34);
      }
      else {
        local_30 = (double)VectorUnsignedToFloat(local_44,(byte)(in_fpscr >> 0x16) & 3);
      }
      bVar1 = true;
    }
    FUN_000153f4(&local_24);
    uVar6 = FUN_000153cc(&local_24);
    if ((uVar6 < 0x30) || (uVar6 = FUN_000153cc(&local_24), 0x39 < uVar6)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) {
      *(int *)(param_1 + 0x118) = DAT_0001f9a0 + 0x1f77c;
      uVar7 = FUN_00015428(param_2);
      *(undefined4 *)(param_1 + 0x11c) = uVar7;
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
    }
    iVar5 = FUN_000153f4(&local_24);
    dVar12 = (double)VectorSignedToFloat(iVar5 + -0x30,(byte)(in_fpscr >> 0x16) & 3);
    local_30 = local_30 * 10.0 + dVar12;
    local_40 = -1;
    while( true ) {
      uVar6 = FUN_000153cc(&local_24);
      if ((uVar6 < 0x30) || (uVar6 = FUN_000153cc(&local_24), 0x39 < uVar6)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) break;
      if (-0x10 < local_40) {
        iVar5 = FUN_000153cc(&local_24);
        dVar12 = (double)VectorSignedToFloat(iVar5 + -0x30,(byte)(in_fpscr >> 0x16) & 3);
        local_30 = local_30 * 10.0 + dVar12;
        local_40 = local_40 + -1;
      }
      FUN_000153f4(&local_24);
    }
  }
  local_3c = 0;
  uVar13 = FUN_000153cc(&local_24);
  uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
  if ((int)uVar13 != 0x65) {
    uVar13 = FUN_000153cc(&local_24);
    uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if ((int)uVar13 != 0x45) {
      bVar10 = false;
      goto LAB_0001f880;
    }
  }
  bVar10 = true;
LAB_0001f880:
  if (!bVar10) {
LAB_0001fadc:
    if (bVar1) {
      dVar12 = (double)FUN_00015320(local_3c + local_40);
      local_30 = local_30 * dVar12;
      if (bVar9) {
        local_30 = -local_30;
      }
      FUN_000203f0(param_3,(int)((ulonglong)dVar12 >> 0x20),SUB84(local_30,0),
                   (int)((ulonglong)local_30 >> 0x20));
    }
    else if (bVar4) {
      if (bVar9) {
        FUN_00020448(param_3,uVar7,-local_38,-(uStack_34 + (local_38 != 0)));
      }
      else {
        FUN_000204a0(param_3,uVar7,local_38,uStack_34);
      }
    }
    else if (bVar9) {
      FUN_000204f8(param_3,-local_44);
    }
    else {
      FUN_00020550(param_3,local_44);
    }
    *param_2 = local_24;
    param_2[1] = uStack_20;
    param_2[2] = uStack_1c;
    return;
  }
  if (!bVar1) {
    if (bVar4) {
      local_30 = (double)__aeabi_ul2d(local_38,uStack_34);
    }
    else {
      local_30 = (double)VectorUnsignedToFloat(local_44,(byte)(in_fpscr >> 0x16) & 3);
    }
    bVar1 = true;
  }
  FUN_000153f4(&local_24);
  bVar10 = false;
  iVar5 = FUN_000153cc(&local_24);
  if (iVar5 == 0x2b) {
    FUN_000153f4(&local_24);
  }
  else {
    iVar5 = FUN_000153cc(&local_24);
    if (iVar5 == 0x2d) {
      FUN_000153f4(&local_24);
      bVar10 = true;
    }
  }
  uVar6 = FUN_000153cc(&local_24);
  if ((uVar6 < 0x30) || (uVar6 = FUN_000153cc(&local_24), 0x39 < uVar6)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    *(int *)(param_1 + 0x118) = DAT_0001f9a8 + 0x1fa98;
    uVar7 = FUN_00015428(&local_24);
    *(undefined4 *)(param_1 + 0x11c) = uVar7;
                    /* WARNING: Subroutine does not return */
    longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
  }
  local_3c = FUN_000153f4(&local_24);
  local_3c = local_3c + -0x30;
  do {
    uVar13 = FUN_000153cc(&local_24);
    uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if ((uint)uVar13 < 0x30) {
LAB_0001fa78:
      bVar11 = false;
    }
    else {
      uVar13 = FUN_000153cc(&local_24);
      uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if (0x39 < (uint)uVar13) goto LAB_0001fa78;
      bVar11 = true;
    }
    if (!bVar11) {
      if (bVar10) {
        local_3c = -local_3c;
      }
      goto LAB_0001fadc;
    }
    iVar5 = FUN_000153f4(&local_24);
    local_3c = local_3c * 10 + iVar5 + -0x30;
    if (0x134 < local_3c) {
      *(int *)(param_1 + 0x118) = DAT_0001f9a4 + 0x1fa18;
      uVar7 = FUN_00015428(param_2);
      *(undefined4 *)(param_1 + 0x11c) = uVar7;
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(param_1 + 0x18),1);
    }
  } while( true );
code_r0x0001f240:
  bVar4 = true;
  goto LAB_0001f2f8;
code_r0x0001f168:
  bVar4 = true;
  goto LAB_0001f2f8;
code_r0x0001f4c4:
  bVar1 = true;
  goto LAB_0001f574;
code_r0x0001f3a0:
  bVar1 = true;
  goto LAB_0001f574;
}


// ==== FUN_0001fbd0 @ 0001fbd0 ====

void FUN_0001fbd0(undefined4 *param_1,void *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  param_1[3] = 4;
  uVar1 = FUN_0001be84(param_4,param_3 << 4);
  *param_1 = uVar1;
  memcpy((void *)*param_1,param_2,param_3 << 4);
  param_1[2] = param_3;
  param_1[1] = param_1[2];
  return;
}


// ==== FUN_0001fc5c @ 0001fc5c ====

int * FUN_0001fc5c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001fcb4 + 0x1fc7c;
  FUN_00013fac(param_1);
  *param_1 = *(int *)(iVar1 + DAT_0001fcb8) + 8;
  param_1[3] = param_2;
  return param_1;
}


// ==== FUN_0001fcbc @ 0001fcbc ====

undefined4 FUN_0001fcbc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000205a8(param_1,1,0);
  return uVar1;
}


// ==== FUN_0001fcf0 @ 0001fcf0 ====

void FUN_0001fcf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00013bfc(0xc,param_2);
  if (iVar1 != 0) {
    FUN_00018e70(iVar1,param_3);
  }
  return;
}


// ==== FUN_0001fd50 @ 0001fd50 ====

undefined4 FUN_0001fd50(void)

{
  return 0x3fffffff;
}


// ==== FUN_0001fd74 @ 0001fd74 ====

void FUN_0001fd74(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  local_c = param_1;
  while( true ) {
    if (local_c == param_2) break;
    uVar1 = FUN_00018aac(local_c);
    FUN_00020610(uVar1);
    local_c = local_c + 4;
  }
  return;
}


// ==== FUN_0001fdc4 @ 0001fdc4 ====

undefined4 FUN_0001fdc4(undefined4 param_1)

{
  return param_1;
}


// ==== FUN_0001fdec @ 0001fdec ====

byte FUN_0001fdec(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_0001a290(param_1,param_2);
  return bVar1 ^ 1;
}


// ==== FUN_0001fe24 @ 0001fe24 ====

int * FUN_0001fe24(int *param_1)

{
  *param_1 = *param_1 + 4;
  if (*param_1 == param_1[2]) {
    FUN_0001cc4c(param_1,param_1[3] + 4);
    *param_1 = param_1[1];
  }
  return param_1;
}


// ==== FUN_0001fe98 @ 0001fe98 ====

int * FUN_0001fe98(int *param_1)

{
  *param_1 = *param_1 + 4;
  if (*param_1 == param_1[2]) {
    FUN_0001cc4c(param_1,param_1[3] + 4);
    *param_1 = param_1[1];
  }
  return param_1;
}


// ==== FUN_0001ff0c @ 0001ff0c ====

void FUN_0001ff0c(undefined4 param_1,string *param_2)

{
  string *this;
  
  this = (string *)FUN_00013bfc(4,param_1);
  if (this != (string *)0x0) {
    std::string::string(this,param_2);
  }
  return;
}


// ==== FUN_0001ff68 @ 0001ff68 ====

void FUN_0001ff68(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  FUN_00019d58(auStack_28,param_1);
  FUN_00019d58(auStack_18,param_2);
  FUN_00020630(auStack_28,auStack_18);
  return;
}


// ==== FUN_0001ffc0 @ 0001ffc0 ====

undefined4 FUN_0001ffc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00020690(param_1);
  uVar2 = FUN_00020690(param_2);
  uVar1 = FUN_000206b8(uVar1,uVar2,param_3);
  return uVar1;
}


// ==== FUN_00020010 @ 00020010 ====

undefined4 FUN_00020010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00020690(param_1);
  uVar2 = FUN_00020690(param_2);
  uVar1 = FUN_00020714(uVar1,uVar2,param_3);
  return uVar1;
}


// ==== FUN_00020060 @ 00020060 ====

undefined4 FUN_00020060(undefined4 param_1)

{
  FUN_00020798(param_1);
  return param_1;
}


// ==== FUN_0002008c @ 0002008c ====

int FUN_0002008c(int param_1)

{
  FUN_00020060(param_1 + 0x10);
  std::string::~string((string *)(param_1 + 0xc));
  std::string::~string((string *)(param_1 + 8));
  return param_1;
}


// ==== FUN_00020108 @ 00020108 ====

void FUN_00020108(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_0002008c(param_1 + 8);
    *param_1 = '\0';
  }
  return;
}


// ==== FUN_00020150 @ 00020150 ====

undefined4 FUN_00020150(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000205a8(param_1,1,0);
  return uVar1;
}


// ==== FUN_00020184 @ 00020184 ====

void * FUN_00020184(int *param_1,void *param_2,uint param_3,uint param_4)

{
  void *__dest;
  uint uVar1;
  
  if (param_2 == (void *)0x0) {
    param_2 = (void *)FUN_0001be84(param_1,param_4);
  }
  else if (param_3 < param_4) {
    if (((void *)(*param_1 + (*(int *)(*param_1 + 4) - param_3) + 0xc) == param_2) &&
       (uVar1 = (param_4 - param_3) + 3 & 0xfffffffc,
       *(int *)(*param_1 + 4) + uVar1 <= *(uint *)*param_1)) {
      *(uint *)(*param_1 + 4) = *(int *)(*param_1 + 4) + uVar1;
    }
    else {
      __dest = (void *)FUN_0001be84(param_1,param_4);
      param_2 = memcpy(__dest,param_2,param_3);
    }
  }
  return param_2;
}


// ==== FUN_000202ac @ 000202ac ====

undefined4 FUN_000202ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000207f0(param_1,param_2,param_3,param_4);
  return param_1;
}


// ==== FUN_000202ec @ 000202ec ====

undefined4 * FUN_000202ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = 0x100005;
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}


// ==== FUN_00020340 @ 00020340 ====

void FUN_00020340(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0001e500(param_1 + 0x10,1);
  iVar2 = FUN_00013bfc(0x10,uVar1);
  if (iVar2 != 0) {
    FUN_0001a3b0(iVar2);
  }
  return;
}


// ==== FUN_00020390 @ 00020390 ====

void FUN_00020390(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0001e500(param_1 + 0x10,1);
  iVar2 = FUN_00013bfc(0x10,uVar1);
  if (iVar2 != 0) {
    FUN_00020880(iVar2,param_2);
  }
  return;
}


// ==== FUN_000203f0 @ 000203f0 ====

void FUN_000203f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0001e500(param_1 + 0x10,1);
  uVar2 = FUN_00013bfc(0x10,uVar1);
  if ((int)uVar2 != 0) {
    FUN_000208cc((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4);
  }
  return;
}


// ==== FUN_00020448 @ 00020448 ====

void FUN_00020448(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0001e500(param_1 + 0x10,1);
  uVar2 = FUN_00013bfc(0x10,uVar1);
  if ((int)uVar2 != 0) {
    FUN_00020914((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4);
  }
  return;
}


// ==== FUN_000204a0 @ 000204a0 ====

void FUN_000204a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0001e500(param_1 + 0x10,1);
  uVar2 = FUN_00013bfc(0x10,uVar1);
  if ((int)uVar2 != 0) {
    FUN_00020a14((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4);
  }
  return;
}


// ==== FUN_000204f8 @ 000204f8 ====

void FUN_000204f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0001e500(param_1 + 0x10,1);
  iVar2 = FUN_00013bfc(0x10,uVar1);
  if (iVar2 != 0) {
    FUN_00020ae0(iVar2,param_2);
  }
  return;
}


// ==== FUN_00020550 @ 00020550 ====

void FUN_00020550(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0001e500(param_1 + 0x10,1);
  iVar2 = FUN_00013bfc(0x10,uVar1);
  if (iVar2 != 0) {
    FUN_00020b50(iVar2,param_2);
  }
  return;
}


// ==== FUN_000205a8 @ 000205a8 ====

void * FUN_000205a8(undefined4 param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00020bc0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  pvVar2 = operator_new(param_2 * 0x1c);
  return pvVar2;
}


// ==== FUN_00020610 @ 00020610 ====

void FUN_00020610(string *param_1)

{
  std::string::~string(param_1);
  return;
}


// ==== FUN_00020630 @ 00020630 ====

void FUN_00020630(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  while (iVar2 = FUN_0001fdec(param_1,param_2), iVar2 != 0) {
    uVar1 = FUN_000143f8(param_1);
    uVar1 = FUN_00018aac(uVar1);
    FUN_00020610(uVar1);
    FUN_0001fe98(param_1);
  }
  return;
}


// ==== FUN_00020690 @ 00020690 ====

undefined4 FUN_00020690(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018aac(param_1);
  return uVar1;
}


// ==== FUN_000206b8 @ 000206b8 ====

undefined4 FUN_000206b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00020690(param_1);
  uVar2 = FUN_00020690(param_2);
  uVar3 = FUN_00020690(param_3);
  uVar1 = FUN_00020be8(uVar1,uVar2,uVar3);
  return uVar1;
}


// ==== FUN_00020714 @ 00020714 ====

undefined4 FUN_00020714(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00020690(param_1);
  uVar2 = FUN_00020690(param_2);
  uVar3 = FUN_00020690(param_3);
  uVar1 = FUN_00020c28(uVar1,uVar2,uVar3);
  return uVar1;
}


// ==== FUN_00020770 @ 00020770 ====

undefined4 FUN_00020770(undefined4 param_1)

{
  FUN_00019acc(param_1);
  return param_1;
}


// ==== FUN_00020798 @ 00020798 ====

undefined4 FUN_00020798(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015428(param_1);
  FUN_00020c68(param_1,uVar1);
  FUN_00020770(param_1);
  return param_1;
}


// ==== FUN_000207f0 @ 000207f0 ====

void FUN_000207f0(int *param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  int iVar1;
  
  param_1[3] = 0x300005;
  iVar1 = FUN_0001be84(param_4,param_3 + 1);
  *param_1 = iVar1;
  param_1[1] = param_3;
  memcpy((void *)*param_1,param_2,param_3);
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}


// ==== FUN_00020880 @ 00020880 ====

int FUN_00020880(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = 0x101;
  }
  else {
    uVar1 = 0x102;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return param_1;
}


// ==== FUN_000208cc @ 000208cc ====

undefined4 *
FUN_000208cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[3] = 0x4206;
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}


// ==== FUN_00020914 @ 00020914 ====

uint * FUN_00020914(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  param_1[3] = 0x1206;
  *param_1 = param_3;
  param_1[1] = param_4;
  if ((int)param_4 < 0) {
    if ((int)(param_4 - ((param_3 < 0x80000000) - 1)) < 0 ==
        (SBORROW4(param_4,-1) != SBORROW4(param_4 + 1,(uint)(param_3 < 0x80000000)))) {
      param_1[3] = param_1[3] | 0x400;
    }
  }
  else {
    param_1[3] = param_1[3] | 0x2206;
    if (param_4 == 0) {
      param_1[3] = param_1[3] | 0x800;
    }
    if ((param_3 & 0x80000000) == 0 && param_4 == 0) {
      param_1[3] = param_1[3] | 0x400;
    }
  }
  return param_1;
}


// ==== FUN_00020a14 @ 00020a14 ====

uint * FUN_00020a14(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  param_1[3] = 0x2206;
  *param_1 = param_3;
  param_1[1] = param_4;
  if (-1 < (int)param_4) {
    param_1[3] = param_1[3] | 0x1000;
  }
  if (param_4 == 0) {
    param_1[3] = param_1[3] | 0x800;
  }
  if ((param_3 & 0x80000000) == 0 && param_4 == 0) {
    param_1[3] = param_1[3] | 0x400;
  }
  return param_1;
}


// ==== FUN_00020ae0 @ 00020ae0 ====

int * FUN_00020ae0(int *param_1,int param_2)

{
  param_1[3] = 0x1606;
  *param_1 = param_2;
  param_1[1] = param_2 >> 0x1f;
  if (-1 < param_2) {
    param_1[3] = param_1[3] | 0x2800;
  }
  return param_1;
}


// ==== FUN_00020b50 @ 00020b50 ====

int * FUN_00020b50(int *param_1,int param_2)

{
  param_1[3] = 0x3a06;
  *param_1 = param_2;
  param_1[1] = 0;
  if (-1 < param_2) {
    param_1[3] = param_1[3] | 0x1400;
  }
  return param_1;
}


// ==== FUN_00020bc0 @ 00020bc0 ====

undefined4 FUN_00020bc0(void)

{
  return 0x9249249;
}


// ==== FUN_00020be8 @ 00020be8 ====

undefined4 FUN_00020be8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020ccc(param_1,param_2,param_3);
  return uVar1;
}


// ==== FUN_00020c28 @ 00020c28 ====

undefined4 FUN_00020c28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00020d38(param_1,param_2,param_3);
  return uVar1;
}


// ==== FUN_00020c68 @ 00020c68 ====

void FUN_00020c68(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18 = param_2;
  while (local_18 != 0) {
    uVar1 = FUN_0001b29c(local_18);
    FUN_00020c68(param_1,uVar1);
    iVar2 = FUN_00015428(local_18);
    FUN_00020dbc(param_1,local_18);
    local_18 = iVar2;
  }
  return;
}


// ==== FUN_00020ccc @ 00020ccc ====

void * FUN_00020ccc(void *param_1,int param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  if (iVar1 != 0) {
    memmove(param_3,param_1,iVar1 << 2);
  }
  return (void *)((int)param_3 + iVar1 * 4);
}


// ==== FUN_00020d38 @ 00020d38 ====

int FUN_00020d38(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  if (iVar1 != 0) {
    memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 << 2);
  }
  return param_3 + iVar1 * -4;
}


// ==== FUN_00020dbc @ 00020dbc ====

void FUN_00020dbc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_c [4];
  
  FUN_00020e38(auStack_c,param_1);
  uVar1 = FUN_00018aac(param_2 + 0x10);
  FUN_00020e9c(auStack_c,uVar1);
  FUN_00019acc(auStack_c);
  FUN_0001ca9c(param_1,param_2);
  return;
}


// ==== FUN_00020e38 @ 00020e38 ====

undefined4 FUN_00020e38(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018aac(param_2);
  FUN_0001dd44(param_1,uVar1);
  return param_1;
}


// ==== FUN_00020e70 @ 00020e70 ====

string * FUN_00020e70(string *param_1)

{
  std::string::~string(param_1);
  return param_1;
}


// ==== FUN_00020e9c @ 00020e9c ====

void FUN_00020e9c(undefined4 param_1,undefined4 param_2)

{
  FUN_00020e70(param_2);
  return;
}


// ==== FUN_00020ec0 @ 00020ec0 ====

/* WARNING: Removing unreachable block (ram,0x00020f04) */

int * FUN_00020ec0(int *param_1)

{
  *param_1 = *(int *)(DAT_00020f1c + 0x20edc + DAT_00020f20) + 8;
  FUN_0001400c(param_1);
  return param_1;
}


// ==== FUN_00020f24 @ 00020f24 ====

void * FUN_00020f24(void *param_1)

{
  FUN_00020ec0(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00020f54 @ 00020f54 ====

/* WARNING: Removing unreachable block (ram,0x00020fa8) */

int * FUN_00020f54(int *param_1)

{
  *param_1 = *(int *)(DAT_00020fd4 + 0x20f70 + DAT_00020fd8) + 8;
  FUN_0001e1ac(param_1 + 4);
  FUN_0001400c(param_1);
  return param_1;
}


// ==== FUN_00020fdc @ 00020fdc ====

void * FUN_00020fdc(void *param_1)

{
  FUN_00020f54(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_0002100c @ 0002100c ====

void FUN_0002100c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00021084 + 0x2102c;
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)(DAT_00021088 + 0x21050));
    __aeabi_atexit(DAT_0002108c + 0x21060,*(undefined4 *)(iVar1 + DAT_00021090),
                   DAT_00021094 + 0x21078);
  }
  return;
}


// ==== FUN_00021098 @ 00021098 ====

void FUN_00021098(int param_1)

{
  FUN_00014094(*(undefined4 *)(param_1 + 0xc));
  return;
}


// ==== FUN_000210e8 @ 000210e8 ====

undefined4 FUN_000210e8(void)

{
  return 0;
}


// ==== FUN_0002110c @ 0002110c ====

void FUN_0002110c(int param_1)

{
  FUN_00021590(param_1 + 0x10,*(undefined4 *)(param_1 + 0xc));
  return;
}


// ==== FUN_00021140 @ 00021140 ====

int FUN_00021140(int param_1,type_info *param_2)

{
  int iVar1;
  
  iVar1 = std::type_info::operator==(param_2,*(type_info **)(DAT_00021198 + 0x21160 + DAT_0002119c))
  ;
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x10;
  }
  return param_1;
}


// ==== FUN_000211a0 @ 000211a0 ====

int FUN_000211a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x2c);
  FUN_000215b4(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_00021210 @ 00021210 ====

undefined4 FUN_00021210(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000211a0((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_00021250 @ 00021250 ====

void FUN_00021250(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_000212ac + 0x2126c;
  uVar1 = __cxa_allocate_exception(0x2c);
  FUN_0001810c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_000212b0),DAT_000212b4 + 0x2129c);
}


// ==== FUN_000212b8 @ 000212b8 ====

void FUN_000212b8(int *param_1)

{
  FUN_00021250((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_000212f0 @ 000212f0 ====

int FUN_000212f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x2c);
  FUN_00021698(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_00021360 @ 00021360 ====

undefined4 FUN_00021360(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000212f0((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_000213a0 @ 000213a0 ====

void FUN_000213a0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_000213fc + 0x213bc;
  uVar1 = __cxa_allocate_exception(0x2c);
  FUN_00017d28(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00021400),DAT_00021404 + 0x213ec);
}


// ==== FUN_00021408 @ 00021408 ====

void FUN_00021408(int *param_1)

{
  FUN_000213a0((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_00021440 @ 00021440 ====

int FUN_00021440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x2c);
  FUN_0002177c(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_000214b0 @ 000214b0 ====

undefined4 FUN_000214b0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021440((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_000214f0 @ 000214f0 ====

void FUN_000214f0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0002154c + 0x2150c;
  uVar1 = __cxa_allocate_exception(0x2c);
  FUN_00017ab8(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00021550),DAT_00021554 + 0x2153c);
}


// ==== FUN_00021558 @ 00021558 ====

void FUN_00021558(int *param_1)

{
  FUN_000214f0((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_00021590 @ 00021590 ====

void FUN_00021590(undefined4 param_1)

{
  FUN_00020108(param_1);
  return;
}


// ==== FUN_000215b4 @ 000215b4 ====

int * FUN_000215b4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00021690 + 0x215d8;
  FUN_0001ade0(param_1 + 10);
  FUN_0001806c(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00021694) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00021694) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_00021694) + 0x44;
  FUN_00013e0c(param_1 + 5,param_2 + 0x14);
  return param_1;
}


// ==== FUN_00021698 @ 00021698 ====

int * FUN_00021698(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00021774 + 0x216bc;
  FUN_0001ade0(param_1 + 10);
  FUN_00017c88(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00021778) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00021778) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_00021778) + 0x44;
  FUN_00013e0c(param_1 + 5,param_2 + 0x14);
  return param_1;
}


// ==== FUN_0002177c @ 0002177c ====

int * FUN_0002177c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00021858 + 0x217a0;
  FUN_0001ade0(param_1 + 10);
  FUN_00017a18(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_0002185c) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_0002185c) + 0x28;
  param_1[10] = *(int *)(iVar1 + DAT_0002185c) + 0x44;
  FUN_00013e0c(param_1 + 5,param_2 + 0x14);
  return param_1;
}


// ==== FUN_00021878 @ 00021878 ====

undefined8 * FUN_00021878(undefined8 *param_1,string *param_2)

{
  allocator aaStack_14 [8];
  
  *param_1 = 0;
  std::allocator<char>::allocator();
  std::string::string((string *)(param_1 + 1),(char *)(DAT_00021944 + 0x218c0),aaStack_14);
  std::allocator<char>::~allocator((allocator<char> *)aaStack_14);
  std::string::string((string *)((int)param_1 + 0xc),param_2);
  FUN_00021a70(param_1 + 2);
  return param_1;
}


// ==== FUN_00021948 @ 00021948 ====

undefined8 FUN_00021948(undefined8 *param_1)

{
  return *param_1;
}


// ==== FUN_00021974 @ 00021974 ====

void FUN_00021974(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 string *param_5)

{
  *param_1 = param_3;
  param_1[1] = param_4;
  std::string::operator=((string *)(param_1 + 2),param_5);
  FUN_00021a9c(param_1 + 4);
  return;
}


// ==== FUN_000219c0 @ 000219c0 ====

void FUN_000219c0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_00021ac0(param_1 + 0x10,param_2);
  *puVar1 = 1;
  return;
}


// ==== FUN_000219fc @ 000219fc ====

undefined4 FUN_000219fc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = FUN_00021c10(param_1 + 0x10,param_2);
  local_c = FUN_00021c44(param_1 + 0x10);
  uVar1 = FUN_000185a8(&local_10,&local_c);
  return uVar1;
}


// ==== FUN_00021a70 @ 00021a70 ====

undefined4 FUN_00021a70(undefined4 param_1)

{
  FUN_00021c70(param_1);
  return param_1;
}


// ==== FUN_00021a9c @ 00021a9c ====

void FUN_00021a9c(undefined4 param_1)

{
  FUN_00021c9c(param_1);
  return;
}


// ==== FUN_00021ac0 @ 00021ac0 ====

int FUN_00021ac0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [3];
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [8];
  
  local_20 = FUN_00021d24(param_1,param_2);
  local_1c = FUN_00021d58(param_1);
  iVar2 = FUN_0001a290(&local_20,&local_1c);
  if (iVar2 == 0) {
    FUN_0001a204(param_1);
    uVar3 = FUN_0001a230(&local_20);
    iVar2 = FUN_0001a25c(auStack_24,param_2,uVar3);
    if (iVar2 == 0) {
      bVar1 = false;
      goto LAB_00021b6c;
    }
  }
  bVar1 = true;
LAB_00021b6c:
  if (bVar1) {
    local_21 = 0;
    FUN_00021d84(auStack_18,param_2,&local_21);
    local_20 = FUN_00021dcc(param_1,local_20,auStack_18);
    FUN_00020e70(auStack_18);
  }
  iVar2 = FUN_0001a230(&local_20);
  return iVar2 + 4;
}


// ==== FUN_00021c10 @ 00021c10 ====

undefined4 FUN_00021c10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021e24(param_1,param_2);
  return uVar1;
}


// ==== FUN_00021c44 @ 00021c44 ====

undefined4 FUN_00021c44(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019ff8(param_1);
  return uVar1;
}


// ==== FUN_00021c70 @ 00021c70 ====

undefined4 FUN_00021c70(undefined4 param_1)

{
  FUN_00021f0c(param_1);
  return param_1;
}


// ==== FUN_00021c9c @ 00021c9c ====

void FUN_00021c9c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00015428(param_1);
  FUN_00020c68(param_1,uVar1);
  puVar2 = (undefined4 *)FUN_0001e3ec(param_1);
  uVar1 = FUN_0001b8ec(param_1);
  *puVar2 = uVar1;
  puVar2 = (undefined4 *)FUN_0001a130(param_1);
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_0001ce6c(param_1);
  uVar1 = FUN_0001b8ec(param_1);
  *puVar2 = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// ==== FUN_00021d24 @ 00021d24 ====

undefined4 FUN_00021d24(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021f78(param_1,param_2);
  return uVar1;
}


// ==== FUN_00021d58 @ 00021d58 ====

undefined4 FUN_00021d58(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019ff8(param_1);
  return uVar1;
}


// ==== FUN_00021d84 @ 00021d84 ====

string * FUN_00021d84(string *param_1,string *param_2,string *param_3)

{
  std::string::string(param_1,param_2);
  param_1[4] = *param_3;
  return param_1;
}


// ==== FUN_00021dcc @ 00021dcc ====

undefined4 FUN_00021dcc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14 [2];
  
  local_20 = param_2;
  local_1c = param_1;
  FUN_0001bcb8(local_14,&local_20);
  uVar1 = FUN_00021fc8(param_1,local_14[0],param_3);
  return uVar1;
}


// ==== FUN_00021e24 @ 00021e24 ====

undefined4 FUN_00021e24(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = FUN_00015428(param_1);
  uVar2 = FUN_0001b8ec(param_1);
  local_18 = FUN_00022068(param_1,uVar1,uVar2,param_2);
  local_14 = FUN_00019ff8(param_1);
  iVar3 = FUN_0001a290(&local_18,&local_14);
  if (iVar3 == 0) {
    uVar1 = FUN_0001b9b8(local_18);
    iVar3 = FUN_0001a25c(param_1,param_2,uVar1);
    if (iVar3 == 0) {
      return local_18;
    }
  }
  uVar1 = FUN_00019ff8(param_1);
  return uVar1;
}


// ==== FUN_00021f0c @ 00021f0c ====

int FUN_00021f0c(int param_1)

{
  FUN_00019acc(param_1);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0001c9ec(param_1);
  return param_1;
}


// ==== FUN_00021f78 @ 00021f78 ====

undefined4 FUN_00021f78(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00015428(param_1);
  uVar2 = FUN_0001b8ec(param_1);
  uVar1 = FUN_00022068(param_1,uVar1,uVar2,param_2);
  return uVar1;
}


// ==== FUN_00021fc8 @ 00021fc8 ====

undefined4 FUN_00021fc8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  uVar1 = FUN_00013bfc(&local_14,param_3);
  FUN_0002210c(&local_10,param_1,param_2,uVar1);
  if (local_c == 0) {
    FUN_0001b9f4(&local_14,local_10);
  }
  else {
    local_14 = FUN_000224e8(param_1,local_10,local_c,param_3);
  }
  return local_14;
}


// ==== FUN_00022068 @ 00022068 ====

undefined4 FUN_00022068(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int local_24;
  int local_20;
  undefined4 local_14 [2];
  
  local_24 = param_3;
  local_20 = param_2;
  while (local_20 != 0) {
    uVar2 = FUN_0001b9b8(local_20);
    cVar1 = FUN_0001a25c(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_20 = FUN_0001b29c(local_20);
    }
    else {
      local_24 = local_20;
      local_20 = FUN_00015428(local_20);
    }
  }
  FUN_0001b9f4(local_14,local_24);
  return local_14[0];
}


// ==== FUN_0002210c @ 0002210c ====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0002210c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18 [3];
  
  local_2c = param_3;
  local_28 = param_2;
  local_24 = param_1;
  iVar2 = FUN_0001e1d4(&local_2c);
  local_20 = iVar2;
  iVar3 = FUN_0001b8ec(local_28);
  uVar6 = local_28;
  if (iVar2 != iVar3) {
    uVar5 = FUN_0001b9b8(local_20);
    iVar3 = FUN_0001a25c(uVar6,param_4,uVar5);
    iVar2 = local_20;
    uVar6 = local_28;
    if (iVar3 != 0) {
      local_1c = local_20;
      piVar7 = (int *)FUN_0001e3ec(local_28);
      uVar6 = local_28;
      if (iVar2 == *piVar7) {
        uVar6 = FUN_0001e3ec(local_28);
        uVar5 = FUN_0001e3ec(local_28);
        FUN_0001dc48(local_24,uVar6,uVar5);
        return local_24;
      }
      puVar4 = (undefined4 *)FUN_0001e414(&local_1c);
      uVar5 = FUN_0001b9b8(*puVar4);
      iVar2 = FUN_0001a25c(uVar6,uVar5,param_4);
      if (iVar2 != 0) {
        iVar2 = FUN_0001b29c(local_1c);
        if (iVar2 != 0) {
          FUN_0001dc48(local_24,&local_20,&local_20);
          return local_24;
        }
        local_18[1] = 0;
        FUN_0001dc48(local_24,local_18 + 1,&local_1c);
        return local_24;
      }
      FUN_0001e234(local_24,local_28,param_4);
      return local_24;
    }
    uVar5 = FUN_0001b9b8(local_20);
    iVar3 = FUN_0001a25c(uVar6,uVar5,param_4);
    iVar2 = local_20;
    if (iVar3 == 0) {
      local_18[1] = 0;
      FUN_0001dc48(local_24,&local_20,local_18 + 1);
      return local_24;
    }
    local_18[0] = local_20;
    piVar7 = (int *)FUN_0001ce6c(local_28);
    uVar6 = local_28;
    if (iVar2 == *piVar7) {
      local_18[1] = 0;
      uVar6 = FUN_0001ce6c(local_28);
      FUN_0001dc48(local_24,local_18 + 1,uVar6);
      return local_24;
    }
    puVar4 = (undefined4 *)FUN_00018fb8(local_18);
    uVar5 = FUN_0001b9b8(*puVar4);
    iVar2 = FUN_0001a25c(uVar6,param_4,uVar5);
    if (iVar2 == 0) {
      FUN_0001e234(local_24,local_28,param_4);
      return local_24;
    }
    iVar2 = FUN_0001b29c(local_20);
    if (iVar2 != 0) {
      FUN_0001dc48(local_24,local_18,local_18);
      return local_24;
    }
    local_18[1] = 0;
    FUN_0001dc48(local_24,local_18 + 1,&local_20);
    return local_24;
  }
  iVar2 = FUN_0001e20c(local_28);
  uVar6 = local_28;
  if (iVar2 != 0) {
    puVar4 = (undefined4 *)FUN_0001ce6c(local_28);
    uVar5 = FUN_0001b9b8(*puVar4);
    iVar2 = FUN_0001a25c(uVar6,uVar5,param_4);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_000221c0;
    }
  }
  bVar1 = false;
LAB_000221c0:
  if (bVar1) {
    local_18[1] = 0;
    uVar6 = FUN_0001ce6c(local_28);
    FUN_0001dc48(local_24,local_18 + 1,uVar6);
  }
  else {
    FUN_0001e234(local_24,local_28,param_4);
  }
  return local_24;
}


// ==== FUN_000224e8 @ 000224e8 ====

undefined4 FUN_000224e8(int param_1,int param_2,_Rb_tree_node_base *param_3,undefined4 param_4)

{
  _Rb_tree_node_base *p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_24 [3];
  bool local_21;
  undefined4 local_20;
  _Rb_tree_node_base *local_1c;
  
  if ((param_2 == 0) && (p_Var1 = (_Rb_tree_node_base *)FUN_0001b8ec(param_1), p_Var1 != param_3)) {
    uVar2 = FUN_00013bfc(auStack_24,param_4);
    uVar3 = FUN_0001b9b8(param_3);
    iVar4 = FUN_0001a25c(param_1,uVar2,uVar3);
    if (iVar4 == 0) {
      local_21 = false;
      goto LAB_0002257c;
    }
  }
  local_21 = true;
LAB_0002257c:
  local_1c = (_Rb_tree_node_base *)FUN_000225fc(param_1,param_4);
  std::_Rb_tree_insert_and_rebalance(local_21,local_1c,param_3,(_Rb_tree_node_base *)(param_1 + 4));
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  FUN_0001b9f4(&local_20,local_1c);
  return local_20;
}


// ==== FUN_000225fc @ 000225fc ====

int FUN_000225fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [4];
  int local_14;
  
  local_14 = FUN_000226ac(param_1);
  FUN_00020e38(auStack_18,param_1);
  uVar1 = FUN_00018aac(local_14 + 0x10);
  FUN_00022728(auStack_18,uVar1,param_2);
  FUN_00019acc(auStack_18);
  return local_14;
}


// ==== FUN_000226ac @ 000226ac ====

undefined4 FUN_000226ac(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022788(param_1,1,0);
  return uVar1;
}


// ==== FUN_000226e0 @ 000226e0 ====

string * FUN_000226e0(string *param_1,string *param_2)

{
  std::string::string(param_1,param_2);
  param_1[4] = param_2[4];
  return param_1;
}


// ==== FUN_00022728 @ 00022728 ====

void FUN_00022728(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00013bfc(8,param_2);
  if (iVar1 != 0) {
    FUN_000226e0(iVar1,param_3);
  }
  return;
}


// ==== FUN_00022788 @ 00022788 ====

void * FUN_00022788(undefined4 param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = FUN_000227f0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  pvVar2 = operator_new(param_2 * 0x18);
  return pvVar2;
}


// ==== FUN_000227f0 @ 000227f0 ====

undefined4 FUN_000227f0(void)

{
  return 0xaaaaaaa;
}


// ==== FUN_00022818 @ 00022818 ====

void FUN_00022818(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00022890 + 0x22838;
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)(DAT_00022894 + 0x2285c));
    __aeabi_atexit(DAT_00022898 + 0x2286c,*(undefined4 *)(iVar1 + DAT_0002289c),
                   DAT_000228a0 + 0x22884);
  }
  return;
}


// ==== FUN_000228bc @ 000228bc ====

int FUN_000228bc(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_2,param_3);
  return iVar1;
}


// ==== FUN_000228f4 @ 000228f4 ====

string * FUN_000228f4(string *param_1,string *param_2,string *param_3,undefined4 param_4,
                     string param_5)

{
  std::string::string(param_1,param_2);
  std::string::string(param_1 + 4,param_3);
  FUN_00014334(param_1 + 8,param_4);
  param_1[0x10] = param_5;
  return param_1;
}


// ==== FUN_00022978 @ 00022978 ====

int * FUN_00022978(int *param_1,string *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                  int param_6,undefined1 param_7,undefined1 param_8,string *param_9,
                  undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  runtime_error *prVar2;
  bool bVar3;
  int iVar4;
  string asStack_24 [4];
  string asStack_20 [4];
  string asStack_1c [4];
  allocator aaStack_18 [8];
  
  iVar4 = DAT_00022d70 + 0x229a0;
  *param_1 = DAT_00022d74 + 0x229b4;
  std::string::string((string *)(param_1 + 1),param_2);
  param_1[2] = param_5;
  param_1[3] = param_6;
  FUN_00023914(param_1 + 4);
  FUN_00014334(param_1 + 0xe,param_11);
  *(undefined1 *)(param_1 + 0x10) = param_7;
  std::string::string((string *)(param_1 + 0x11),param_9);
  if ((param_1[2] == 0) && (iVar1 = FUN_00018ff4(param_1 + 0xe), iVar1 == -1)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    prVar2 = (runtime_error *)__cxa_allocate_exception(8);
    std::allocator<char>::allocator();
    std::string::string(asStack_24,(char *)(DAT_00022d78 + 0x22a90),aaStack_18);
    std::runtime_error::runtime_error(prVar2,asStack_24);
    std::string::~string(asStack_24);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_18);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,*(undefined4 *)(iVar4 + DAT_00022d7c),*(undefined4 *)(iVar4 + DAT_00022d80));
  }
  if ((param_1[2] == 1) &&
     ((iVar1 = FUN_00018ff4(param_10), iVar1 == -1 ||
      (iVar1 = FUN_00018ff4(param_1 + 0xe), iVar1 == -1)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    prVar2 = (runtime_error *)__cxa_allocate_exception(8);
    std::allocator<char>::allocator();
    std::string::string(asStack_20,(char *)(DAT_00022d84 + 0x22b64),aaStack_18);
    std::runtime_error::runtime_error(prVar2,asStack_20);
    std::string::~string(asStack_20);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_18);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,*(undefined4 *)(iVar4 + DAT_00022d7c),*(undefined4 *)(iVar4 + DAT_00022d80));
  }
  iVar1 = std::string::empty();
  if (iVar1 != 0) {
    prVar2 = (runtime_error *)__cxa_allocate_exception(8);
    std::allocator<char>::allocator();
    std::string::string(asStack_1c,(char *)(DAT_00022d88 + 0x22c00),aaStack_18);
    std::runtime_error::runtime_error(prVar2,asStack_1c);
    std::string::~string(asStack_1c);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_18);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,*(undefined4 *)(iVar4 + DAT_00022d7c),*(undefined4 *)(iVar4 + DAT_00022d80));
  }
  FUN_00014334(aaStack_18,param_10);
  FUN_00022d8c(param_1,param_3,param_4,aaStack_18,param_8);
  FUN_00014384(aaStack_18);
  return param_1;
}


// ==== FUN_00022d8c @ 00022d8c ====

void FUN_00022d8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  runtime_error *this;
  bool bVar2;
  int iVar3;
  allocator aaStack_1c [4];
  string asStack_18 [8];
  
  iVar3 = DAT_00022f08 + 0x22db4;
  iVar1 = std::string::empty();
  if (((iVar1 == 0) && (iVar1 = std::string::empty(), iVar1 == 0)) &&
     (iVar1 = FUN_00018ff4(param_4), iVar1 != -1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    this = (runtime_error *)__cxa_allocate_exception(8);
    std::allocator<char>::allocator();
    std::string::string(asStack_18,(char *)(DAT_00022f0c + 0x22e30),aaStack_1c);
    std::runtime_error::runtime_error(this,asStack_18);
    std::string::~string(asStack_18);
    std::allocator<char>::~allocator((allocator<char> *)aaStack_1c);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,*(undefined4 *)(iVar3 + DAT_00022f10),*(undefined4 *)(iVar3 + DAT_00022f14));
  }
  FUN_000239c8(asStack_18,param_2,param_3,param_4,&stack0x00000000);
  FUN_00023b00(param_1 + 0x10,asStack_18);
  FUN_00014384(asStack_18);
  return;
}


// ==== FUN_00022f18 @ 00022f18 ====

/* WARNING: Removing unreachable block (ram,0x00022f98) */

int * FUN_00022f18(int *param_1)

{
  *param_1 = DAT_00023004 + 0x22f40;
  FUN_00023b78(param_1 + 4);
  std::string::~string((string *)(param_1 + 0x11));
  FUN_00014384(param_1 + 0xe);
  FUN_00023940(param_1 + 4);
  std::string::~string((string *)(param_1 + 1));
  return param_1;
}


// ==== FUN_00023008 @ 00023008 ====

void * FUN_00023008(void *param_1)

{
  FUN_00022f18(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00023038 @ 00023038 ====

bool FUN_00023038(int param_1,undefined4 param_2,uint *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  bool local_25;
  uint local_24;
  undefined8 local_20;
  undefined1 auStack_18 [12];
  
  local_25 = false;
  local_20 = 0;
  local_24 = 0;
  do {
    uVar5 = FUN_00023bb8(param_1 + 0x10);
    if (uVar5 <= local_24) {
      return local_25;
    }
    uVar2 = FUN_00023bf4(param_1 + 0x10,local_24);
    iVar3 = FUN_000143f8(uVar2);
    FUN_00014334(auStack_18,iVar3 + 8);
    uVar2 = FUN_000143f8(auStack_18);
    lVar7 = FUN_00021948(uVar2);
    uVar5 = (uint)((ulonglong)lVar7 >> 0x20);
    bVar6 = local_20._4_4_ <= uVar5;
    if (uVar5 == local_20._4_4_) {
      bVar6 = (uint)local_20 <= (uint)lVar7;
    }
    if (bVar6 && lVar7 != local_20) {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        if (*(char *)(param_1 + 0x40) != '\0') {
          uVar2 = FUN_000143f8(auStack_18);
          uVar2 = FUN_0001a130(uVar2);
          uVar4 = FUN_000143f8(param_1 + 0x38);
          uVar4 = FUN_0001a130(uVar4);
          iVar3 = FUN_00023c30(uVar2,uVar4);
          if (iVar3 != 0) goto LAB_00023148;
        }
        goto LAB_00023150;
      }
LAB_00023148:
      bVar6 = true;
    }
    else {
LAB_00023150:
      bVar6 = false;
    }
    if (bVar6) {
      uVar2 = FUN_000143f8(auStack_18);
      cVar1 = FUN_000219fc(uVar2,param_2);
      local_25 = cVar1 != '\x01';
      if (local_25) {
        *param_3 = local_24;
      }
      uVar2 = FUN_000143f8(auStack_18);
      local_20 = FUN_00021948(uVar2);
    }
    FUN_00014384(auStack_18);
    local_24 = local_24 + 1;
  } while( true );
}


// ==== FUN_00023240 @ 00023240 ====

undefined4 FUN_00023240(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [16];
  
  local_48 = param_4;
  local_44 = param_3;
  local_40 = param_2;
  local_3c = param_1;
  FUN_0001cb04(&local_38);
  FUN_00019cf0(&local_28,local_3c + 0x10);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  while( true ) {
    FUN_00019d24(auStack_18,local_3c + 0x10);
    iVar2 = FUN_0001fdec(&local_38,auStack_18);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = FUN_000143f8(&local_38);
    iVar2 = FUN_000143f8(uVar1);
    iVar2 = FUN_00023c30(iVar2 + 4,local_40);
    if (iVar2 != 0) break;
    FUN_00023cbc(auStack_58,&local_38,0);
  }
  uVar1 = FUN_000143f8(&local_38);
  iVar2 = FUN_000143f8(uVar1);
  FUN_0001892c(local_44,iVar2 + 8);
  FUN_0001892c(local_48,local_3c + 0x38);
  return 1;
}


// ==== FUN_00023380 @ 00023380 ====

bool FUN_00023380(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  string *psVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool local_4d;
  undefined4 local_4c;
  string asStack_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  int iStack_14;
  
  iVar8 = DAT_000238f0 + 0x2339c;
  local_4d = false;
  local_4c = 0;
  uVar2 = FUN_000143f8(param_1 + 0x38);
  uVar2 = FUN_0001e3ec(uVar2);
  cVar1 = FUN_00023038(param_1,uVar2,&local_4c);
  if (cVar1 == '\x01') {
    local_40 = g_hash_table_new(*(undefined4 *)(iVar8 + DAT_000238f4),
                                *(undefined4 *)(iVar8 + DAT_000238f8));
    uVar2 = FUN_000143f8(param_1 + 0x38);
    psVar3 = (string *)FUN_0001a130(uVar2);
    std::string::string(asStack_48,psVar3);
    uVar2 = FUN_00023bf4(param_1 + 0x10,local_4c);
    iVar4 = FUN_000143f8(uVar2);
    if (*(char *)(iVar4 + 0x10) != '\0') {
      uVar2 = FUN_00023bf4(param_1 + 0x10,local_4c);
      iVar4 = FUN_000143f8(uVar2);
      uVar2 = FUN_000143f8(iVar4 + 8);
      psVar3 = (string *)FUN_0001a130(uVar2);
      std::string::operator=(asStack_48,psVar3);
    }
    uVar2 = FUN_00023bf4(param_1 + 0x10,local_4c);
    FUN_000143f8(uVar2);
    local_3c = std::string::c_str();
    uVar2 = FUN_00023bf4(param_1 + 0x10,local_4c);
    FUN_000143f8(uVar2);
    local_38 = std::string::c_str();
    cVar1 = std::string::empty();
    if (cVar1 != '\x01') {
      cVar1 = std::string::empty();
      if (cVar1 == '\x01') {
        local_34 = DAT_000238fc + 0x235b0;
      }
      else {
        local_34 = std::string::c_str();
      }
      uVar2 = std::string::c_str();
      g_hash_table_insert(local_40,local_34,uVar2);
    }
    local_44 = 1;
    if (*(int *)(param_1 + 8) == 1) {
      uVar2 = FUN_00023bf4(param_1 + 0x10,local_4c);
      iVar4 = FUN_000143f8(uVar2);
      uVar2 = FUN_000143f8(iVar4 + 8);
      local_28 = FUN_00021948(uVar2);
      uVar2 = FUN_000143f8(param_1 + 0x38);
      local_20 = FUN_00021948(uVar2);
      uVar7 = (uint)((ulonglong)local_20 >> 0x20);
      uVar5 = (uint)local_20;
      if ((local_28 != 0) && (local_20 != 0)) {
        bVar9 = local_28._4_4_ <= uVar7;
        if (uVar7 == local_28._4_4_) {
          bVar9 = (uint)local_28 <= uVar5;
        }
        if (bVar9) {
          local_44 = uVar5 - (uint)local_28;
          iStack_14 = uVar7 - (local_28._4_4_ + (uVar5 < (uint)local_28));
          local_18 = local_44;
          uVar2 = std::string::c_str();
          local_30 = record_device_metric
                               (uVar2,local_3c,local_38,local_44,local_40,
                                *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8));
          local_4d = local_30 == 0;
        }
        else if ((**(uint **)(iVar8 + DAT_00023900) & 0x2000000) != 0) {
          _llogmsg_print(0x2000000,DAT_00023904 + 0x2373c,(uint)local_28,local_28._4_4_,local_20);
        }
      }
    }
    else if (*(int *)(param_1 + 8) == 0) {
      uVar2 = std::string::c_str();
      local_2c = record_device_metric
                           (uVar2,local_3c,local_38,local_44,local_40,*(undefined4 *)(param_1 + 0xc)
                            ,*(undefined4 *)(param_1 + 8));
      local_4d = local_2c == 0;
    }
    if ((**(uint **)(iVar8 + DAT_00023900) & 0x800000) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 8);
      if (local_4d == false) {
        iVar8 = DAT_0002390c + 0x23808;
      }
      else {
        iVar8 = DAT_00023908 + 0x237f8;
      }
      uVar6 = std::string::c_str();
      _llogmsg_print(0x800000,DAT_00023910 + 0x23840,uVar2,local_3c,local_38,iVar8,local_44,uVar6);
    }
    g_hash_table_destroy(local_40);
    uVar2 = FUN_00023bf4(param_1 + 0x10,local_4c);
    iVar8 = FUN_000143f8(uVar2);
    uVar2 = FUN_000143f8(iVar8 + 8);
    uVar6 = FUN_000143f8(param_1 + 0x38);
    uVar6 = FUN_0001e3ec(uVar6);
    FUN_000219c0(uVar2,uVar6);
    std::string::~string(asStack_48);
  }
  else {
    local_4d = false;
  }
  return local_4d;
}


// ==== FUN_00023914 @ 00023914 ====

undefined4 FUN_00023914(undefined4 param_1)

{
  FUN_00023d20(param_1);
  return param_1;
}


// ==== FUN_00023940 @ 00023940 ====

undefined4 FUN_00023940(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  FUN_00019cf0(auStack_28,param_1);
  FUN_00019d24(auStack_18,param_1);
  uVar1 = FUN_00018aac(param_1);
  FUN_00023e00(param_1,auStack_28,auStack_18,uVar1);
  FUN_00023d6c(param_1);
  return param_1;
}


// ==== FUN_000239c8 @ 000239c8 ====

undefined4
FUN_000239c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  FUN_00023e64(auStack_28,0);
  uVar1 = FUN_0001a100(auStack_28);
  uVar2 = FUN_0001b8ec(uVar1);
  FUN_00014334(auStack_20,param_4);
  iVar3 = FUN_00013bfc(0x14,uVar2);
  if (iVar3 != 0) {
    FUN_000228f4(iVar3,param_2,param_3,auStack_20,*param_5);
  }
  FUN_00014384(auStack_20);
  FUN_0001a158(uVar1);
  FUN_00014320(auStack_28,uVar2,uVar2);
  FUN_0001a180(param_1,auStack_28,uVar2);
  FUN_00014384(auStack_28);
  return param_1;
}


// ==== FUN_00023b00 @ 00023b00 ====

void FUN_00023b00(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x20) + -8) {
    FUN_00023f04(param_1,param_2);
  }
  else {
    FUN_00023ebc(param_1,*(undefined4 *)(param_1 + 0x18),param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  }
  return;
}


// ==== FUN_00023b78 @ 00023b78 ====

void FUN_00023b78(undefined4 param_1)

{
  undefined1 auStack_18 [16];
  
  FUN_00019cf0(auStack_18,param_1);
  FUN_00023fd4(param_1,auStack_18);
  return;
}


// ==== FUN_00023bb8 @ 00023bb8 ====

undefined4 FUN_00023bb8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00024078(param_1 + 0x18,param_1 + 8);
  return uVar1;
}


// ==== _INIT_1 @ 00023be4 ====

undefined4 _INIT_1(undefined4 param_1)

{
  return param_1;
}


// ==== FUN_00023bf4 @ 00023bf4 ====

undefined4 FUN_00023bf4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00024104(param_1 + 8,param_2);
  return uVar1;
}


// ==== FUN_00023c30 @ 00023c30 ====

undefined4 FUN_00023c30(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = std::string::size();
  iVar2 = std::string::size();
  if (iVar1 == iVar2) {
    uVar3 = std::string::data();
    uVar4 = std::string::data();
    uVar5 = std::string::size();
    iVar1 = FUN_000228bc(uVar3,uVar4,uVar5);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_00023cbc @ 00023cbc ====

undefined4 FUN_00023cbc(undefined4 param_1,undefined4 param_2)

{
  FUN_00019d58(param_1,param_2);
  FUN_00024148(param_2);
  return param_1;
}


// ==== FUN_00023cf8 @ 00023cf8 ====

undefined4 FUN_00023cf8(undefined4 param_1)

{
  FUN_00019acc(param_1);
  return param_1;
}


// ==== FUN_00023d20 @ 00023d20 ====

undefined4 FUN_00023d20(undefined4 param_1)

{
  FUN_000241bc(param_1);
  FUN_0002421c(param_1,0);
  return param_1;
}


// ==== FUN_00023d6c @ 00023d6c ====

int * FUN_00023d6c(int *param_1)

{
  if (*param_1 != 0) {
    FUN_000243c0(param_1,param_1[5],param_1[9] + 4);
    FUN_0002441c(param_1,*param_1,param_1[1]);
  }
  FUN_00023cf8(param_1);
  return param_1;
}


// ==== FUN_00023e00 @ 00023e00 ====

void FUN_00023e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  FUN_00019d58(auStack_28,param_2,param_3,auStack_28,param_4);
  FUN_00019d58(auStack_18,param_3);
  FUN_0002446c(param_1,auStack_28,auStack_18);
  return;
}


// ==== FUN_00023e64 @ 00023e64 ====

undefined4 * FUN_00023e64(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  FUN_000245ac(param_1 + 1,param_2);
  FUN_0001bbe4(param_1,param_2);
  return param_1;
}


// ==== FUN_00023ebc @ 00023ebc ====

void FUN_00023ebc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00013bfc(8,param_2);
  if (iVar1 != 0) {
    FUN_00014334(iVar1,param_3);
  }
  return;
}


// ==== FUN_00023f04 @ 00023f04 ====

void FUN_00023f04(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00024638(param_1,1);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar1 = FUN_0002469c(param_1);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  FUN_00023ebc(param_1,*(undefined4 *)(param_1 + 0x18),param_2);
  FUN_000246dc(param_1 + 0x18,*(int *)(param_1 + 0x24) + 4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// ==== FUN_00023fd4 @ 00023fd4 ====

void FUN_00023fd4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  FUN_00019d58(auStack_18,param_2);
  FUN_00019d24(auStack_28,param_1);
  uVar1 = FUN_00018aac(param_1);
  FUN_00023e00(param_1,auStack_18,auStack_28,uVar1);
  FUN_000243c0(param_1,param_2[3] + 4,*(int *)(param_1 + 0x24) + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  return;
}


// ==== FUN_00024078 @ 00024078 ====

int FUN_00024078(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00024770();
  return ((param_1[3] - param_2[3] >> 2) + -1) * iVar1 + (*param_1 - param_1[1] >> 3) +
         (param_2[2] - *param_2 >> 3);
}


// ==== FUN_00024104 @ 00024104 ====

undefined4 FUN_00024104(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [16];
  
  FUN_0002478c(auStack_18,param_1,param_2);
  uVar1 = FUN_000143f8(auStack_18);
  return uVar1;
}


// ==== FUN_00024148 @ 00024148 ====

int * FUN_00024148(int *param_1)

{
  *param_1 = *param_1 + 8;
  if (*param_1 == param_1[2]) {
    FUN_000246dc(param_1,param_1[3] + 4);
    *param_1 = param_1[1];
  }
  return param_1;
}


// ==== FUN_000241bc @ 000241bc ====

undefined4 * FUN_000241bc(undefined4 *param_1)

{
  FUN_00019acc(param_1);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0001cb04(param_1 + 2);
  FUN_0001cb04(param_1 + 6);
  return param_1;
}


// ==== FUN_0002421c @ 0002421c ====

void FUN_0002421c(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = FUN_00013c44(8);
  local_1c = param_2 / uVar1 + 1;
  local_24 = 8;
  local_20 = param_2 / uVar1 + 3;
  piVar2 = (int *)FUN_0001c9a4(&local_24,&local_20);
  param_1[1] = *piVar2;
  iVar3 = FUN_000247e8(param_1,param_1[1]);
  *param_1 = iVar3;
  local_18 = *param_1 + ((uint)(param_1[1] - local_1c) >> 1) * 4;
  local_14 = local_18 + local_1c * 4;
  FUN_00024854(param_1,local_18,local_14);
  FUN_000246dc(param_1 + 2,local_18);
  FUN_000246dc(param_1 + 6,local_14 + -4);
  param_1[2] = param_1[3];
  iVar3 = param_1[7];
  uVar1 = FUN_00013c44(8);
  param_1[6] = iVar3 + (param_2 - uVar1 * (param_2 / uVar1)) * 8;
  return;
}


// ==== FUN_000243c0 @ 000243c0 ====

void FUN_000243c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *local_c;
  
  for (local_c = param_2; local_c < param_3; local_c = local_c + 1) {
    FUN_00024734(param_1,*local_c);
  }
  return;
}


// ==== FUN_0002441c @ 0002441c ====

void FUN_0002441c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_c [4];
  
  FUN_000248dc(auStack_c,param_1);
  FUN_0001cd18(auStack_c,param_2,param_3);
  FUN_00019acc(auStack_c);
  return;
}


// ==== FUN_0002446c @ 0002446c ====

void FUN_0002446c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *local_14;
  
  local_14 = (int *)param_2[3];
  while (local_14 = local_14 + 1, local_14 < (int *)param_3[3]) {
    iVar5 = *local_14;
    iVar3 = *local_14;
    iVar1 = FUN_00024770();
    uVar2 = FUN_00018aac(param_1);
    FUN_00024914(iVar5,iVar3 + iVar1 * 8,uVar2);
  }
  if (param_2[3] == param_3[3]) {
    uVar6 = *param_2;
    uVar4 = *param_3;
    uVar2 = FUN_00018aac(param_1);
    FUN_00024914(uVar6,uVar4,uVar2);
  }
  else {
    uVar6 = *param_2;
    uVar4 = param_2[2];
    uVar2 = FUN_00018aac(param_1);
    FUN_00024914(uVar6,uVar4,uVar2);
    uVar6 = param_3[1];
    uVar4 = *param_3;
    uVar2 = FUN_00018aac(param_1);
    FUN_00024914(uVar6,uVar4,uVar2);
  }
  return;
}


// ==== FUN_000245ac @ 000245ac ====

undefined4 * FUN_000245ac(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  pvVar1 = operator_new(0x28);
  FUN_00024940(pvVar1,param_2);
  *param_1 = pvVar1;
  return param_1;
}


// ==== FUN_00024638 @ 00024638 ====

void FUN_00024638(int *param_1,int param_2)

{
  if ((uint)(param_1[1] - (param_1[9] - *param_1 >> 2)) < param_2 + 1U) {
    FUN_000249b0(param_1,param_2,0);
  }
  return;
}


// ==== FUN_0002469c @ 0002469c ====

undefined4 FUN_0002469c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013c44(8);
  uVar1 = FUN_00024c04(param_1,uVar1,0);
  return uVar1;
}


// ==== FUN_000246dc @ 000246dc ====

void FUN_000246dc(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 **)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 4) = *param_2;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = FUN_00024770();
  *(int *)(param_1 + 8) = iVar2 + iVar1 * 8;
  return;
}


// ==== FUN_00024734 @ 00024734 ====

void FUN_00024734(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013c44(8);
  FUN_0001cd18(param_1,param_2,uVar1);
  return;
}


// ==== FUN_00024770 @ 00024770 ====

undefined4 FUN_00024770(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013c44(8);
  return uVar1;
}


// ==== FUN_0002478c @ 0002478c ====

undefined4 FUN_0002478c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_18 [16];
  
  FUN_00019d58(auStack_18,param_2);
  uVar1 = FUN_00024c68(auStack_18,param_3);
  FUN_00019d58(param_1,uVar1);
  return param_1;
}


// ==== FUN_000247e8 @ 000247e8 ====

undefined4 FUN_000247e8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_14 [8];
  
  FUN_000248dc(auStack_14,param_1);
  uVar1 = FUN_0001dd70(auStack_14,param_2,0);
  FUN_00019acc(auStack_14);
  return uVar1;
}


// ==== FUN_00024854 @ 00024854 ====

void FUN_00024854(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_c;
  
  local_c = param_2;
  while( true ) {
    if (param_3 <= local_c) break;
    uVar1 = FUN_0002469c(param_1);
    *local_c = uVar1;
    local_c = local_c + 1;
  }
  return;
}


// ==== FUN_000248dc @ 000248dc ====

undefined4 FUN_000248dc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018aac(param_2);
  FUN_0001dd44(param_1,uVar1);
  return param_1;
}


// ==== FUN_00024914 @ 00024914 ====

void FUN_00024914(undefined4 param_1,undefined4 param_2)

{
  FUN_00024d9c(param_1,param_2);
  return;
}


// ==== FUN_00024940 @ 00024940 ====

int * FUN_00024940(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_000249a8 + 0x24960;
  FUN_00013fac(param_1);
  *param_1 = *(int *)(iVar1 + DAT_000249ac) + 8;
  param_1[3] = param_2;
  FUN_0001e17c(param_1 + 4);
  return param_1;
}


// ==== FUN_000249b0 @ 000249b0 ====

void FUN_000249b0(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int local_30;
  int *local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = (param_1[9] - param_1[5] >> 2) + 1;
  local_1c = local_20 + param_2;
  local_30 = param_2;
  local_2c = param_1;
  if ((uint)(local_1c * 2) < (uint)param_1[1]) {
    if (param_3 == '\0') {
      param_2 = 0;
    }
    else {
      param_2 = param_2 << 2;
    }
    local_24 = *param_1 + ((uint)(param_1[1] - local_1c) >> 1) * 4 + param_2;
    if (local_24 < (uint)param_1[5]) {
      FUN_00024dec(param_1[5],param_1[9] + 4,local_24);
    }
    else {
      FUN_00024e3c(param_1[5],param_1[9] + 4,local_24 + local_20 * 4);
    }
  }
  else {
    iVar2 = param_1[1];
    piVar1 = (int *)FUN_0001c9a4(param_1 + 1,&local_30);
    local_18 = iVar2 + *piVar1 + 2;
    local_14 = FUN_000247e8(local_2c,local_18);
    if (param_3 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = local_30 << 2;
    }
    local_24 = local_14 + ((uint)(local_18 - local_1c) >> 1) * 4 + iVar2;
    FUN_00024dec(local_2c[5],local_2c[9] + 4,local_24);
    FUN_0002441c(local_2c,*local_2c,local_2c[1]);
    *local_2c = local_14;
    local_2c[1] = local_18;
  }
  FUN_000246dc(local_2c + 2,local_24);
  FUN_000246dc(local_2c + 6,local_24 + (local_20 + 0x3fffffff) * 4);
  return;
}


// ==== FUN_00024c04 @ 00024c04 ====

void * FUN_00024c04(undefined4 param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00024e8c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  pvVar2 = operator_new(param_2 << 3);
  return pvVar2;
}


// ==== FUN_00024c68 @ 00024c68 ====

int * FUN_00024c68(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = (*param_1 - param_1[1] >> 3) + param_2;
  if (((int)uVar3 < 0) || (iVar2 = FUN_00024770(), iVar2 <= (int)uVar3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *param_1 = *param_1 + param_2 * 8;
  }
  else {
    if ((int)uVar3 < 1) {
      uVar4 = FUN_00024770();
      uVar4 = ~(~uVar3 / uVar4);
    }
    else {
      iVar2 = FUN_00024770();
      uVar4 = (int)uVar3 / iVar2;
    }
    FUN_000246dc(param_1,param_1[3] + uVar4 * 4);
    iVar5 = param_1[1];
    iVar2 = FUN_00024770();
    *param_1 = iVar5 + (uVar3 - uVar4 * iVar2) * 8;
  }
  return param_1;
}


// ==== FUN_00024d9c @ 00024d9c ====

void FUN_00024d9c(undefined4 param_1,undefined4 param_2)

{
  FUN_00024eb0(param_1,param_2);
  return;
}


// ==== FUN_00024dc4 @ 00024dc4 ====

undefined4 FUN_00024dc4(undefined4 param_1)

{
  FUN_00024f74(param_1);
  return param_1;
}


// ==== FUN_00024dec @ 00024dec ====

undefined4 FUN_00024dec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00020690(param_1);
  uVar2 = FUN_00020690(param_2);
  uVar1 = FUN_00024fbc(uVar1,uVar2,param_3);
  return uVar1;
}


// ==== FUN_00024e3c @ 00024e3c ====

undefined4 FUN_00024e3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00020690(param_1);
  uVar2 = FUN_00020690(param_2);
  uVar1 = FUN_00025018(uVar1,uVar2,param_3);
  return uVar1;
}


// ==== FUN_00024e8c @ 00024e8c ====

undefined4 FUN_00024e8c(void)

{
  return 0x1fffffff;
}


// ==== FUN_00024eb0 @ 00024eb0 ====

void FUN_00024eb0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  local_c = param_1;
  while( true ) {
    if (local_c == param_2) break;
    uVar1 = FUN_00018aac(local_c);
    FUN_00025074(uVar1);
    local_c = local_c + 8;
  }
  return;
}


// ==== FUN_00024f00 @ 00024f00 ====

string * FUN_00024f00(string *param_1)

{
  FUN_00014384(param_1 + 8);
  std::string::~string(param_1 + 4);
  std::string::~string(param_1);
  return param_1;
}


// ==== FUN_00024f74 @ 00024f74 ====

void FUN_00024f74(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00024f00(param_1 + 4);
    *param_1 = '\0';
  }
  return;
}


// ==== FUN_00024fbc @ 00024fbc ====

undefined4 FUN_00024fbc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00020690(param_1);
  uVar2 = FUN_00020690(param_2);
  uVar3 = FUN_00020690(param_3);
  uVar1 = FUN_00020be8(uVar1,uVar2,uVar3);
  return uVar1;
}


// ==== FUN_00025018 @ 00025018 ====

undefined4 FUN_00025018(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00020690(param_1);
  uVar2 = FUN_00020690(param_2);
  uVar3 = FUN_00020690(param_3);
  uVar1 = FUN_00020c28(uVar1,uVar2,uVar3);
  return uVar1;
}


// ==== FUN_00025074 @ 00025074 ====

void FUN_00025074(undefined4 param_1)

{
  FUN_00014384(param_1);
  return;
}


// ==== FUN_00025094 @ 00025094 ====

/* WARNING: Removing unreachable block (ram,0x000250e8) */

int * FUN_00025094(int *param_1)

{
  *param_1 = *(int *)(DAT_00025114 + 0x250b0 + DAT_00025118) + 8;
  FUN_00024dc4(param_1 + 4);
  FUN_0001400c(param_1);
  return param_1;
}


// ==== FUN_0002511c @ 0002511c ====

void * FUN_0002511c(void *param_1)

{
  FUN_00025094(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_0002514c @ 0002514c ====

void FUN_0002514c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_000251c4 + 0x2516c;
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)(DAT_000251c8 + 0x25190));
    __aeabi_atexit(DAT_000251cc + 0x251a0,*(undefined4 *)(iVar1 + DAT_000251d0),
                   DAT_000251d4 + 0x251b8);
  }
  return;
}


// ==== FUN_000251d8 @ 000251d8 ====

void FUN_000251d8(int param_1)

{
  FUN_0002526c(param_1 + 0x10,*(undefined4 *)(param_1 + 0xc));
  return;
}


// ==== FUN_0002520c @ 0002520c ====

int FUN_0002520c(int param_1,type_info *param_2)

{
  int iVar1;
  
  iVar1 = std::type_info::operator==(param_2,*(type_info **)(DAT_00025264 + 0x2522c + DAT_00025268))
  ;
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x10;
  }
  return param_1;
}


// ==== FUN_0002526c @ 0002526c ====

void FUN_0002526c(undefined4 param_1)

{
  FUN_00024f74(param_1);
  return;
}


// ==== FUN_00025290 @ 00025290 ====

void FUN_00025290(void)

{
  FUN_0002514c(1,0xffff);
  return;
}


// ==== FUN_000252a8 @ 000252a8 ====

int * FUN_000252a8(int *param_1)

{
  *param_1 = *(int *)(DAT_000252e8 + 0x252c4 + DAT_000252ec) + 8;
  return param_1;
}


// ==== FUN_000252f0 @ 000252f0 ====

int * FUN_000252f0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00025338 + 0x2530c;
  FUN_000252a8(param_1);
  *param_1 = *(int *)(iVar1 + DAT_0002533c) + 8;
  return param_1;
}


// ==== FUN_00025340 @ 00025340 ====

int * FUN_00025340(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00025388 + 0x2535c;
  FUN_000252a8(param_1);
  *param_1 = *(int *)(iVar1 + DAT_0002538c) + 8;
  return param_1;
}


// ==== FUN_00025390 @ 00025390 ====

undefined4 FUN_00025390(undefined4 param_1,undefined4 param_2)

{
  FUN_00014334(param_1,param_2);
  return param_1;
}


// ==== FUN_000253c4 @ 000253c4 ====

/* WARNING: Removing unreachable block (ram,0x0002542c) */

int * FUN_000253c4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00025444 + 0x253e0;
  *param_1 = *(int *)(iVar1 + DAT_00025448) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00025448) + 0x18;
  std::bad_alloc::~bad_alloc((bad_alloc *)(param_1 + 5));
  FUN_00013cfc(param_1);
  return param_1;
}


// ==== FUN_00025454 @ 00025454 ====

void * FUN_00025454(void *param_1)

{
  FUN_000253c4(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_0002548c @ 0002548c ====

/* WARNING: Removing unreachable block (ram,0x000254f4) */

int * FUN_0002548c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0002550c + 0x254a8;
  *param_1 = *(int *)(iVar1 + DAT_00025510) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00025510) + 0x18;
  std::bad_exception::~bad_exception((bad_exception *)(param_1 + 5));
  FUN_00013cfc(param_1);
  return param_1;
}


// ==== FUN_0002551c @ 0002551c ====

void * FUN_0002551c(void *param_1)

{
  FUN_0002548c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00025554 @ 00025554 ====

undefined4 FUN_00025554(undefined4 param_1)

{
  FUN_00014384(param_1);
  return param_1;
}


// ==== FUN_00025580 @ 00025580 ====

undefined4 FUN_00025580(undefined4 param_1,undefined4 param_2)

{
  FUN_00014334(param_1,param_2);
  return param_1;
}


// ==== FUN_000255b8 @ 000255b8 ====

void FUN_000255b8(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  
  local_18 = param_1;
  if (param_1 != 0) {
    while( true ) {
      cVar2 = FUN_000262a4(local_18 + 0x38);
      if ((cVar2 == '\x01') && (*(int *)(local_18 + 0x34) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      while (*(int *)(local_18 + 0x34) != 0) {
        local_14 = *(int **)(local_18 + 0x34);
        *(int *)(local_18 + 0x34) = local_14[1];
        if ((*local_14 != 0) && ((**(code **)(*(int *)*local_14 + 8))(*local_14), *local_14 != 0)) {
          (**(code **)(*(int *)*local_14 + 4))(*local_14);
        }
        operator_delete(local_14);
      }
      local_24 = FUN_000262d0(local_18 + 0x38);
      FUN_000141b8(&local_20);
      local_1c = FUN_000262fc(local_18 + 0x38);
      while (iVar4 = FUN_000185a8(&local_24,&local_1c), iVar4 != 0) {
        local_20 = local_24;
        FUN_00018fb8(&local_24);
        iVar4 = FUN_000185ec(&local_20);
        iVar4 = FUN_00018ff4(iVar4 + 4);
        if ((iVar4 == -1) || (iVar4 = FUN_000185ec(&local_20), *(int *)(iVar4 + 0xc) == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          iVar4 = FUN_000185ec(&local_20);
          piVar3 = (int *)FUN_000143f8(iVar4 + 4);
          pcVar5 = *(code **)(*piVar3 + 8);
          iVar4 = FUN_000185ec(&local_20);
          (*pcVar5)(piVar3,*(undefined4 *)(iVar4 + 0xc));
        }
        FUN_00026328(local_18 + 0x38,local_20);
      }
    }
    if (local_18 != 0) {
      FUN_00025998(local_18 + 0xc);
    }
  }
  return;
}


// ==== FUN_00025820 @ 00025820 ====

void FUN_00025820(void)

{
  pthread_key_create((pthread_key_t *)(DAT_00025848 + 0x25834),
                     (__destr_function *)(DAT_0002584c + 0x25840));
  return;
}


// ==== FUN_00025850 @ 00025850 ====

void * FUN_00025850(void)

{
  void *pvVar1;
  
  FUN_00026354(DAT_00025894 + 0x25864,DAT_00025898 + 0x25870);
  pvVar1 = pthread_getspecific(*(pthread_key_t *)(DAT_0002589c + 0x25880));
  return pvVar1;
}


// ==== FUN_000258a0 @ 000258a0 ====

void FUN_000258a0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  int local_14;
  
  iVar2 = DAT_00025960 + 0x258b8;
  local_14 = FUN_00025850();
  if ((local_14 != 0) && (*(char *)(local_14 + 0x70) != '\0')) {
    FUN_00017e9c(auStack_18,local_14 + 0x18);
    if (*(char *)(local_14 + 0x71) != '\0') {
      *(undefined1 *)(local_14 + 0x71) = 0;
      uVar1 = __cxa_allocate_exception(1);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_00025964),0);
    }
    FUN_00017edc(auStack_18);
  }
  return;
}


// ==== FUN_00025968 @ 00025968 ====

int FUN_00025968(int param_1)

{
  FUN_00025554(param_1 + 4);
  return param_1;
}


// ==== FUN_00025998 @ 00025998 ====

void FUN_00025998(undefined4 param_1)

{
  undefined1 auStack_10 [8];
  
  FUN_00018698(auStack_10);
  FUN_0001a32c(auStack_10,param_1);
  FUN_00014384(auStack_10);
  return;
}


// ==== FUN_000259ec @ 000259ec ====

int * FUN_000259ec(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00025a58 + 0x25a08;
  FUN_00013c84(param_1);
  FUN_00025340(param_1 + 5);
  *param_1 = *(int *)(iVar1 + DAT_00025a5c) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00025a5c) + 0x18;
  return param_1;
}


// ==== FUN_00025a60 @ 00025a60 ====

int * FUN_00025a60(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00025ab4 + 0x25a80;
  FUN_00017750(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00025ab8) + 8;
  return param_1;
}


// ==== FUN_00025abc @ 00025abc ====

int * FUN_00025abc(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00025b40 + 0x25adc;
  FUN_0001779c(param_1,param_2);
  FUN_00025a60(param_1 + 5,param_2 + 0x14);
  *param_1 = *(int *)(iVar1 + DAT_00025b44) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00025b44) + 0x18;
  return param_1;
}


// ==== FUN_00025b48 @ 00025b48 ====

int * FUN_00025b48(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00025c10 + 0x25b68;
  FUN_00017704(param_1 + 6,(int)param_2 + *(int *)(*param_2 + -0xc));
  FUN_00025abc(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00025c14) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00025c14) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00025c14) + 0x44;
  return param_1;
}


// ==== FUN_00025c18 @ 00025c18 ====

undefined4 FUN_00025c18(undefined4 param_1)

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
  
  iVar4 = DAT_00025e2c + 0x25c34;
  FUN_000259ec(auStack_4c);
  FUN_000263b8(auStack_34,auStack_4c);
  FUN_0001b9f4(auStack_54,DAT_00025e30 + 0x25c64);
  uVar1 = FUN_000265fc(auStack_34,auStack_54);
  FUN_0001b9f4(auStack_58,DAT_00025e34 + 0x25c94);
  uVar1 = FUN_0002662c(uVar1,auStack_58);
  FUN_0001b9f4(auStack_5c,0x80);
  FUN_0002665c(uVar1,auStack_5c);
  if (((**(uint **)(iVar4 + DAT_00025e38) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(*(undefined4 *)(iVar4 + DAT_00025e38)), iVar2 != 0)) {
    pvVar3 = operator_new(0x1c);
    FUN_00025b48(pvVar3,auStack_34);
    FUN_0002668c(auStack_54,pvVar3);
    FUN_00025390(*(undefined4 *)(iVar4 + DAT_00025e3c),auStack_54);
    __cxa_guard_release(*(undefined4 *)(iVar4 + DAT_00025e38));
    __aeabi_atexit(*(undefined4 *)(iVar4 + DAT_00025e3c),DAT_00025e40 + 0x25d84,
                   DAT_00025e44 + 0x25d90);
    FUN_00014384(auStack_54);
  }
  FUN_00025580(param_1,*(undefined4 *)(iVar4 + DAT_00025e3c));
  FUN_0002648c(auStack_34);
  FUN_000253c4(auStack_4c);
  return param_1;
}


// ==== FUN_00025e48 @ 00025e48 ====

int * FUN_00025e48(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00025eb4 + 0x25e64;
  FUN_00013c84(param_1);
  FUN_000252f0(param_1 + 5);
  *param_1 = *(int *)(iVar1 + DAT_00025eb8) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00025eb8) + 0x18;
  return param_1;
}


// ==== FUN_00025ebc @ 00025ebc ====

int * FUN_00025ebc(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00025f10 + 0x25edc;
  FUN_00017750(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00025f14) + 8;
  return param_1;
}


// ==== FUN_00025f18 @ 00025f18 ====

int * FUN_00025f18(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00025f9c + 0x25f38;
  FUN_0001779c(param_1,param_2);
  FUN_00025ebc(param_1 + 5,param_2 + 0x14);
  *param_1 = *(int *)(iVar1 + DAT_00025fa0) + 8;
  param_1[5] = *(int *)(iVar1 + DAT_00025fa0) + 0x18;
  return param_1;
}


// ==== FUN_00025fa4 @ 00025fa4 ====

int * FUN_00025fa4(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_0002606c + 0x25fc4;
  FUN_00017704(param_1 + 6,(int)param_2 + *(int *)(*param_2 + -0xc));
  FUN_00025f18(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00026070) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00026070) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00026070) + 0x44;
  return param_1;
}


// ==== FUN_00026074 @ 00026074 ====

undefined4 FUN_00026074(undefined4 param_1)

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
  
  iVar4 = DAT_00026288 + 0x26090;
  FUN_00025e48(auStack_4c);
  FUN_00026724(auStack_34,auStack_4c);
  FUN_0001b9f4(auStack_54,DAT_0002628c + 0x260c0);
  uVar1 = FUN_000265fc(auStack_34,auStack_54);
  FUN_0001b9f4(auStack_58,DAT_00026290 + 0x260f0);
  uVar1 = FUN_0002662c(uVar1,auStack_58);
  FUN_0001b9f4(auStack_5c,0x80);
  FUN_0002665c(uVar1,auStack_5c);
  if (((**(uint **)(iVar4 + DAT_00026294) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(*(undefined4 *)(iVar4 + DAT_00026294)), iVar2 != 0)) {
    pvVar3 = operator_new(0x1c);
    FUN_00025fa4(pvVar3,auStack_34);
    FUN_00026968(auStack_54,pvVar3);
    FUN_00025390(*(undefined4 *)(iVar4 + DAT_00026298),auStack_54);
    __cxa_guard_release(*(undefined4 *)(iVar4 + DAT_00026294));
    __aeabi_atexit(*(undefined4 *)(iVar4 + DAT_00026298),DAT_0002629c + 0x261e0,
                   DAT_000262a0 + 0x261ec);
    FUN_00014384(auStack_54);
  }
  FUN_00025580(param_1,*(undefined4 *)(iVar4 + DAT_00026298));
  FUN_000267f8(auStack_34);
  FUN_0002548c(auStack_4c);
  return param_1;
}


// ==== FUN_000262a4 @ 000262a4 ====

undefined4 FUN_000262a4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00026a00(param_1);
  return uVar1;
}


// ==== FUN_000262d0 @ 000262d0 ====

undefined4 FUN_000262d0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a378(param_1);
  return uVar1;
}


// ==== FUN_000262fc @ 000262fc ====

undefined4 FUN_000262fc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019ff8(param_1);
  return uVar1;
}


// ==== FUN_00026328 @ 00026328 ====

void FUN_00026328(undefined4 param_1,undefined4 param_2)

{
  FUN_00026a38(param_1,param_2);
  return;
}


// ==== FUN_00026354 @ 00026354 ====

void FUN_00026354(undefined4 param_1,code *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00027a7c(param_1);
  if (iVar1 != 0) {
    (*param_2)();
    FUN_00027d80(param_1);
  }
  return;
}


// ==== FUN_000263b8 @ 000263b8 ====

int * FUN_000263b8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00026484 + 0x263d8;
  FUN_0001ade0(param_1 + 6);
  FUN_00025abc(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00026488) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00026488) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00026488) + 0x44;
  FUN_00013e0c(param_1,param_2);
  return param_1;
}


// ==== FUN_0002648c @ 0002648c ====

/* WARNING: Removing unreachable block (ram,0x0002651c) */

int * FUN_0002648c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00026534 + 0x264a8;
  *param_1 = *(int *)(iVar1 + DAT_00026538) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00026538) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00026538) + 0x44;
  FUN_000253c4(param_1);
  FUN_00013d84(param_1 + 6);
  return param_1;
}


// ==== FUN_00026544 @ 00026544 ====

undefined4 FUN_00026544(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002648c((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00026584 @ 00026584 ====

void * FUN_00026584(void *param_1)

{
  FUN_0002648c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000265bc @ 000265bc ====

undefined4 FUN_000265bc(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00026584((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_000265fc @ 000265fc ====

undefined4 FUN_000265fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00026af8(param_1,param_2);
  return uVar1;
}


// ==== FUN_0002662c @ 0002662c ====

undefined4 FUN_0002662c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00026b30(param_1,param_2);
  return uVar1;
}


// ==== FUN_0002665c @ 0002665c ====

undefined4 FUN_0002665c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00026b68(param_1,param_2);
  return uVar1;
}


// ==== FUN_0002668c @ 0002668c ====

int * FUN_0002668c(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
  }
  *param_1 = iVar1;
  FUN_000141b8(param_1 + 1);
  FUN_00026ba0(param_1,param_2,param_1 + 1);
  return param_1;
}


// ==== FUN_00026724 @ 00026724 ====

int * FUN_00026724(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_000267f0 + 0x26744;
  FUN_0001ade0(param_1 + 6);
  FUN_00025f18(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_000267f4) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_000267f4) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_000267f4) + 0x44;
  FUN_00013e0c(param_1,param_2);
  return param_1;
}


// ==== FUN_000267f8 @ 000267f8 ====

/* WARNING: Removing unreachable block (ram,0x00026888) */

int * FUN_000267f8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000268a0 + 0x26814;
  *param_1 = *(int *)(iVar1 + DAT_000268a4) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_000268a4) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_000268a4) + 0x44;
  FUN_0002548c(param_1);
  FUN_00013d84(param_1 + 6);
  return param_1;
}


// ==== FUN_000268b0 @ 000268b0 ====

undefined4 FUN_000268b0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000267f8((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_000268f0 @ 000268f0 ====

void * FUN_000268f0(void *param_1)

{
  FUN_000267f8(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00026928 @ 00026928 ====

undefined4 FUN_00026928(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000268f0((int)param_1 + *(int *)(*param_1 + -0x14));
  return uVar1;
}


// ==== FUN_00026968 @ 00026968 ====

int * FUN_00026968(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
  }
  *param_1 = iVar1;
  FUN_000141b8(param_1 + 1);
  FUN_00026bfc(param_1,param_2,param_1 + 1);
  return param_1;
}


// ==== FUN_00026a00 @ 00026a00 ====

bool FUN_00026a00(int param_1)

{
  return *(int *)(param_1 + 0x14) == 0;
}


// ==== FUN_00026a38 @ 00026a38 ====

void FUN_00026a38(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  FUN_0001bcb8(&local_c,&local_18);
  FUN_00026c58(local_14,local_c);
  return;
}


// ==== FUN_00026a7c @ 00026a7c ====

void FUN_00026a7c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_c [4];
  
  FUN_00026cb0(auStack_c,param_1);
  uVar1 = FUN_00018aac(param_2 + 0x10);
  FUN_00026ce8(auStack_c,uVar1);
  FUN_00019acc(auStack_c);
  FUN_0001ca9c(param_1,param_2);
  return;
}


// ==== FUN_00026af8 @ 00026af8 ====

int FUN_00026af8(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  return param_1;
}


// ==== FUN_00026b30 @ 00026b30 ====

int FUN_00026b30(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  return param_1;
}


// ==== FUN_00026b68 @ 00026b68 ====

int FUN_00026b68(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  return param_1;
}


// ==== FUN_00026ba0 @ 00026ba0 ====

void FUN_00026ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_c [4];
  
  FUN_00026d0c(auStack_c,param_2);
  FUN_0001427c(auStack_c,param_3);
  FUN_000141e8(auStack_c);
  FUN_00014320(param_1,param_2,param_2);
  return;
}


// ==== FUN_00026bfc @ 00026bfc ====

void FUN_00026bfc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_c [4];
  
  FUN_00026d80(auStack_c,param_2);
  FUN_0001427c(auStack_c,param_3);
  FUN_000141e8(auStack_c);
  FUN_00014320(param_1,param_2,param_2);
  return;
}


// ==== FUN_00026c58 @ 00026c58 ====

void FUN_00026c58(int param_1,_Rb_tree_node_base *param_2)

{
  undefined4 uVar1;
  
  uVar1 = std::_Rb_tree_rebalance_for_erase(param_2,(_Rb_tree_node_base *)(param_1 + 4));
  FUN_00026a7c(param_1,uVar1);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}


// ==== FUN_00026cb0 @ 00026cb0 ====

undefined4 FUN_00026cb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018aac(param_2);
  FUN_0001dd44(param_1,uVar1);
  return param_1;
}


// ==== FUN_00026ce8 @ 00026ce8 ====

void FUN_00026ce8(undefined4 param_1,undefined4 param_2)

{
  FUN_00025968(param_2);
  return;
}


// ==== FUN_00026d0c @ 00026d0c ====

undefined4 * FUN_00026d0c(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  pvVar1 = operator_new(0x10);
  FUN_00026e44(pvVar1,param_2);
  *param_1 = pvVar1;
  return param_1;
}


// ==== FUN_00026d80 @ 00026d80 ====

undefined4 * FUN_00026d80(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  pvVar1 = operator_new(0x10);
  FUN_00026ea4(pvVar1,param_2);
  *param_1 = pvVar1;
  return param_1;
}


// ==== FUN_00026df4 @ 00026df4 ====

bool FUN_00026df4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00018aac(param_1);
  iVar2 = *piVar1;
  piVar1 = (int *)FUN_00018aac(param_2);
  return iVar2 != *piVar1;
}


// ==== FUN_00026e44 @ 00026e44 ====

int * FUN_00026e44(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00026e9c + 0x26e64;
  FUN_00013fac(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00026ea0) + 8;
  param_1[3] = param_2;
  return param_1;
}


// ==== FUN_00026ea4 @ 00026ea4 ====

int * FUN_00026ea4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00026efc + 0x26ec4;
  FUN_00013fac(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00026f00) + 8;
  param_1[3] = param_2;
  return param_1;
}


// ==== operator== @ 00026f04 ====

/* bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char*, std::string >
   const&, __gnu_cxx::__normal_iterator<char*, std::string > const&) */

bool __gnu_cxx::operator==(__normal_iterator *param_1,__normal_iterator *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00018aac(param_1);
  iVar2 = *piVar1;
  piVar1 = (int *)FUN_00018aac(param_2);
  return iVar2 == *piVar1;
}


// ==== FUN_00026f54 @ 00026f54 ====

undefined4 FUN_00026f54(void)

{
  return 1;
}


// ==== FUN_00026f7c @ 00026f7c ====

int FUN_00026f7c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00018aac(param_1);
  iVar2 = *piVar1;
  piVar1 = (int *)FUN_00018aac(param_2);
  return iVar2 - *piVar1;
}


// ==== string<__gnu_cxx::__normal_iterator<char*,std::string>> @ 00026fc4 ====

/* std::string::string<__gnu_cxx::__normal_iterator<char*, std::string >
   >(__gnu_cxx::__normal_iterator<char*, std::string >, __gnu_cxx::__normal_iterator<char*,
   std::string >, std::allocator<char> const&) */

string * __thiscall
std::string::string<__gnu_cxx::__normal_iterator<char*,std::string>>
          (string *this,undefined4 param_2,undefined4 param_3,allocator *param_4)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00027018(param_2,param_3,param_4);
  std::string::_Alloc_hider::_Alloc_hider((_Alloc_hider *)this,pcVar1,param_4);
  return this;
}


// ==== FUN_00027018 @ 00027018 ====

undefined4 FUN_00027018(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00027058(param_1,param_2,param_3);
  return uVar1;
}


// ==== FUN_00027058 @ 00027058 ====

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x00027084 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

char * FUN_00027058(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  pcVar1 = std::string::_S_construct<__gnu_cxx::__normal_iterator<char*,std::string>>
                     (param_1,param_2,param_3);
  return pcVar1;
}


// ==== _S_construct<__gnu_cxx::__normal_iterator<char*,std::string>> @ 000270a0 ====

/* char* std::string::_S_construct<__gnu_cxx::__normal_iterator<char*, std::string >
   >(__gnu_cxx::__normal_iterator<char*, std::string >, __gnu_cxx::__normal_iterator<char*,
   std::string >, std::allocator<char> const&, std::forward_iterator_tag) */

char * std::string::_S_construct<__gnu_cxx::__normal_iterator<char*,std::string>>
                 (undefined4 param_1,undefined4 param_2,allocator *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 local_24 [2];
  allocator<char> aaStack_1c [4];
  uint local_18;
  uint local_14;
  
  bVar1 = false;
  local_28 = param_2;
  local_24[0] = param_1;
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)local_24,(__normal_iterator *)&local_28);
  if (bVar2) {
    std::allocator<char>::allocator();
    bVar1 = true;
    iVar3 = FUN_00026f54(param_3,aaStack_1c);
    if (iVar3 != 0) {
      bVar2 = true;
      goto LAB_00027118;
    }
  }
  bVar2 = false;
LAB_00027118:
  if (bVar1) {
    std::allocator<char>::~allocator(aaStack_1c);
  }
  if (bVar2) {
    std::string::_S_empty_rep();
    pcVar4 = (char *)std::string::_Rep::_M_refdata();
  }
  else {
    iVar3 = FUN_000210e8(local_24[0]);
    if ((iVar3 == 0) || (iVar3 = FUN_00026df4(local_24,&local_28), iVar3 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      std::__throw_logic_error((char *)(DAT_0002723c + 0x271a4));
    }
    local_18 = FUN_00027240(local_24[0],local_28);
    local_14 = std::string::_Rep::_S_create(local_18,0,param_3);
    uVar5 = std::string::_Rep::_M_refdata();
    std::string::_S_copy_chars(uVar5,local_24[0],local_28);
    std::string::_Rep::_M_set_length_and_sharable(local_14);
    pcVar4 = (char *)std::string::_Rep::_M_refdata();
  }
  return pcVar4;
}


// ==== FUN_00027240 @ 00027240 ====

undefined4 FUN_00027240(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_1c [4];
  
  local_1c[0] = param_1;
  FUN_0001bc60(local_1c);
  uVar1 = FUN_00027288(local_1c[0],param_2);
  return uVar1;
}


// ==== FUN_00027288 @ 00027288 ====

undefined4 FUN_00027288(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_2;
  local_c = param_1;
  uVar1 = FUN_00026f7c(&local_10,&local_c);
  return uVar1;
}


// ==== FUN_000272c4 @ 000272c4 ====

/* WARNING: Removing unreachable block (ram,0x00027308) */

int * FUN_000272c4(int *param_1)

{
  *param_1 = *(int *)(DAT_00027320 + 0x272e0 + DAT_00027324) + 8;
  FUN_0001400c(param_1);
  return param_1;
}


// ==== FUN_00027328 @ 00027328 ====

void * FUN_00027328(void *param_1)

{
  FUN_000272c4(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00027358 @ 00027358 ====

/* WARNING: Removing unreachable block (ram,0x0002739c) */

int * FUN_00027358(int *param_1)

{
  *param_1 = *(int *)(DAT_000273b4 + 0x27374 + DAT_000273b8) + 8;
  FUN_0001400c(param_1);
  return param_1;
}


// ==== FUN_000273bc @ 000273bc ====

void * FUN_000273bc(void *param_1)

{
  FUN_00027358(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000273ec @ 000273ec ====

void FUN_000273ec(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_000275b4 + 0x2740c;
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)(DAT_000275b8 + 0x27430));
    __aeabi_atexit(DAT_000275bc + 0x27440,*(undefined4 *)(iVar1 + DAT_000275c0),
                   DAT_000275c4 + 0x27458);
    FUN_00018aac(DAT_000275c8 + 0x27468);
    FUN_00018aac(DAT_000275cc + 0x27478);
    FUN_00018aac(DAT_000275d0 + 0x27488);
    FUN_00018aac(DAT_000275d4 + 0x27498);
    FUN_00018aac(DAT_000275d8 + 0x274a8);
    FUN_00018aac(DAT_000275dc + 0x274b8);
    FUN_00018aac(DAT_000275e0 + 0x274c8);
    FUN_00018aac(DAT_000275e4 + 0x274d8);
    FUN_00018aac(DAT_000275e8 + 0x274e8);
    if ((**(uint **)(iVar1 + DAT_000275ec) & 1) == 0) {
      **(undefined4 **)(iVar1 + DAT_000275ec) = 1;
      FUN_00025c18(*(undefined4 *)(iVar1 + DAT_000275f0));
      __aeabi_atexit(*(undefined4 *)(iVar1 + DAT_000275f0),DAT_000275f4 + 0x2753c,
                     DAT_000275f8 + 0x27548);
    }
    if ((**(uint **)(iVar1 + DAT_000275fc) & 1) == 0) {
      **(undefined4 **)(iVar1 + DAT_000275fc) = 1;
      FUN_00026074(*(undefined4 *)(iVar1 + DAT_00027600));
      __aeabi_atexit(*(undefined4 *)(iVar1 + DAT_00027600),DAT_00027604 + 0x2759c,
                     DAT_00027608 + 0x275a8);
    }
  }
  return;
}


// ==== FUN_0002760c @ 0002760c ====

int FUN_0002760c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x1c);
  FUN_000278ac(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_0002767c @ 0002767c ====

undefined4 FUN_0002767c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002760c((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_000276bc @ 000276bc ====

void FUN_000276bc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00027718 + 0x276d8;
  uVar1 = __cxa_allocate_exception(0x1c);
  FUN_00025fa4(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_0002771c),DAT_00027720 + 0x27708);
}


// ==== FUN_00027724 @ 00027724 ====

void FUN_00027724(int *param_1)

{
  FUN_000276bc((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_0002775c @ 0002775c ====

int FUN_0002775c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(0x1c);
  FUN_00027988(piVar1,param_1,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)piVar1 + *(int *)(*piVar1 + -0xc);
  }
  return iVar2;
}


// ==== FUN_000277cc @ 000277cc ====

undefined4 FUN_000277cc(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002775c((int)param_1 + *(int *)(*param_1 + -0xc));
  return uVar1;
}


// ==== FUN_0002780c @ 0002780c ====

void FUN_0002780c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00027868 + 0x27828;
  uVar1 = __cxa_allocate_exception(0x1c);
  FUN_00025b48(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(iVar2 + DAT_0002786c),DAT_00027870 + 0x27858);
}


// ==== FUN_00027874 @ 00027874 ====

void FUN_00027874(int *param_1)

{
  FUN_0002780c((int)param_1 + *(int *)(*param_1 + -0x10));
  return;
}


// ==== FUN_000278ac @ 000278ac ====

int * FUN_000278ac(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00027980 + 0x278d0;
  FUN_0001ade0(param_1 + 6);
  FUN_00025f18(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00027984) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00027984) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00027984) + 0x44;
  FUN_00013e0c(param_1,param_2);
  return param_1;
}


// ==== FUN_00027988 @ 00027988 ====

int * FUN_00027988(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00027a5c + 0x279ac;
  FUN_0001ade0(param_1 + 6);
  FUN_00025abc(param_1,param_2);
  *param_1 = *(int *)(iVar1 + DAT_00027a60) + 0xc;
  param_1[5] = *(int *)(iVar1 + DAT_00027a60) + 0x24;
  param_1[6] = *(int *)(iVar1 + DAT_00027a60) + 0x44;
  FUN_00013e0c(param_1,param_2);
  return param_1;
}


// ==== FUN_00027a7c @ 00027a7c ====

/* WARNING: Removing unreachable block (ram,0x00027b84) */
/* WARNING: Removing unreachable block (ram,0x00027b90) */
/* WARNING: Removing unreachable block (ram,0x00027ae4) */
/* WARNING: Removing unreachable block (ram,0x00027af0) */
/* WARNING: Removing unreachable block (ram,0x00027c7c) */
/* WARNING: Removing unreachable block (ram,0x00027c88) */

undefined4 FUN_00027a7c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_r4;
  bool bVar3;
  undefined1 auStack_18 [8];
  
  piVar1 = (int *)FUN_00018aac(param_1);
  DataMemoryBarrier(0xf);
  DataMemoryBarrier(0xf);
  if (*piVar1 == 2) {
    return 0;
  }
  FUN_00014b28(auStack_18,DAT_00027d74 + 0x27b34);
  DataMemoryBarrier(0xf);
  DataMemoryBarrier(0xf);
  if (*piVar1 != 2) {
    do {
      DataMemoryBarrier(0xf);
      do {
        iVar2 = *piVar1;
        bVar3 = iVar2 == 0;
        if (!bVar3) goto LAB_00027cbc;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = 1;
      bVar3 = true;
LAB_00027cbc:
      DataMemoryBarrier(0xf);
      if (bVar3) {
        unaff_r4 = 1;
        goto LAB_00027d24;
      }
      if (iVar2 == 2) goto code_r0x00027cfc;
      pthread_cond_wait((pthread_cond_t *)(DAT_00027d78 + 0x27d10),
                        (pthread_mutex_t *)(DAT_00027d7c + 0x27d1c));
    } while( true );
  }
  bVar3 = true;
LAB_00027d30:
  FUN_00014ba8(auStack_18);
  if (bVar3) {
    return 0;
  }
  return unaff_r4;
code_r0x00027cfc:
  unaff_r4 = 0;
LAB_00027d24:
  bVar3 = false;
  goto LAB_00027d30;
}


// ==== FUN_00027d80 @ 00027d80 ====

/* WARNING: Removing unreachable block (ram,0x00027e1c) */

void FUN_00027d80(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_10 [8];
  
  puVar1 = (undefined4 *)FUN_00018aac(param_1);
  FUN_00014b28(auStack_10,DAT_00027e64 + 0x27db0);
  DataMemoryBarrier(0xf);
  *puVar1 = 2;
  DataMemoryBarrier(0xf);
  FUN_00014ba8(auStack_10);
  pthread_cond_broadcast((pthread_cond_t *)(DAT_00027e68 + 0x27e50));
  return;
}


// ==== FUN_00027e6c @ 00027e6c ====

/* WARNING: Removing unreachable block (ram,0x00027f08) */

void FUN_00027e6c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_10 [8];
  
  puVar1 = (undefined4 *)FUN_00018aac(param_1);
  FUN_00014b28(auStack_10,DAT_00027f50 + 0x27e9c);
  DataMemoryBarrier(0xf);
  *puVar1 = 0;
  DataMemoryBarrier(0xf);
  FUN_00014ba8(auStack_10);
  pthread_cond_broadcast((pthread_cond_t *)(DAT_00027f54 + 0x27f3c));
  return;
}


// ==== FUN_00027f58 @ 00027f58 ====

void FUN_00027f58(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    FUN_00018aac(DAT_00028020 + 0x27f94);
    FUN_00018aac(DAT_00028024 + 0x27fa4);
    FUN_00018aac(DAT_00028028 + 0x27fb4);
    FUN_00018aac(DAT_0002802c + 0x27fc4);
    FUN_00018aac(DAT_00028030 + 0x27fd4);
    FUN_00018aac(DAT_00028034 + 0x27fe4);
    FUN_00018aac(DAT_00028038 + 0x27ff4);
    FUN_00018aac(DAT_0002803c + 0x28004);
    FUN_00018aac(DAT_00028040 + 0x28014);
  }
  return;
}


// ==== FUN_0002805c @ 0002805c ====

/* WARNING: Removing unreachable block (ram,0x0002809c) */

int * FUN_0002805c(int *param_1)

{
  *param_1 = *(int *)(DAT_000280b4 + 0x28078 + DAT_000280b8) + 8;
  FUN_00018aac(param_1);
  return param_1;
}


// ==== FUN_000280bc @ 000280bc ====

void * FUN_000280bc(void *param_1)

{
  FUN_0002805c(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_000280ec @ 000280ec ====

bool FUN_000280ec(int param_1,int param_2)

{
  return param_1 == param_2;
}


// ==== FUN_00028128 @ 00028128 ====

undefined4 FUN_00028128(int *param_1,int *param_2)

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


// ==== FUN_00028188 @ 00028188 ====

undefined4 FUN_00028188(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00028f2c();
  FUN_000143b4(param_1,param_2,uVar1);
  return param_1;
}


// ==== FUN_000281c4 @ 000281c4 ====

undefined4 FUN_000281c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000143b4(param_1,param_3,param_2);
  return param_1;
}


// ==== FUN_000281f8 @ 000281f8 ====

undefined4 FUN_000281f8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_10 [8];
  
  (**(code **)(*param_1 + 0x10))(auStack_10,param_1,param_2);
  uVar1 = FUN_00028128(auStack_10,param_3);
  return uVar1;
}


// ==== FUN_00028254 @ 00028254 ====

undefined4 FUN_00028254(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00018cc4(param_2);
  iVar2 = FUN_000280ec(param_1,uVar1);
  if ((iVar2 == 0) || (iVar2 = FUN_000143f8(param_2), iVar2 != param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_000282c0 @ 000282c0 ====

int * FUN_000282c0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00028304 + 0x282dc;
  FUN_00018aac(param_1);
  *param_1 = *(int *)(iVar1 + DAT_00028308) + 8;
  return param_1;
}


// ==== FUN_0002830c @ 0002830c ====

int * FUN_0002830c(int *param_1)

{
  FUN_000282c0(param_1);
  *param_1 = DAT_0002834c + 0x28340;
  return param_1;
}


// ==== FUN_00028350 @ 00028350 ====

int * FUN_00028350(int *param_1)

{
  FUN_000282c0(param_1);
  *param_1 = DAT_00028390 + 0x28384;
  return param_1;
}


// ==== FUN_00028e1c @ 00028e1c ====

undefined4 FUN_00028e1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00028f2c();
  (**(code **)(*piVar1 + 0xc))(param_1,piVar1,param_3);
  return param_1;
}


// ==== FUN_00028e68 @ 00028e68 ====

int FUN_00028e68(void)

{
  int iVar1;
  
  if (((*(uint *)(DAT_00028f0c + 0x28e7c) & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(DAT_00028f10 + 0x28e94), iVar1 != 0)) {
    FUN_00028350(DAT_00028f14 + 0x28ec0);
    __cxa_guard_release(DAT_00028f18 + 0x28ed0);
    __aeabi_atexit(DAT_00028f1c + 0x28ee0,DAT_00028f20 + 0x28eec,DAT_00028f24 + 0x28ef8);
  }
  return DAT_00028f28 + 0x28f08;
}


// ==== FUN_00028f2c @ 00028f2c ====

int FUN_00028f2c(void)

{
  int iVar1;
  
  if (((*(uint *)(DAT_00028fd0 + 0x28f40) & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(DAT_00028fd4 + 0x28f58), iVar1 != 0)) {
    FUN_0002830c(DAT_00028fd8 + 0x28f84);
    __cxa_guard_release(DAT_00028fdc + 0x28f94);
    __aeabi_atexit(DAT_00028fe0 + 0x28fa4,DAT_00028fe4 + 0x28fb0,DAT_00028fe8 + 0x28fbc);
  }
  return DAT_00028fec + 0x28fcc;
}


// ==== FUN_00028ff0 @ 00028ff0 ====

/* WARNING: Removing unreachable block (ram,0x0002902c) */

int * FUN_00028ff0(int *param_1)

{
  *param_1 = DAT_00029044 + 0x29018;
  FUN_0002805c(param_1);
  return param_1;
}


// ==== FUN_00029048 @ 00029048 ====

void * FUN_00029048(void *param_1)

{
  FUN_00028ff0(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== FUN_00029078 @ 00029078 ====

/* WARNING: Removing unreachable block (ram,0x000290b4) */

int * FUN_00029078(int *param_1)

{
  *param_1 = DAT_000290cc + 0x290a0;
  FUN_0002805c(param_1);
  return param_1;
}


// ==== FUN_000290d0 @ 000290d0 ====

void * FUN_000290d0(void *param_1)

{
  FUN_00029078(param_1);
  operator_delete(param_1);
  return param_1;
}


// ==== __libc_init @ 00033000 ====

/* WARNING: Control flow encountered bad instruction data */

void __libc_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_atexit @ 00033004 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr1 @ 00033008 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator<< @ 0003300c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator<< @ 00033010 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== endl<char,std::char_traits<char>> @ 00033018 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __gxx_personality_v0 @ 0003301c ====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== getopt_long @ 00033020 ====

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== daemon @ 00033024 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== lab126_daemon_checksingleton @ 00033028 ====

/* WARNING: Control flow encountered bad instruction data */

void lab126_daemon_checksingleton(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _llog_set_ident @ 0003302c ====

/* WARNING: Control flow encountered bad instruction data */

void _llog_set_ident(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== allocator @ 00033030 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== string @ 00033034 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::string(string *this,char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~string @ 00033038 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::~string(string *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~allocator @ 0003303c ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== signal @ 00033040 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _llogmsg_print @ 00033044 ====

/* WARNING: Control flow encountered bad instruction data */

void _llogmsg_print(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== lab126_daemon_cleansingleton @ 00033048 ====

/* WARNING: Control flow encountered bad instruction data */

void lab126_daemon_cleansingleton(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_end_cleanup @ 0003304c ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== Init @ 00033054 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_atexit @ 00033058 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~Init @ 0003305c ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::~Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_unwind_cpp_pr0 @ 00033060 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator.delete @ 00033064 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_call_unexpected @ 00033068 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_call_unexpected(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== runtime_error @ 0003306c ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== string @ 00033070 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::string(string *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~runtime_error @ 00033074 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== empty @ 00033078 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::empty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== what @ 0003307c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator= @ 00033080 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::operator=(string *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator+= @ 00033084 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::operator+=(string *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator+= @ 00033088 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::operator+=(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== c_str @ 0003308c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::c_str(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_begin_catch @ 00033090 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_end_catch @ 00033094 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_mutex_lock @ 00033098 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_mutex_unlock @ 0003309c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_mutex_init @ 000330a0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_mutex_destroy @ 000330a4 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_cond_init @ 000330a8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_cond_destroy @ 000330ac ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_allocate_exception @ 000330b0 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_throw @ 000330b4 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_cond_wait @ 000330b8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_cond_signal @ 000330bc ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== malloc @ 000330c0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== free @ 000330c4 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== fgetc @ 000330c8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== string @ 000330cc ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::string(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== LipcGetStringParam @ 000330d0 ====

/* WARNING: Control flow encountered bad instruction data */

void LipcGetStringParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== LipcGetErrorString @ 000330d4 ====

/* WARNING: Control flow encountered bad instruction data */

void LipcGetErrorString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== LipcGetEventSource @ 000330d8 ====

/* WARNING: Control flow encountered bad instruction data */

void LipcGetEventSource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== append @ 000330dc ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::append(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== LipcGetUInt64Param @ 000330e0 ====

/* WARNING: Control flow encountered bad instruction data */

void LipcGetUInt64Param(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== LipcSubscribeExt @ 000330e4 ====

/* WARNING: Control flow encountered bad instruction data */

void LipcSubscribeExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== LipcOpenEx @ 000330e8 ====

/* WARNING: Control flow encountered bad instruction data */

void LipcOpenEx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== LlogInitLogProperties @ 000330ec ====

/* WARNING: Control flow encountered bad instruction data */

void LlogInitLogProperties(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== fopen @ 000330f0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __errno @ 000330f4 ====

/* WARNING: Control flow encountered bad instruction data */

void __errno(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strerror @ 000330f8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== fclose @ 000330fc ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strcasecmp @ 00033104 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator.new @ 00033108 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~exception @ 00033110 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_free_exception @ 00033118 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== append @ 0003311c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::append(string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _Rb_tree_increment @ 00033120 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== setjmp @ 00033124 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setjmp(__jmp_buf_tag *__env)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== longjmp @ 00033128 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== memcpy @ 0003312c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_guard_acquire @ 00033130 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_guard_release @ 00033134 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_rethrow @ 00033138 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== compare @ 0003313c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::compare(string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== memcmp @ 00033140 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _Rb_tree_insert_and_rebalance @ 00033144 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __throw_bad_alloc @ 00033148 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _Rb_tree_decrement @ 0003314c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== memset @ 00033150 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_ul2d @ 00033154 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_ul2d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== memmove @ 00033158 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_pure_virtual @ 0003315c ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator== @ 0003316c ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::type_info::operator==(type_info *this,type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator= @ 00033170 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::string::operator=(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== runtime_error @ 00033174 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~runtime_error @ 00033178 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== g_hash_table_new @ 0003317c ====

/* WARNING: Control flow encountered bad instruction data */

void g_hash_table_new(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== g_hash_table_insert @ 00033180 ====

/* WARNING: Control flow encountered bad instruction data */

void g_hash_table_insert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== record_device_metric @ 00033184 ====

/* WARNING: Control flow encountered bad instruction data */

void record_device_metric(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== g_hash_table_destroy @ 00033188 ====

/* WARNING: Control flow encountered bad instruction data */

void g_hash_table_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== g_str_hash @ 0003318c ====

/* WARNING: Control flow encountered bad instruction data */

void g_str_hash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== g_str_equal @ 00033190 ====

/* WARNING: Control flow encountered bad instruction data */

void g_str_equal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== size @ 00033194 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== data @ 00033198 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __aeabi_ldivmod @ 000331a8 ====

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_ldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== clock_gettime @ 000331ac ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_cond_timedwait @ 000331b0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_cond_broadcast @ 000331b4 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~bad_alloc @ 000331b8 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~bad_exception @ 000331bc ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strlen @ 000331c0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== locale @ 000331c4 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::locale::locale(locale *this,locale *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~locale @ 000331c8 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::locale::~locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~bad_cast @ 000331cc ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_key_create @ 000331d0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_getspecific @ 000331d4 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_setspecific @ 000331d8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_create @ 000331dc ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_attr_getdetachstate @ 000331e0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_getdetachstate(pthread_attr_t *__attr,int *__detachstate)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_join @ 000331e4 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== pthread_detach @ 000331e8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_detach(pthread_t __th)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== nanosleep @ 000331ec ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== sched_yield @ 000331f0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_yield(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== sysconf @ 000331f4 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ifstream @ 000331f8 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ifstream::ifstream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== locale @ 000331fc ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::locale::locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== getline<char,std::char_traits<char>,std::allocator<char>> @ 00033200 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

istream * std::getline<char,std::char_traits<char>,std::allocator<char>>
                    (istream *param_1,string *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator.cast.to.void* @ 00033204 ====

/* WARNING: Control flow encountered bad instruction data */

void * __thiscall std::ios::operator_cast_to_void_(ios *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== ~ifstream @ 00033208 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ifstream::~ifstream(ifstream *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __stack_chk_fail @ 0003320c ====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __cxa_guard_abort @ 00033214 ====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator.delete[] @ 00033218 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete__(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator.new[] @ 0003321c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __throw_length_error @ 00033224 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _Rb_tree_rebalance_for_erase @ 00033228 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== erase @ 0003322c ====

/* WARNING: Control flow encountered bad instruction data */

void std::string::erase(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== length @ 00033230 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::length(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== begin @ 00033234 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::begin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== end @ 00033238 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::end(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== use_facet<std::ctype<char>> @ 0003323c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ctype * std::use_facet<std::ctype<char>>(locale *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _Rb_tree_increment @ 00033240 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== classic @ 00033244 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::locale::classic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator== @ 00033248 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::locale::operator==(locale *this,locale *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== use_facet<std::numpunct<char>> @ 0003324c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

numpunct * std::use_facet<std::numpunct<char>>(locale *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== grouping @ 00033250 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::numpunct<char>::grouping(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== operator[] @ 00033254 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::operator[](uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== thousands_sep @ 00033258 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::numpunct<char>::thousands_sep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== strcmp @ 0003325c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _Alloc_hider @ 00033260 ====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::string::_Alloc_hider::_Alloc_hider(_Alloc_hider *this,char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _S_empty_rep @ 00033264 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::_S_empty_rep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _M_refdata @ 00033268 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::_Rep::_M_refdata(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== __throw_logic_error @ 0003326c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_logic_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _S_create @ 00033270 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::_Rep::_S_create(uint param_1,uint param_2,allocator *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _S_copy_chars @ 00033274 ====

/* WARNING: Control flow encountered bad instruction data */

void std::string::_S_copy_chars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _M_set_length_and_sharable @ 00033278 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::_Rep::_M_set_length_and_sharable(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== _M_destroy @ 0003327c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::string::_Rep::_M_destroy(allocator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== what @ 00033280 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::bad_exception::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== what @ 00033284 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::bad_alloc::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


