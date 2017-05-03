namespace std {
   typedef long unsigned int size_t;
   typedef long int ptrdiff_t;
   typedef decltype(nullptr) nullptr_t;
 }
 namespace std {
   inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
 }
 typedef long int ptrdiff_t;
 typedef long unsigned int size_t;
 typedef signed char int8_t;
  typedef int int32_t;
  typedef unsigned char uint8_t;
  typedef unsigned int uint32_t;
  typedef unsigned long int uint64_t;
 typedef unsigned char uint_fast8_t;
  typedef unsigned long int uintptr_t;
 extern "C" {
  typedef unsigned char __u_char;
 typedef unsigned short int __u_short;
 typedef unsigned int __u_int;
 typedef unsigned long int __u_long;
 typedef signed long int __int64_t;
 typedef unsigned long int __uint64_t;
 typedef long int __quad_t;
 typedef unsigned long int __u_quad_t;
  typedef unsigned long int __dev_t;
 typedef unsigned int __uid_t;
 typedef unsigned int __gid_t;
 typedef unsigned long int __ino_t;
 typedef unsigned long int __ino64_t;
 typedef unsigned int __mode_t;
 typedef unsigned long int __nlink_t;
 typedef long int __off_t;
 typedef long int __off64_t;
 typedef int __pid_t;
 typedef struct { int __val[2]; }
 __fsid_t;
 typedef long int __clock_t;
 typedef unsigned long int __rlim_t;
 typedef __off64_t __loff_t;
 typedef __quad_t *__qaddr_t;
 typedef char *__caddr_t;
 typedef long int __intptr_t;
 typedef unsigned int __socklen_t;
  typedef struct {   int __count;   union   {     unsigned int __wch;     char __wchb[4];   } __value; }
 __mbstate_t;
  struct _IO_jump_t;
 struct _IO_FILE;
  }
 extern "C" {
  typedef struct   {     int quot;     int rem;   }
 div_t;
 typedef struct   {     long int quot;     long int rem;   }
 ldiv_t;
 __extension__ typedef struct   {     long long int quot;     long long int rem;   }
 lldiv_t;
  typedef struct __locale_struct {   struct __locale_data *__locales[13];   const unsigned short int *__ctype_b;   const int *__ctype_tolower;   const int *__ctype_toupper;   const char *__names[13]; }
 *__locale_t;
 typedef __locale_t locale_t;
  extern "C" { typedef __u_char u_char; typedef __u_short u_short; typedef __u_int u_int; typedef __u_long u_long; typedef __quad_t quad_t; typedef __u_quad_t u_quad_t; typedef __fsid_t fsid_t; typedef __loff_t loff_t; typedef __ino_t ino_t; typedef __ino64_t ino64_t; typedef __dev_t dev_t; typedef __gid_t gid_t; typedef __mode_t mode_t; typedef __nlink_t nlink_t; typedef __uid_t uid_t;  extern "C" {  }  typedef unsigned long int pthread_t; union pthread_attr_t {   char __size[56];   long int __align; }; typedef union pthread_attr_t pthread_attr_t; typedef struct __pthread_internal_list {   struct __pthread_internal_list *__prev;   struct __pthread_internal_list *__next; } __pthread_list_t;  typedef union {   struct __pthread_mutex_s   {     int __lock;     unsigned int __count;     int __owner;     unsigned int __nusers;     int __kind;     short __spins;     short __elision;     __pthread_list_t __list;    } __data;   char __size[40];   long int __align; } pthread_mutex_t; typedef union {   char __size[4];   int __align; } pthread_mutexattr_t; typedef union {   struct   {     int __lock;     unsigned int __futex;     __extension__ unsigned long long int __total_seq;     __extension__ unsigned long long int __wakeup_seq;     __extension__ unsigned long long int __woken_seq;     void *__mutex;     unsigned int __nwaiters;     unsigned int __broadcast_seq;   } __data;   char __size[48];   __extension__ long long int __align; } pthread_cond_t; typedef union {   char __size[4];   int __align; } pthread_condattr_t; typedef unsigned int pthread_key_t; typedef int pthread_once_t; typedef union {   struct   {     int __lock;     unsigned int __nr_readers;     unsigned int __readers_wakeup;     unsigned int __writer_wakeup;     unsigned int __nr_readers_queued;     unsigned int __nr_writers_queued;     int __writer;     int __shared;     signed char __rwelision;     unsigned char __pad1[7];     unsigned long int __pad2;     unsigned int __flags;   } __data;    char __size[56];   long int __align; } pthread_rwlock_t; typedef union {   char __size[8];   long int __align; } pthread_rwlockattr_t; typedef volatile int pthread_spinlock_t; typedef union {   char __size[32];   long int __align; } pthread_barrier_t; typedef union {   char __size[4];   int __align; } pthread_barrierattr_t;  }
 extern int rand (void) throw ();
 extern void srand (unsigned int __seed) throw ();
 ;
 ;
 extern void abort (void) throw () __attribute__ ((__noreturn__));
 ;
 namespace std __attribute__ ((__visibility__ ("default"))) {   using ::div_t;   using ::ldiv_t;   using ::abort;                                                               using ::rand;      using ::srand;                                }
  namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {   using ::lldiv_t;                              }
  __attribute__ ((__unused__)) static __attribute__ ((cold)) __attribute__((noinline)) void MOZ_ReportAssertionFailure(const char* aStr, const char* aFilename, int aLine) ;
 __attribute__ ((__unused__)) static __attribute__ ((cold)) __attribute__((noinline)) void MOZ_ReportCrash(const char* aStr, const char* aFilename, int aLine) ;
  }
 typedef unsigned int wint_t;
 typedef __mbstate_t mbstate_t;
 extern "C" {
 struct tm;
  ;
 ;
 extern size_t wcslen (const wchar_t *__s) throw () __attribute__ ((__pure__));
  extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)      throw () __attribute__ ((__pure__));
 extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)      throw () __attribute__ ((__pure__));
 extern wchar_t *wmemcpy (wchar_t *__restrict __s1,     const wchar_t *__restrict __s2, size_t __n) throw ();
 extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)      throw ();
 extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) throw ();
 ;
 ;
  }
 namespace mozilla {
 template<typename> struct RemoveCV;
 template<typename> struct AddRvalueReference;
  template<typename T> typename AddRvalueReference<T>::Type DeclVal();
 template<typename T, T Value> struct IntegralConstant {   static constexpr T value = Value;   typedef T ValueType;   typedef IntegralConstant<T, Value> Type; };
 typedef IntegralConstant<bool, true> TrueType;
 typedef IntegralConstant<bool, false> FalseType;
 namespace detail { template<typename T> struct IsVoidHelper : FalseType {}; template<> struct IsVoidHelper<void> : TrueType {}; }
  template<typename T> struct IsVoid : detail::IsVoidHelper<typename RemoveCV<T>::Type> {};
 namespace detail { template <typename T> struct IsIntegralHelper : FalseType {}; template<> struct IsIntegralHelper<char> : TrueType {}; template<> struct IsIntegralHelper<signed char> : TrueType {}; template<> struct IsIntegralHelper<unsigned char> : TrueType {}; template<> struct IsIntegralHelper<short> : TrueType {}; template<> struct IsIntegralHelper<unsigned short> : TrueType {}; template<> struct IsIntegralHelper<int> : TrueType {}; template<> struct IsIntegralHelper<unsigned int> : TrueType {}; template<> struct IsIntegralHelper<long> : TrueType {}; template<> struct IsIntegralHelper<unsigned long> : TrueType {}; template<> struct IsIntegralHelper<long long> : TrueType {}; template<> struct IsIntegralHelper<unsigned long long> : TrueType {}; template<> struct IsIntegralHelper<bool> : TrueType {}; template<> struct IsIntegralHelper<wchar_t> : TrueType {}; template<> struct IsIntegralHelper<char16_t> : TrueType {}; }
  template<typename T> struct IsIntegral : detail::IsIntegralHelper<typename RemoveCV<T>::Type> {};
 template<typename T, typename U> struct IsSame;
 namespace detail { template<typename T> struct IsFloatingPointHelper   : IntegralConstant<bool,                      IsSame<T, float>::value ||                      IsSame<T, double>::value ||                      IsSame<T, long double>::value> {}; }
  template<typename T> struct IsFloatingPoint   : detail::IsFloatingPointHelper<typename RemoveCV<T>::Type> {};
 namespace detail { template<typename T> struct IsArrayHelper : FalseType {}; template<typename T, decltype(sizeof(1)) N> struct IsArrayHelper<T[N]> : TrueType {}; template<typename T> struct IsArrayHelper<T[]> : TrueType {}; }
  template<typename T> struct IsArray : detail::IsArrayHelper<typename RemoveCV<T>::Type> {};
 namespace detail { template<typename T> struct IsFunPtr; template<typename> struct IsFunPtr   : public FalseType {}; template<typename Result, typename... ArgTypes> struct IsFunPtr<Result(*)(ArgTypes...)>   : public TrueType {}; };
  template<typename T> struct IsFunction   : public detail::IsFunPtr<typename RemoveCV<T>::Type *> {};
 namespace detail { template<typename T> struct IsPointerHelper : FalseType {}; template<typename T> struct IsPointerHelper<T*> : TrueType {}; }
  template<typename T> struct IsPointer : detail::IsPointerHelper<typename RemoveCV<T>::Type> {};
  template<typename T> struct IsLvalueReference : FalseType {};
 template<typename T> struct IsLvalueReference<T&> : TrueType {};
  template<typename T> struct IsRvalueReference : FalseType {};
 template<typename T> struct IsRvalueReference<T&&> : TrueType {};
 namespace detail { template<typename T> struct IsEnumHelper   : IntegralConstant<bool, __is_enum(T)> {}; }
  template<typename T> struct IsEnum   : detail::IsEnumHelper<typename RemoveCV<T>::Type> {};
 namespace detail { template<typename T> struct IsClassHelper   : IntegralConstant<bool, __is_class(T)> {}; }
  template<typename T> struct IsClass   : detail::IsClassHelper<typename RemoveCV<T>::Type> {};
  template<typename T> struct IsReference   : IntegralConstant<bool,                      IsLvalueReference<T>::value || IsRvalueReference<T>::value> {};
  template<typename T> struct IsConst : FalseType {};
 template<typename T> struct IsConst<const T> : TrueType {};
  template<typename T> struct IsVolatile : FalseType {};
 template<typename T> struct IsVolatile<volatile T> : TrueType {};
  template<typename T> struct IsPod : public FalseType {};
 template<typename T> struct IsPod<T*> : TrueType {};
 namespace detail { template<typename T> struct IsEmptyHelper   : IntegralConstant<bool, IsClass<T>::value && __is_empty(T)> {}; }
  template<typename T> struct IsEmpty : detail::IsEmptyHelper<typename RemoveCV<T>::Type> {};
  template<typename T, typename U> struct IsSame : FalseType {};
 template<typename T> struct IsSame<T, T> : TrueType {};
 namespace detail { template<class Base, class Derived> struct BaseOfTester : IntegralConstant<bool, __is_base_of(Base, Derived)> {};  }
  template<class Base, class Derived> struct IsBaseOf   : IntegralConstant<bool, detail::BaseOfTester<Base, Derived>::value> {};
 namespace detail { template<typename From, typename To> struct ConvertibleTester { private:   template<typename To1>   static char test_helper(To1);   template<typename From1, typename To1>   static decltype(test_helper<To1>(DeclVal<From1>())) test(int);   template<typename From1, typename To1>   static int test(...); public:   static const bool value =     sizeof(test<From, To>(0)) == sizeof(char); }; }
  template<typename From, typename To> struct IsConvertible   : IntegralConstant<bool, detail::ConvertibleTester<From, To>::value> {};
  template<typename T> struct RemoveConst {   typedef T Type; };
 template<typename T> struct RemoveConst<const T> {   typedef T Type; };
  template<typename T> struct RemoveReference {   typedef T Type; };
 template<typename T> struct RemoveReference<T&> {   typedef T Type; };
 template<typename T> struct RemoveReference<T&&> {   typedef T Type; };
  template<typename T> struct RemoveExtent {   typedef T Type; };
  template<typename T> struct AddPointer {   typedef typename RemoveReference<T>::Type* Type; };
  template<bool B, typename T> struct EnableIf {};
 template<typename T> struct EnableIf<true, T> {   typedef T Type; };
 template<bool Condition, typename A, typename B> struct Conditional {   typedef A Type; };
 template<class A, class B> struct Conditional<false, A, B> {   typedef B Type; };
 namespace detail { template<typename U,          bool IsArray = IsArray<U>::value,          bool IsFunction = IsFunction<U>::value> struct DecaySelector; template<typename U> struct DecaySelector<U, false, false> {   typedef typename RemoveCV<U>::Type Type; }; template<typename U> struct DecaySelector<U, true, false> {   typedef typename RemoveExtent<U>::Type* Type; }; template<typename U> struct DecaySelector<U, false, true> {   typedef typename AddPointer<U>::Type Type; }; };
 namespace detail { template<typename T> struct AssertionConditionType {   typedef typename RemoveReference<T>::Type ValueT;   static_assert(!IsArray<ValueT>::value,                 "Expected boolean assertion condition, got an array or a "                 "string!");   static_assert(!IsFunction<ValueT>::value,                 "Expected boolean assertion condition, got a function! Did "                 "you intend to call that function?");   static_assert(!IsFloatingPoint<ValueT>::value,                 "It's often a bad idea to assert that a floating-point number "                 "is nonzero, because such assertions tend to intermittently "                 "fail. Shouldn't your code gracefully handle this case instead "                 "of asserting? Anyway, if you really want to do that, write an "                 "explicit boolean condition, like !!x or x!=0.");   static const bool isValid = true; }; }
 }
 namespace mozilla {
   ;
 template<typename T>  T&& Forward(typename RemoveReference<T>::Type& aX) ;
  ;
 namespace detail {  class GuardObjectNotifier { private:   bool* mStatementDone; public:          }; class GuardObjectNotificationReceiver { private:   bool mStatementDone; public:          }; }
 }
 template<class T> struct already_AddRefed {
     private:   T* mRawPtr;
 };
  namespace mozilla {
 }
  template <class T> class RefPtr {
 private:       private:   T* mRawPtr;
 };
  namespace mozilla {
   ;
 template<typename T> class LinkedListElement;
 namespace detail { template<typename T> struct LinkedListElementTraits {   typedef T* RawType;   typedef const T* ConstRawType;   typedef T* ClientType;   typedef const T* ConstClientType;       }; template<typename T> struct LinkedListElementTraits<RefPtr<T>> {   typedef T* RawType;   typedef const T* ConstRawType;   typedef RefPtr<T> ClientType;   typedef RefPtr<const T> ConstClientType;       }; }
 template<typename T> class LinkedList;
 template<typename T> class LinkedListElement {   typedef typename detail::LinkedListElementTraits<T> Traits;   typedef typename Traits::RawType RawType;   typedef typename Traits::ConstRawType ConstRawType;   typedef typename Traits::ClientType ClientType;   typedef typename Traits::ConstClientType ConstClientType;  private:   LinkedListElement* mNext;   LinkedListElement* mPrev;   const bool mIsSentinel; public:                                              private:   friend class LinkedList<T>;   friend struct detail::LinkedListElementTraits<T>;   enum class NodeKind {     Normal,     Sentinel   };                         };
 template<typename T> class LinkedList { private:   typedef typename detail::LinkedListElementTraits<T> Traits;   typedef typename Traits::RawType RawType;   typedef typename Traits::ConstRawType ConstRawType;   typedef typename Traits::ClientType ClientType;   typedef typename Traits::ConstClientType ConstClientType;   LinkedListElement<T> sentinel; public:   class Iterator {     RawType mCurrent;   public:                       };                                                          private:   friend class LinkedListElement<T>;          };
 template <typename T> class AutoCleanLinkedList : public LinkedList<T> { public:    };
 }
 namespace std {
   typedef unsigned short uint_least16_t;
   typedef unsigned int uint_least32_t;
 }
  namespace std __attribute__ ((__visibility__ ("default"))) {
    template<typename _Tp, _Tp __v>     struct integral_constant     {       static constexpr _Tp value = __v;       typedef _Tp value_type;       typedef integral_constant<_Tp, __v> type;              constexpr value_type operator()() const { return value; }     };
   template<typename _Tp, _Tp __v>     constexpr _Tp integral_constant<_Tp, __v>::value;
   typedef integral_constant<bool, true> true_type;
   typedef integral_constant<bool, false> false_type;
   template<bool __v>     using __bool_constant = integral_constant<bool, __v>;
    template<bool, typename, typename>     struct conditional;
   template<typename...>     struct __or_;
   template<>     struct __or_<>     : public false_type     { };
   template<typename _B1>     struct __or_<_B1>     : public _B1     { };
   template<typename _B1, typename _B2>     struct __or_<_B1, _B2>     : public conditional<_B1::value, _B1, _B2>::type     { };
   template<typename _B1, typename _B2, typename _B3, typename... _Bn>     struct __or_<_B1, _B2, _B3, _Bn...>     : public conditional<_B1::value, _B1, __or_<_B2, _B3, _Bn...>>::type     { };
   template<typename...>     struct __and_;
   template<typename _B1, typename _B2, typename _B3, typename... _Bn>     struct __and_<_B1, _B2, _B3, _Bn...>     : public conditional<_B1::value, __and_<_B2, _B3, _Bn...>, _B1>::type     { };
   template<typename _Pp>     struct __not_     : public integral_constant<bool, !_Pp::value>     { };
   struct __nonesuch {                       };
    template<typename _Tp>     struct __success_type     { typedef _Tp type; };
   struct __failure_type   { };
   template<typename>     struct remove_cv;
   template<typename>     struct __is_void_helper     : public false_type { };
   template<>     struct __is_void_helper<void>     : public true_type { };
   template<typename _Tp>     struct is_void     : public __is_void_helper<typename remove_cv<_Tp>::type>::type     { };
   template<typename>     struct __is_integral_helper     : public false_type { };
   template<>     struct __is_integral_helper<bool>     : public true_type { };
   template<>     struct __is_integral_helper<unsigned short>     : public true_type { };
   template<>     struct __is_integral_helper<int>     : public true_type { };
   template<>     struct __is_integral_helper<unsigned int>     : public true_type { };
   template<>     struct __is_integral_helper<long>     : public true_type { };
    template<typename _Tp>     struct is_integral     : public __is_integral_helper<typename remove_cv<_Tp>::type>::type     { };
   template<typename>     struct __is_floating_point_helper     : public false_type { };
   template<>     struct __is_floating_point_helper<float>     : public true_type { };
   template<>     struct __is_floating_point_helper<double>     : public true_type { };
   template<>     struct __is_floating_point_helper<long double>     : public true_type { };
    template<typename _Tp>     struct is_floating_point     : public __is_floating_point_helper<typename remove_cv<_Tp>::type>::type     { };
   template<typename>     struct is_array     : public false_type { };
   template<typename _Tp, std::size_t _Size>     struct is_array<_Tp[_Size]>     : public true_type { };
   template<typename _Tp>     struct is_array<_Tp[]>     : public true_type { };
   template<typename>     struct __is_pointer_helper     : public false_type { };
   template<typename _Tp>     struct __is_pointer_helper<_Tp*>     : public true_type { };
   template<typename _Tp>     struct is_pointer     : public __is_pointer_helper<typename remove_cv<_Tp>::type>::type     { };
   template<typename>     struct is_lvalue_reference     : public false_type { };
   template<typename _Tp>     struct is_lvalue_reference<_Tp&>     : public true_type { };
   template<typename>     struct is_rvalue_reference     : public false_type { };
   template<typename _Tp>     struct is_rvalue_reference<_Tp&&>     : public true_type { };
   template<typename>     struct is_function;
   template<typename>     struct __is_member_object_pointer_helper     : public false_type { };
   template<typename _Tp, typename _Cp>     struct __is_member_object_pointer_helper<_Tp _Cp::*>     : public integral_constant<bool, !is_function<_Tp>::value> { };
   template<typename _Tp>     struct is_member_object_pointer     : public __is_member_object_pointer_helper<     typename remove_cv<_Tp>::type>::type     { };
   template<typename>     struct __is_member_function_pointer_helper     : public false_type { };
   template<typename _Tp, typename _Cp>     struct __is_member_function_pointer_helper<_Tp _Cp::*>     : public integral_constant<bool, is_function<_Tp>::value> { };
   template<typename _Tp>     struct is_member_function_pointer     : public __is_member_function_pointer_helper<     typename remove_cv<_Tp>::type>::type     { };
   template<typename _Tp>     struct is_enum     : public integral_constant<bool, __is_enum(_Tp)>     { };
   template<typename>     struct __is_null_pointer_helper     : public false_type { };
   template<>     struct __is_null_pointer_helper<std::nullptr_t>     : public true_type { };
   template<typename _Tp>     struct is_null_pointer     : public __is_null_pointer_helper<typename remove_cv<_Tp>::type>::type     { };
   template<typename _Tp>     struct __is_nullptr_t     : public is_null_pointer<_Tp>     { };
   template<typename _Tp>     struct is_reference     : public __or_<is_lvalue_reference<_Tp>,                    is_rvalue_reference<_Tp>>::type     { };
   template<typename _Tp>     struct is_arithmetic     : public __or_<is_integral<_Tp>, is_floating_point<_Tp>>::type     { };
   template<typename _Tp>     struct is_fundamental     : public __or_<is_arithmetic<_Tp>, is_void<_Tp>,      is_null_pointer<_Tp>>::type     { };
   template<typename _Tp>     struct is_object     : public __not_<__or_<is_function<_Tp>, is_reference<_Tp>,                           is_void<_Tp>>>::type     { };
   template<typename>     struct is_member_pointer;
   template<typename _Tp>     struct is_scalar     : public __or_<is_arithmetic<_Tp>, is_enum<_Tp>, is_pointer<_Tp>,                    is_member_pointer<_Tp>, is_null_pointer<_Tp>>::type     { };
   template<typename _Tp>     struct is_compound     : public integral_constant<bool, !is_fundamental<_Tp>::value> { };
   template<typename _Tp>     struct __is_member_pointer_helper     : public false_type { };
   template<typename _Tp, typename _Cp>     struct __is_member_pointer_helper<_Tp _Cp::*>     : public true_type { };
   template<typename _Tp>     struct is_member_pointer     : public __is_member_pointer_helper<typename remove_cv<_Tp>::type>::type     { };
   template<typename _Tp>     struct __is_referenceable     : public __or_<is_object<_Tp>, is_reference<_Tp>>::type     { };
   template<typename _Res, typename... _Args>     struct __is_referenceable<_Res(_Args...)>     : public true_type     { };
   template<typename _Res, typename... _Args>     struct __is_referenceable<_Res(_Args......)>     : public true_type     { };
   template<typename>     struct is_const     : public false_type { };
   template<typename _Tp>     struct is_const<_Tp const>     : public true_type { };
   template<typename>     struct is_volatile     : public false_type { };
   template<typename _Tp>     struct is_volatile<_Tp volatile>     : public true_type { };
   template<typename _Tp>     struct is_pod     : public integral_constant<bool, __is_pod(_Tp)>     { };
   template<typename _Tp>     struct is_literal_type     : public integral_constant<bool, __is_literal_type(_Tp)>     { };
   template<typename _Tp>     struct is_empty     : public integral_constant<bool, __is_empty(_Tp)>     { };
   template<typename _Tp,     bool = is_arithmetic<_Tp>::value>     struct __is_signed_helper     : public false_type { };
   template<typename _Tp>     struct __is_signed_helper<_Tp, true>     : public integral_constant<bool, _Tp(-1) < _Tp(0)>     { };
   template<typename _Tp>     struct is_signed     : public __is_signed_helper<_Tp>::type     { };
   template<typename _Tp>     struct is_unsigned     : public __and_<is_arithmetic<_Tp>, __not_<is_signed<_Tp>>>     { };
   template<typename>     struct add_rvalue_reference;
   template<typename _Tp>     typename add_rvalue_reference<_Tp>::type declval() noexcept;
   template<typename, unsigned = 0>     struct extent;
   template<typename>     struct remove_all_extents;
   template<typename _Tp>     struct __is_array_known_bounds     : public integral_constant<bool, (extent<_Tp>::value > 0)>     { };
   template<typename _Tp>     struct __is_array_unknown_bounds     : public __and_<is_array<_Tp>, __not_<extent<_Tp>>>     { };
   struct __do_is_destructible_impl   {     template<typename _Tp, typename = decltype(declval<_Tp&>().~_Tp())>       static true_type __test(int);     template<typename>       static false_type __test(...);   };
   template<typename _Tp>     struct __is_destructible_impl     : public __do_is_destructible_impl     {       typedef decltype(__test<_Tp>(0)) type;     };
   template<typename _Tp,            bool = __or_<is_void<_Tp>,                         __is_array_unknown_bounds<_Tp>,                         is_function<_Tp>>::value,            bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>     struct __is_destructible_safe;
   template<typename _Tp>     struct __is_destructible_safe<_Tp, false, false>     : public __is_destructible_impl<typename                remove_all_extents<_Tp>::type>::type     { };
   template<typename _Tp>     struct __is_destructible_safe<_Tp, true, false>     : public false_type { };
   template<typename _Tp>     struct __is_destructible_safe<_Tp, false, true>     : public true_type { };
   template<typename _Tp>     struct is_destructible     : public __is_destructible_safe<_Tp>::type     { };
   struct __do_is_default_constructible_impl   {     template<typename _Tp, typename = decltype(_Tp())>       static true_type __test(int);     template<typename>       static false_type __test(...);   };
   template<typename _Tp>     struct __is_default_constructible_impl     : public __do_is_default_constructible_impl     {       typedef decltype(__test<_Tp>(0)) type;     };
   template<typename _Tp>     struct __is_default_constructible_atom     : public __and_<__not_<is_void<_Tp>>,                     __is_default_constructible_impl<_Tp>>     { };
   template<typename _Tp, bool = is_array<_Tp>::value>     struct __is_default_constructible_safe;
   template<typename _Tp>     struct __is_default_constructible_safe<_Tp, true>     : public __and_<__is_array_known_bounds<_Tp>,       __is_default_constructible_atom<typename                       remove_all_extents<_Tp>::type>>     { };
   template<typename _Tp>     struct __is_default_constructible_safe<_Tp, false>     : public __is_default_constructible_atom<_Tp>::type     { };
   template<typename _Tp>     struct is_default_constructible     : public __is_default_constructible_safe<_Tp>::type     { };
   template<typename>     struct remove_reference;
   template<typename _From, typename _To, bool            = __not_<__or_<is_void<_From>,                           is_function<_From>>>::value>     struct __is_base_to_derived_ref;
   template<typename _Tp, typename... _Args>     struct is_constructible;
   template<typename _Tp, bool = __is_referenceable<_Tp>::value>     struct __is_copy_constructible_impl;
   template<typename _Tp>     struct __is_copy_constructible_impl<_Tp, false>     : public false_type { };
   template<typename _Tp>     struct __is_copy_constructible_impl<_Tp, true>     : public is_constructible<_Tp, const _Tp&>     { };
   template<typename _Tp>     struct is_copy_constructible     : public __is_copy_constructible_impl<_Tp>     { };
   template<typename _Tp, bool = __is_referenceable<_Tp>::value>     struct __is_move_constructible_impl;
   template<typename _Tp>     struct __is_move_constructible_impl<_Tp, false>     : public false_type { };
   template<typename _Tp>     struct __is_move_constructible_impl<_Tp, true>     : public is_constructible<_Tp, _Tp&&>     { };
   template<typename _Tp>     struct is_move_constructible     : public __is_move_constructible_impl<_Tp>     { };
   template<typename _Tp>     struct __is_nt_default_constructible_atom     : public integral_constant<bool, noexcept(_Tp())>     { };
   template<typename _Tp, bool = is_array<_Tp>::value>     struct __is_nt_default_constructible_impl;
   template<typename _Tp>     struct __is_nt_default_constructible_impl<_Tp, true>     : public __and_<__is_array_known_bounds<_Tp>,       __is_nt_default_constructible_atom<typename                       remove_all_extents<_Tp>::type>>     { };
   template<typename _Tp>     struct __is_nt_default_constructible_impl<_Tp, false>     : public __is_nt_default_constructible_atom<_Tp>     { };
   template<typename _Tp>     struct is_nothrow_default_constructible     : public __and_<is_default_constructible<_Tp>,                     __is_nt_default_constructible_impl<_Tp>>     { };
   template<typename _Tp, typename... _Args>     struct __is_nt_constructible_impl     : public integral_constant<bool, noexcept(_Tp(declval<_Args>()...))>     { };
   template<typename _Tp, typename _Arg>     struct __is_nt_constructible_impl<_Tp, _Arg>     : public integral_constant<bool,                                noexcept(static_cast<_Tp>(declval<_Arg>()))>     { };
   template<typename _Tp>     struct __is_nt_constructible_impl<_Tp>     : public is_nothrow_default_constructible<_Tp>     { };
   template<typename _Tp, typename... _Args>     struct is_nothrow_constructible     : public __and_<is_constructible<_Tp, _Args...>,       __is_nt_constructible_impl<_Tp, _Args...>>     { };
   template<typename _Tp, bool = __is_referenceable<_Tp>::value>     struct __is_nothrow_copy_constructible_impl;
   template<typename _Tp, bool = __is_referenceable<_Tp>::value>     struct __is_nothrow_move_constructible_impl;
   template<typename _Tp>     struct __is_nothrow_move_constructible_impl<_Tp, false>     : public false_type { };
   template<typename _Tp>     struct __is_nothrow_move_constructible_impl<_Tp, true>     : public is_nothrow_constructible<_Tp, _Tp&&>     { };
   template<typename _Tp>     struct is_nothrow_move_constructible     : public __is_nothrow_move_constructible_impl<_Tp>     { };
   template<typename _Tp, typename _Up>     class __is_assignable_helper     {       template<typename _Tp1, typename _Up1,         typename = decltype(declval<_Tp1>() = declval<_Up1>())>  static true_type  __test(int);       template<typename, typename>  static false_type  __test(...);     public:       typedef decltype(__test<_Tp, _Up>(0)) type;     };
   template<typename _Tp, typename _Up>     struct is_assignable       : public __is_assignable_helper<_Tp, _Up>::type     { };
   template<typename _Tp, bool = __is_referenceable<_Tp>::value>     struct __is_copy_assignable_impl;
   template<typename _Tp>     struct __is_copy_assignable_impl<_Tp, false>     : public false_type { };
   template<typename _Tp>     struct __is_copy_assignable_impl<_Tp, true>     : public is_assignable<_Tp&, const _Tp&>     { };
   template<typename _Tp>     struct is_copy_assignable     : public __is_copy_assignable_impl<_Tp>     { };
   template<typename _Tp, bool = __is_referenceable<_Tp>::value>     struct __is_move_assignable_impl;
   template<typename _Tp>     struct __is_move_assignable_impl<_Tp, false>     : public false_type { };
   template<typename _Tp>     struct __is_move_assignable_impl<_Tp, true>     : public is_assignable<_Tp&, _Tp&&>     { };
   template<typename _Tp>     struct is_move_assignable     : public __is_move_assignable_impl<_Tp>     { };
   template<typename _Tp, typename _Up>     struct __is_nt_assignable_impl     : public integral_constant<bool, noexcept(declval<_Tp>() = declval<_Up>())>     { };
   template<typename _Tp, typename _Up>     struct is_nothrow_assignable     : public __and_<is_assignable<_Tp, _Up>,       __is_nt_assignable_impl<_Tp, _Up>>     { };
   template<typename _Tp, bool = __is_referenceable<_Tp>::value>     struct __is_nt_copy_assignable_impl;
   template<typename _Tp>     struct __is_nt_copy_assignable_impl<_Tp, false>     : public false_type { };
   template<typename _Tp>     struct __is_nt_copy_assignable_impl<_Tp, true>     : public is_nothrow_assignable<_Tp&, const _Tp&>     { };
   template<typename _Tp>     struct is_nothrow_copy_assignable     : public __is_nt_copy_assignable_impl<_Tp>     { };
   template<typename _Tp, bool = __is_referenceable<_Tp>::value>     struct __is_nt_move_assignable_impl;
   template<typename _Tp>     struct __is_nt_move_assignable_impl<_Tp, false>     : public false_type { };
   template<typename _Tp>     struct __is_nt_move_assignable_impl<_Tp, true>     : public is_nothrow_assignable<_Tp&, _Tp&&>     { };
   template<typename _Tp>     struct is_nothrow_move_assignable     : public __is_nt_move_assignable_impl<_Tp>     { };
   template<typename _Tp, typename... _Args>     struct is_trivially_constructible     : public __and_<is_constructible<_Tp, _Args...>, integral_constant<bool,    __is_trivially_constructible(_Tp, _Args...)>>     { };
   template<typename _Tp>     struct is_trivially_default_constructible     : public is_trivially_constructible<_Tp>::type     { };
   struct __do_is_implicitly_default_constructible_impl   {     template <typename _Tp>     static void __helper(const _Tp&);     template <typename _Tp>     static true_type __test(const _Tp&,                             decltype(__helper<const _Tp&>({}))* = 0);     static false_type __test(...);   };
   template<typename _Tp>     struct __is_implicitly_default_constructible_impl       : public __do_is_implicitly_default_constructible_impl   {     typedef decltype(__test(declval<_Tp>())) type;   };
   template<typename _Tp>     struct __is_implicitly_default_constructible_safe       : public __is_implicitly_default_constructible_impl<_Tp>::type   { };
   template<typename, typename>     struct is_same     : public false_type { };
   template<typename _Tp>     struct is_same<_Tp, _Tp>     : public true_type { };
   template<typename _Base, typename _Derived>     struct is_base_of     : public integral_constant<bool, __is_base_of(_Base, _Derived)>     { };
   template<typename _From, typename _To,            bool = __or_<is_void<_From>, is_function<_To>,                         is_array<_To>>::value>     struct __is_convertible_helper     { typedef typename is_void<_To>::type type; };
   template<typename _From, typename _To>     class __is_convertible_helper<_From, _To, false>     {        template<typename _To1>  static void __test_aux(_To1);       template<typename _From1, typename _To1,         typename = decltype(__test_aux<_To1>(std::declval<_From1>()))>  static true_type  __test(int);       template<typename, typename>  static false_type  __test(...);     public:       typedef decltype(__test<_From, _To>(0)) type;     };
   template<typename _From, typename _To>     struct is_convertible     : public __is_convertible_helper<_From, _To>::type     { };
   template<typename _Tp>     struct remove_const     { typedef _Tp type; };
   template<typename _Tp>     struct remove_const<_Tp const>     { typedef _Tp type; };
   template<typename _Tp>     struct remove_volatile     { typedef _Tp type; };
   template<typename _Tp>     struct remove_volatile<_Tp volatile>     { typedef _Tp type; };
   template<typename _Tp>     struct remove_cv     {       typedef typename       remove_const<typename remove_volatile<_Tp>::type>::type type;     };
   template<typename _Tp>     struct add_const     { typedef _Tp const type; };
   template<typename _Tp>     struct add_volatile     { typedef _Tp volatile type; };
   template<typename _Unqualified, bool _IsConst, bool _IsVol>     struct __cv_selector;
   template<typename _Unqualified>     struct __cv_selector<_Unqualified, false, false>     { typedef _Unqualified __type; };
   template<typename _Unqualified>     struct __cv_selector<_Unqualified, false, true>     { typedef volatile _Unqualified __type; };
   template<typename _Unqualified>     struct __cv_selector<_Unqualified, true, false>     { typedef const _Unqualified __type; };
   template<typename _Unqualified>     struct __cv_selector<_Unqualified, true, true>     { typedef const volatile _Unqualified __type; };
   template<typename _Qualified, typename _Unqualified,     bool _IsConst = is_const<_Qualified>::value,     bool _IsVol = is_volatile<_Qualified>::value>     class __match_cv_qualifiers     {       typedef __cv_selector<_Unqualified, _IsConst, _IsVol> __match;     public:       typedef typename __match::__type __type;     };
   template<typename _Tp>     struct __make_unsigned     { typedef _Tp __type; };
   template<>     struct __make_unsigned<char>     { typedef unsigned char __type; };
   template<>     struct __make_unsigned<signed char>     { typedef unsigned char __type; };
   template<>     struct __make_unsigned<long long>     { typedef unsigned long long __type; };
   template<>     struct __make_unsigned<wchar_t> : __make_unsigned<int>     { };
    template<typename _Tp,     bool _IsInt = is_integral<_Tp>::value,     bool _IsEnum = is_enum<_Tp>::value>     class __make_unsigned_selector;
   template<typename _Tp>     class __make_unsigned_selector<_Tp, true, false>     {       typedef __make_unsigned<typename remove_cv<_Tp>::type> __unsignedt;       typedef typename __unsignedt::__type __unsigned_type;       typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;     public:       typedef typename __cv_unsigned::__type __type;     };
   template<typename _Tp>     class __make_unsigned_selector<_Tp, false, true>     {       typedef unsigned char __smallest;       static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);       static const bool __b1 = sizeof(_Tp) <= sizeof(unsigned short);       static const bool __b2 = sizeof(_Tp) <= sizeof(unsigned int);       static const bool __b3 = sizeof(_Tp) <= sizeof(unsigned long);       typedef conditional<__b3, unsigned long, unsigned long long> __cond3;       typedef typename __cond3::type __cond3_type;       typedef conditional<__b2, unsigned int, __cond3_type> __cond2;       typedef typename __cond2::type __cond2_type;       typedef conditional<__b1, unsigned short, __cond2_type> __cond1;       typedef typename __cond1::type __cond1_type;       typedef typename conditional<__b0, __smallest, __cond1_type>::type  __unsigned_type;       typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;     public:       typedef typename __cv_unsigned::__type __type;     };
   template<typename _Tp>     struct make_unsigned     { typedef typename __make_unsigned_selector<_Tp>::__type type; };
   template<typename _Tp>     struct remove_extent     { typedef _Tp type; };
   template<typename _Tp, std::size_t _Size>     struct remove_extent<_Tp[_Size]>     { typedef _Tp type; };
   template<typename _Tp>     struct remove_extent<_Tp[]>     { typedef _Tp type; };
   template<typename _Tp>     using remove_extent_t = typename remove_extent<_Tp>::type;
   template<typename _Tp>     using remove_all_extents_t = typename remove_all_extents<_Tp>::type;
   template<typename _Tp, typename>     struct __remove_pointer_helper     { typedef _Tp type; };
   template<typename _Tp, typename _Up>     struct __remove_pointer_helper<_Tp, _Up*>     { typedef _Up type; };
   template<typename _Tp>     struct remove_pointer     : public __remove_pointer_helper<_Tp, typename remove_cv<_Tp>::type>     { };
   template<typename _Tp, bool = __or_<__is_referenceable<_Tp>,           is_void<_Tp>>::value>     struct __add_pointer_helper     { typedef _Tp type; };
   template<typename _Tp>     struct __add_pointer_helper<_Tp, true>     { typedef typename remove_reference<_Tp>::type* type; };
   template<typename _Tp>     struct add_pointer     : public __add_pointer_helper<_Tp>     { };
   template<typename _Tp>     using remove_pointer_t = typename remove_pointer<_Tp>::type;
   template<typename _Tp>     using add_pointer_t = typename add_pointer<_Tp>::type;
   template<std::size_t _Len>     struct __aligned_storage_msa     {       union __type       {  unsigned char __data[_Len];  struct __attribute__((__aligned__)) { } __align;       };     };
    template<std::size_t _Len, std::size_t _Align =     __alignof__(typename __aligned_storage_msa<_Len>::__type)>     struct aligned_storage     {       union type       {  unsigned char __data[_Len];  struct __attribute__((__aligned__((_Align)))) { } __align;       };     };
   template <typename... _Types>     struct __strictest_alignment     {       static const size_t _S_alignment = 0;       static const size_t _S_size = 0;     };
   template <typename _Tp, typename... _Types>     struct __strictest_alignment<_Tp, _Types...>     {       static const size_t _S_alignment =         alignof(_Tp) > __strictest_alignment<_Types...>::_S_alignment  ? alignof(_Tp) : __strictest_alignment<_Types...>::_S_alignment;       static const size_t _S_size =         sizeof(_Tp) > __strictest_alignment<_Types...>::_S_size  ? sizeof(_Tp) : __strictest_alignment<_Types...>::_S_size;     };
    template <size_t _Len, typename... _Types>     struct aligned_union     {     private:       static_assert(sizeof...(_Types) != 0, "At least one type is required");       using __strictest = __strictest_alignment<_Types...>;       static const size_t _S_len = _Len > __strictest::_S_size  ? _Len : __strictest::_S_size;     public:       static const size_t alignment_value = __strictest::_S_alignment;       typedef typename aligned_storage<_S_len, alignment_value>::type type;     };
   template <size_t _Len, typename... _Types>     const size_t aligned_union<_Len, _Types...>::alignment_value;
   template<typename _Up,     bool _IsArray = is_array<_Up>::value,     bool _IsFunction = is_function<_Up>::value>     struct __decay_selector;
   template<typename _Up>     struct __decay_selector<_Up, false, false>     { typedef typename remove_cv<_Up>::type __type; };
   template<typename _Up>     struct __decay_selector<_Up, true, false>     { typedef typename remove_extent<_Up>::type* __type; };
   template<typename _Up>     struct __decay_selector<_Up, false, true>     { typedef typename add_pointer<_Up>::type __type; };
   template<typename _Tp>     class decay     {       typedef typename remove_reference<_Tp>::type __remove_type;     public:       typedef typename __decay_selector<__remove_type>::__type type;     };
   template<typename _Tp>     class reference_wrapper;
   template<typename _Tp>     struct __strip_reference_wrapper     {       typedef _Tp __type;     };
   template<typename _Tp>     struct __strip_reference_wrapper<reference_wrapper<_Tp> >     {       typedef _Tp& __type;     };
   template<typename _Tp>     struct __decay_and_strip     {       typedef typename __strip_reference_wrapper<  typename decay<_Tp>::type>::__type __type;     };
   template<bool, typename _Tp = void>     struct enable_if     { };
   template<typename _Tp>     struct enable_if<true, _Tp>     { typedef _Tp type; };
   template<typename... _Cond>     using _Require = typename enable_if<__and_<_Cond...>::value>::type;
   template<bool _Cond, typename _Iftrue, typename _Iffalse>     struct conditional     { typedef _Iftrue type; };
   template<typename _Iftrue, typename _Iffalse>     struct conditional<false, _Iftrue, _Iffalse>     { typedef _Iffalse type; };
   template<typename...> using __void_t = void;
    template<typename _Default, typename _AlwaysVoid,     template<typename...> class _Op, typename... _Args>     struct __detector     {       using value_t = false_type;       using type = _Default;     };
   template<typename _Default, template<typename...> class _Op,      typename... _Args>     struct __detector<_Default, __void_t<_Op<_Args...>>, _Op, _Args...>     {       using value_t = true_type;       using type = _Op<_Args...>;     };
   template<typename _Default, template<typename...> class _Op,     typename... _Args>     using __detected_or = __detector<_Default, void, _Op, _Args...>;
   template<typename _Default, template<typename...> class _Op,     typename... _Args>     using __detected_or_t       = typename __detected_or<_Default, _Op, _Args...>::type;
   template<template<typename...> class _Default,     template<typename...> class _Op, typename... _Args>     using __detected_or_t_ =       __detected_or_t<_Default<_Args...>, _Op, _Args...>;
    template <typename _Tp>     struct __is_swappable;
   template <typename _Tp>     struct __is_nothrow_swappable;
   template<typename _Tp>     inline     typename enable_if<__and_<is_move_constructible<_Tp>,          is_move_assignable<_Tp>>::value>::type     swap(_Tp&, _Tp&)     noexcept(__and_<is_nothrow_move_constructible<_Tp>,              is_nothrow_move_assignable<_Tp>>::value);
 }
 namespace mozilla {
 template<typename IteratorT> class ReverseIterator { public:   template<typename Iterator>   explicit ReverseIterator(Iterator aIter)  ;   template<typename Iterator>                ReverseIterator(const ReverseIterator<Iterator>& aOther)  ;   decltype(*DeclVal<IteratorT>()) operator*() const   {     IteratorT tmp = mCurrent;     return *--tmp;   }   ReverseIterator& operator++() { --mCurrent; return *this; }   ReverseIterator& operator--() { ++mCurrent; return *this; }   ReverseIterator operator++(int) { auto ret = *this; mCurrent--; return ret; }   ReverseIterator operator--(int) { auto ret = *this; mCurrent++; return ret; }   template<typename Iterator1, typename Iterator2>   friend bool operator==(const ReverseIterator<Iterator1>& aIter1,                          const ReverseIterator<Iterator2>& aIter2);   template<typename Iterator1, typename Iterator2>   friend bool operator!=(const ReverseIterator<Iterator1>& aIter1,                          const ReverseIterator<Iterator2>& aIter2);   ;   ;   ;   ; private:   IteratorT mCurrent; };
 }
 namespace mozilla {
 template<typename T, size_t Length> class Array {   T mArr[Length]; public:   Array() {}   template <typename... Args>                Array(Args&&... aArgs)     : mArr{mozilla::Forward<Args>(aArgs)...}   {     static_assert(sizeof...(aArgs) == Length,                   "The number of arguments should be equal to the template parameter Length");   }   T& operator[](size_t aIndex)   {     do { static_assert(mozilla::detail::AssertionConditionType<decltype(aIndex < Length)>::isValid, "invalid assertion condition"); if ((__builtin_expect(!!(!(!!(aIndex < Length))), 0))) { MOZ_ReportAssertionFailure("aIndex < Length", "/home/fitzgen/stylo/obj-x86_64-pc-linux-gnu/dist/include/mozilla/Array.h", 39); do { } while (0); do { *((volatile int*) __null) = 39; ::abort(); } while (0); } } while (0);     return mArr[aIndex];   }   const T& operator[](size_t aIndex) const   {     do { static_assert(mozilla::detail::AssertionConditionType<decltype(aIndex < Length)>::isValid, "invalid assertion condition"); if ((__builtin_expect(!!(!(!!(aIndex < Length))), 0))) { MOZ_ReportAssertionFailure("aIndex < Length", "/home/fitzgen/stylo/obj-x86_64-pc-linux-gnu/dist/include/mozilla/Array.h", 45); do { } while (0); do { *((volatile int*) __null) = 45; ::abort(); } while (0); } } while (0);     return mArr[aIndex];   }   bool operator==(const Array<T, Length>& aOther) const   {     for (size_t i = 0; i < Length; i++) {       if (mArr[i] != aOther[i]) {         return false;       }     }     return true;   }   typedef T* iterator;   typedef const T* const_iterator;   typedef ReverseIterator<T*> reverse_iterator;   typedef ReverseIterator<const T*> const_reverse_iterator;   iterator begin() { return mArr; }   const_iterator begin() const { return mArr; }   const_iterator cbegin() const { return begin(); }   iterator end() { return mArr + Length; }   const_iterator end() const { return mArr + Length; }                      };
  template<typename IndexType,          IndexType SizeAsEnumValue,          typename ValueType> class EnumeratedArray { public:   static const size_t kSize = size_t(SizeAsEnumValue); private:   typedef Array<ValueType, kSize> ArrayType;   ArrayType mArray; public:   EnumeratedArray() {}   template <typename... Args>                EnumeratedArray(Args&&... aArgs)     : mArray{mozilla::Forward<Args>(aArgs)...}   {}   explicit EnumeratedArray(const EnumeratedArray& aOther)   {     for (size_t i = 0; i < kSize; i++) {       mArray[i] = aOther.mArray[i];     }   }   EnumeratedArray(EnumeratedArray&& aOther)   {     for (size_t i = 0; i < kSize; i++) {       mArray[i] = Move(aOther.mArray[i]);     }   }   ValueType& operator[](IndexType aIndex)   {     return mArray[size_t(aIndex)];   }   const ValueType& operator[](IndexType aIndex) const   {     return mArray[size_t(aIndex)];   }   typedef typename ArrayType::iterator iterator;   typedef typename ArrayType::const_iterator const_iterator;   typedef typename ArrayType::reverse_iterator reverse_iterator;   typedef typename ArrayType::const_reverse_iterator const_reverse_iterator;   iterator begin() { return mArray.begin(); }   const_iterator begin() const { return mArray.begin(); }   const_iterator cbegin() const { return mArray.cbegin(); }   iterator end() { return mArray.end(); }                         };
 }
 namespace mozilla {
  }
 extern "C++" {
 namespace std {    class exception   {   public:     exception() noexcept { }     virtual ~exception() noexcept;     virtual const char*     what() const noexcept;   };   class bad_exception : public exception   {   public:     bad_exception() noexcept { }     virtual ~bad_exception() noexcept;     virtual const char*     what() const noexcept;   };   typedef void (*terminate_handler) ();   typedef void (*unexpected_handler) ();   terminate_handler set_terminate(terminate_handler) noexcept;   terminate_handler get_terminate() noexcept;   void terminate() noexcept __attribute__ ((__noreturn__));   unexpected_handler set_unexpected(unexpected_handler) noexcept;   unexpected_handler get_unexpected() noexcept;   void unexpected() __attribute__ ((__noreturn__));    void __verbose_terminate_handler(); }
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   template<typename _Tp>     inline _Tp*     __addressof(_Tp& __r) noexcept     {       return reinterpret_cast<_Tp*>  (&const_cast<char&>(reinterpret_cast<const volatile char&>(__r)));     }
   template<typename _Tp>     constexpr _Tp&&     forward(typename std::remove_reference<_Tp>::type&& __t) noexcept     {       static_assert(!std::is_lvalue_reference<_Tp>::value, "template argument"       " substituting _Tp is an lvalue reference type");       return static_cast<_Tp&&>(__t);     }
   template<typename _Tp>     constexpr typename std::remove_reference<_Tp>::type&&     move(_Tp&& __t) noexcept     { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }
   template<typename _Tp>     struct __move_if_noexcept_cond     : public __and_<__not_<is_nothrow_move_constructible<_Tp>>,                     is_copy_constructible<_Tp>>::type { };
    template<typename _Tp>     inline _Tp*     addressof(_Tp& __r) noexcept     { return std::__addressof(__r); }
   template <typename _Tp, typename _Up = _Tp>     inline _Tp     __exchange(_Tp& __obj, _Up&& __new_val)     {       _Tp __old_val = std::move(__obj);       __obj = std::forward<_Up>(__new_val);       return __old_val;     }
 }
 extern "C++" {
 namespace std {   class bad_alloc : public exception   {   public:     bad_alloc() throw() ;     virtual ~bad_alloc() throw();     virtual const char* what() const throw();   };   class bad_array_new_length : public bad_alloc   {   public:     bad_array_new_length() throw() ;;     virtual ~bad_array_new_length() throw();        };   struct nothrow_t   {        };   extern const nothrow_t nothrow;   typedef void (*new_handler)();      new_handler get_new_handler() noexcept; }
  void* operator new(std::size_t)   __attribute__((__externally_visible__));
 }
 namespace mozilla {
 namespace detail { enum StorageType { AsBase, AsMember };  template<typename A, typename B,          detail::StorageType =            IsEmpty<A>::value ? detail::AsBase : detail::AsMember,          detail::StorageType =            IsEmpty<B>::value && !IsBaseOf<A, B>::value && !IsBaseOf<B, A>::value            ? detail::AsBase            : detail::AsMember> struct PairHelper; template<typename A, typename B> struct PairHelper<A, B, AsMember, AsMember> { protected:   template<typename AArg, typename BArg>   PairHelper(AArg&& aA, BArg&& aB)    ;   A& first() ;             private:   A mFirstA;   B mSecondB; }; template<typename A, typename B> struct PairHelper<A, B, AsMember, AsBase> : private B { protected:       ;               void swap(PairHelper& aOther)   {     Swap(mFirstA, aOther.mFirstA);     Swap(static_cast<B&>(*this), static_cast<B&>(aOther));   } private:   A mFirstA; }; template<typename A, typename B> struct PairHelper<A, B, AsBase, AsMember> : private A { protected:                   private:   B mSecondB; }; template<typename A, typename B> struct PairHelper<A, B, AsBase, AsBase> : private A, private B { protected:       ;                }; }
  template<typename A, typename B> struct Pair   : private detail::PairHelper<A, B> {   typedef typename detail::PairHelper<A, B> Base; public:       ;               using Base::first;   using Base::second;   void swap(Pair& aOther) ; };
 template<typename A, class B> void Swap(Pair<A, B>& aX, Pair<A, B>& aY) ;
  template<typename A, typename B> Pair<typename RemoveCV<typename RemoveReference<A>::Type>::Type,      typename RemoveCV<typename RemoveReference<B>::Type>::Type> MakePair(A&& aA, B&& aB) ;
 }
 namespace mozilla {
 template<typename T> class DefaultDelete;
 template<typename T, class D = DefaultDelete<T>> class UniquePtr;
 }
  namespace mozilla {
 namespace detail { struct HasPointerTypeHelper {   template <class U> static double Test(...);   template <class U> static char Test(typename U::pointer* = 0); }; template <class T> class HasPointerType : public IntegralConstant<bool, sizeof(HasPointerTypeHelper::Test<T>(0)) == 1> { }; template <class T, class D, bool = HasPointerType<D>::value> struct PointerTypeImpl {   typedef typename D::pointer Type; }; template <class T, class D> struct PointerTypeImpl<T, D, false> {   typedef T* Type; }; template <class T, class D> struct PointerType {   typedef typename PointerTypeImpl<T, typename RemoveReference<D>::Type>::Type Type; }; }
  template<typename T, class D> class UniquePtr { public:   typedef T ElementType;   typedef D DeleterType;   typedef typename detail::PointerType<T, DeleterType>::Type Pointer; private:   Pair<Pointer, DeleterType> mTuple;   Pointer& ptr() ;   const Pointer& ptr() const ;       public:   constexpr UniquePtr()     : mTuple(static_cast<Pointer>(nullptr), DeleterType())   {     static_assert(!IsPointer<D>::value, "must provide a deleter instance");     static_assert(!IsReference<D>::value, "must provide a deleter instance");   }                                           Pointer get() const ;            void reset(Pointer aPtr = Pointer())   ;   void swap(UniquePtr& aOther)   ;   UniquePtr(const UniquePtr& aOther) = delete;   void operator=(const UniquePtr& aOther) = delete; };
 }
 struct JSContext;
  class JSFunction;
  class JSObject;
  class JSScript;
  class JSString;
  struct jsid;
  namespace JS {
 typedef unsigned char Latin1Char;
 class Symbol;
 class Value;
 template <typename T> class Handle;
 template <typename T> class MutableHandle;
 template <typename T> class Rooted;
 template <typename T> class PersistentRooted;
 typedef Handle<JSFunction*> HandleFunction;
 }
 namespace js {
 class BaseShape;
 }
  namespace JS {
  enum class TraceKind {     Object = 0x00,     String = 0x02,     Symbol = 0x03,     Script = 0x01,     Shape = 0x04,     ObjectGroup = 0x05,     Null = 0x06,     BaseShape = 0x0F,     JitCode = 0x1F,     LazyScript = 0x2F,     Scope = 0x3F,     RegExpShared = 0x4F };
 template <typename T> struct MapTypeToTraceKind {     static const JS::TraceKind kind = T::TraceKind; };
  template <> struct MapTypeToTraceKind<js::BaseShape> { static const JS::TraceKind kind = JS::TraceKind::BaseShape; };
 template <> struct MapTypeToTraceKind<JSString> { static const JS::TraceKind kind = JS::TraceKind::String; };
 enum class RootKind : int8_t { BaseShape, JitCode, LazyScript, Scope, Object, ObjectGroup, Script, Shape, String, Symbol, RegExpShared,     Id,     Value,     Traceable,     Limit };
 template <TraceKind traceKind> struct MapTraceKindToRootKind {};
 template <> struct MapTraceKindToRootKind<JS::TraceKind::BaseShape> { static const JS::RootKind kind = JS::RootKind::BaseShape; };
 template <typename T> struct MapTypeToRootKind {     static const JS::RootKind kind = JS::RootKind::Traceable; };
 template <typename T> struct MapTypeToRootKind<T*> {     static const JS::RootKind kind =         JS::MapTraceKindToRootKind<JS::MapTypeToTraceKind<T>::kind>::kind; };
 template <typename T> struct MapTypeToRootKind<mozilla::UniquePtr<T>> {     static const JS::RootKind kind = JS::MapTypeToRootKind<T>::kind; };
 template <> struct MapTypeToRootKind<JS::Value> {     static const JS::RootKind kind = JS::RootKind::Value; };
 class Value;
 struct Zone;
 }
  struct JSCompartment;
  struct JSRuntime;
  namespace JS {
 class AutoEnterCycleCollection;
 class AutoGCRooter {   public:                                 protected:     AutoGCRooter * const down;      ptrdiff_t tag_;     enum {         VALARRAY = -2,         PARSER = -3,         VALVECTOR = -10,         IDVECTOR = -11,         OBJVECTOR = -14,         IONMASM = -19,         WRAPVECTOR = -20,         WRAPPER = -21,         CUSTOM = -26     };                  private:     AutoGCRooter ** const stackTop;           };
 template <> struct MapTypeToRootKind<void*> {     static const RootKind kind = RootKind::Traceable; };
 using RootedListHeads = mozilla::EnumeratedArray<RootKind, RootKind::Limit,                                                  Rooted<void*>*>;
 enum StackKind {     StackForSystemCode,     StackForTrustedScript,     StackForUntrustedScript,     StackKindCount };
 class RootingContext {     RootedListHeads stackRoots_;     template <typename T> friend class JS::Rooted;     JS::AutoGCRooter* autoGCRooters_;     friend class JS::AutoGCRooter;   public:                  protected:     JSCompartment* compartment_;     JS::Zone* zone_;   public:     uintptr_t nativeStackLimit[StackKindCount];                    ; };
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
  }
 namespace std {
   template<class _E>     class initializer_list     {     public:       typedef _E value_type;       typedef const _E& reference;       typedef const _E& const_reference;       typedef size_t size_type;       typedef const _E* iterator;       typedef const _E* const_iterator;     private:       iterator _M_array;       size_type _M_len;       constexpr initializer_list(const_iterator __a, size_type __l)       : _M_array(__a), _M_len(__l) { }     public:       constexpr initializer_list() noexcept       : _M_array(0), _M_len(0) { }       constexpr size_type       size() const noexcept { return _M_len; }       constexpr const_iterator       begin() const noexcept { return _M_array; }       constexpr const_iterator       end() const noexcept { return begin() + size(); }     };
   template<class _Tp>     constexpr const _Tp*     begin(initializer_list<_Tp> __ils) noexcept     { return __ils.begin(); }
   template<class _Tp>     constexpr const _Tp*     end(initializer_list<_Tp> __ils) noexcept     { return __ils.end(); }
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   void   __throw_bad_exception(void) __attribute__((__noreturn__));
   void   __throw_bad_alloc(void) __attribute__((__noreturn__));
   void   __throw_out_of_range(const char*) __attribute__((__noreturn__));
   void   __throw_out_of_range_fmt(const char*, ...) __attribute__((__noreturn__))     __attribute__((__format__(__gnu_printf__, 1, 2)));
                         }
 extern "C++" {
 namespace std __attribute__ ((__visibility__ ("default"))) {   struct __true_type { };   struct __false_type { };   template<bool>     struct __truth_type     { typedef __false_type __type; };   template<>     struct __truth_type<true>     { typedef __true_type __type; };   template<class _Sp, class _Tp>     struct __traitor     {       enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };       typedef typename __truth_type<__value>::__type __type;     };   template<typename, typename>     struct __are_same     {       enum { __value = 0 };       typedef __false_type __type;     };   template<typename _Tp>     struct __are_same<_Tp, _Tp>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<typename _Tp>     struct __is_void     {       enum { __value = 0 };       typedef __false_type __type;     };   template<>     struct __is_void<void>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<typename _Tp>     struct __is_integer     {       enum { __value = 0 };       typedef __false_type __type;     };   template<>     struct __is_integer<bool>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<char>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<signed char>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<unsigned char>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<wchar_t>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<char16_t>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<char32_t>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<short>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<unsigned short>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<int>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<unsigned int>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<long>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<unsigned long>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<long long>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_integer<unsigned long long>     {       enum { __value = 1 };       typedef __true_type __type;     };    template<typename _Tp>     struct __is_floating     {       enum { __value = 0 };       typedef __false_type __type;     };   template<>     struct __is_floating<float>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_floating<double>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_floating<long double>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<typename _Tp>     struct __is_pointer     {       enum { __value = 0 };       typedef __false_type __type;     };   template<typename _Tp>     struct __is_pointer<_Tp*>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<typename _Tp>     struct __is_arithmetic     : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >     { };   template<typename _Tp>     struct __is_scalar     : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >     { };   template<typename _Tp>     struct __is_char     {       enum { __value = 0 };       typedef __false_type __type;     };   template<>     struct __is_char<char>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_char<wchar_t>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<typename _Tp>     struct __is_byte     {       enum { __value = 0 };       typedef __false_type __type;     };   template<>     struct __is_byte<char>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_byte<signed char>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<>     struct __is_byte<unsigned char>     {       enum { __value = 1 };       typedef __true_type __type;     };   template<typename _Tp>     struct __is_move_iterator     {       enum { __value = 0 };       typedef __false_type __type;     };    }
 }
 extern "C++" {
 namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {   template<bool, typename>     struct __enable_if     { };   template<typename _Tp>     struct __enable_if<true, _Tp>     { typedef _Tp __type; };   template<bool _Cond, typename _Iftrue, typename _Iffalse>     struct __conditional_type     { typedef _Iftrue __type; };   template<typename _Iftrue, typename _Iffalse>     struct __conditional_type<false, _Iftrue, _Iffalse>     { typedef _Iffalse __type; };   template<typename _Tp>     struct __add_unsigned     {     private:       typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;     public:       typedef typename __if_type::__type __type;     };   template<>     struct __add_unsigned<char>     { typedef unsigned char __type; };   template<>     struct __add_unsigned<signed char>     { typedef unsigned char __type; };   template<>     struct __add_unsigned<short>     { typedef unsigned short __type; };   template<>     struct __add_unsigned<int>     { typedef unsigned int __type; };   template<>     struct __add_unsigned<long>     { typedef unsigned long __type; };   template<>     struct __add_unsigned<long long>     { typedef unsigned long long __type; };   template<>     struct __add_unsigned<bool>;   template<>     struct __add_unsigned<wchar_t>;   template<typename _Tp>     struct __remove_unsigned     {     private:       typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;     public:       typedef typename __if_type::__type __type;     };   template<>     struct __remove_unsigned<char>     { typedef signed char __type; };   template<>     struct __remove_unsigned<unsigned char>     { typedef signed char __type; };   template<>     struct __remove_unsigned<unsigned short>     { typedef short __type; };   template<>     struct __remove_unsigned<unsigned int>     { typedef int __type; };   template<>     struct __remove_unsigned<unsigned long>     { typedef long __type; };   template<>     struct __remove_unsigned<unsigned long long>     { typedef long long __type; };   template<>     struct __remove_unsigned<bool>;   template<>     struct __remove_unsigned<wchar_t>;   template<typename _Type>      bool     __is_null_pointer(_Type* __ptr)     ;   template<typename _Type>      bool     __is_null_pointer(_Type)     ;    bool   __is_null_pointer(std::nullptr_t)   ;   template<typename _Tp, bool = std::__is_integer<_Tp>::__value>     struct __promote     { typedef double __type; };   template<typename _Tp>     struct __promote<_Tp, false>     { };   template<>     struct __promote<long double>     { typedef long double __type; };   template<>     struct __promote<double>     { typedef double __type; };   template<>     struct __promote<float>     { typedef float __type; };   template<typename _Tp, typename _Up,            typename _Tp2 = typename __promote<_Tp>::__type,            typename _Up2 = typename __promote<_Up>::__type>     struct __promote_2     {       typedef __typeof__(_Tp2() + _Up2()) __type;     };   template<typename _Tp, typename _Up, typename _Vp,            typename _Tp2 = typename __promote<_Tp>::__type,            typename _Up2 = typename __promote<_Up>::__type,            typename _Vp2 = typename __promote<_Vp>::__type>     struct __promote_3     {       typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;     };   template<typename _Tp, typename _Up, typename _Vp, typename _Wp,            typename _Tp2 = typename __promote<_Tp>::__type,            typename _Up2 = typename __promote<_Up>::__type,            typename _Vp2 = typename __promote<_Vp>::__type,            typename _Wp2 = typename __promote<_Wp>::__type>     struct __promote_4     {       typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;     }; }
 }
 namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
    template<typename _Value>     struct __numeric_traits_integer     {       static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);       static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);       static const bool __is_signed = ((_Value)(-1) < 0);       static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));     };
   template<typename _Value>     const _Value __numeric_traits_integer<_Value>::__min;
    template<typename _Value>     struct __numeric_traits_floating     {       static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 643L / 2136);       static const bool __is_signed = true;       static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);       static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);     };
   template<typename _Value>     const int __numeric_traits_floating<_Value>::__max_digits10;
   template<typename _Value>     const bool __numeric_traits_floating<_Value>::__is_signed;
   template<typename _Value>     const int __numeric_traits_floating<_Value>::__digits10;
   template<typename _Value>     const int __numeric_traits_floating<_Value>::__max_exponent10;
   template<typename _Value>     struct __numeric_traits     : public __conditional_type<std::__is_integer<_Value>::__value,     __numeric_traits_integer<_Value>,     __numeric_traits_floating<_Value> >::__type     { };
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
    struct input_iterator_tag { };
   struct output_iterator_tag { };
   struct forward_iterator_tag : public input_iterator_tag { };
   struct bidirectional_iterator_tag : public forward_iterator_tag { };
   struct random_access_iterator_tag : public bidirectional_iterator_tag { };
    template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,            typename _Pointer = _Tp*, typename _Reference = _Tp&>     struct iterator     {       typedef _Category iterator_category;       typedef _Tp value_type;       typedef _Distance difference_type;       typedef _Pointer pointer;       typedef _Reference reference;     };
    template<typename _Iterator, typename = __void_t<>>     struct __iterator_traits { };
   template<typename _Iterator>     struct __iterator_traits<_Iterator,         __void_t<typename _Iterator::iterator_category,           typename _Iterator::value_type,           typename _Iterator::difference_type,           typename _Iterator::pointer,           typename _Iterator::reference>>     {       typedef typename _Iterator::iterator_category iterator_category;       typedef typename _Iterator::value_type value_type;       typedef typename _Iterator::difference_type difference_type;       typedef typename _Iterator::pointer pointer;       typedef typename _Iterator::reference reference;     };
   template<typename _Iterator>     struct iterator_traits     : public __iterator_traits<_Iterator> { };
    template<typename _InIter>     using _RequireInputIter = typename       enable_if<is_convertible<typename   iterator_traits<_InIter>::iterator_category,           input_iterator_tag>::value>::type;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   template <typename> struct _List_iterator;
   template <typename> struct _List_const_iterator;
   template<typename _InputIterator>      typename iterator_traits<_InputIterator>::difference_type     __distance(_InputIterator __first, _InputIterator __last,                input_iterator_tag)     ;
   template<typename _RandomAccessIterator>      typename iterator_traits<_RandomAccessIterator>::difference_type     __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,                random_access_iterator_tag)     ;
   template<typename _Tp>     ptrdiff_t     __distance(std::_List_iterator<_Tp>,         std::_List_iterator<_Tp>,         input_iterator_tag);
   template<typename _Tp>     ptrdiff_t     __distance(std::_List_const_iterator<_Tp>,         std::_List_const_iterator<_Tp>,         input_iterator_tag);
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   class __undefined;
   template<typename _Tp>     struct __get_first_arg     { using type = __undefined; };
   template<template<typename, typename...> class _Template, typename _Tp,            typename... _Types>     struct __get_first_arg<_Template<_Tp, _Types...>>     { using type = _Tp; };
   template<typename _Tp>     using __get_first_arg_t = typename __get_first_arg<_Tp>::type;
   template<typename _Tp, typename _Up>     struct __replace_first_arg     { using type = __undefined; };
   template<template<typename, typename...> class _Template, typename _Up,            typename _Tp, typename... _Types>     struct __replace_first_arg<_Template<_Tp, _Types...>, _Up>     { using type = _Template<_Up, _Types...>; };
   template<typename _Tp, typename _Up>     using __replace_first_arg_t = typename __replace_first_arg<_Tp, _Up>::type;
   template<typename _Tp>     using __make_not_void       = typename conditional<is_void<_Tp>::value, __undefined, _Tp>::type;
   template<typename _Ptr>     struct pointer_traits     {     private:       template<typename _Tp>  using __element_type = typename _Tp::element_type;       template<typename _Tp>  using __difference_type = typename _Tp::difference_type;       template<typename _Tp, typename _Up>  using __rebind = typename _Tp::template rebind<_Up>;     public:       using pointer = _Ptr;       using element_type  = __detected_or_t_<__get_first_arg_t, __element_type, _Ptr>;       using difference_type  = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;       template<typename _Up>         using rebind    = __detected_or_t_<__replace_first_arg_t, __rebind, _Ptr, _Up>;       static _Ptr       pointer_to(__make_not_void<element_type>& __e)       ;       static_assert(!is_same<element_type, __undefined>::value,    "pointer type defines element_type or is like SomePointer<T, Args>");       static_assert(!is_same<rebind<element_type>, __undefined>::value,    "pointer type defines rebind<U> or is like SomePointer<T, Args>");     };
   template<typename _Tp>     struct pointer_traits<_Tp*>     {       typedef _Tp* pointer;       typedef _Tp element_type;       typedef ptrdiff_t difference_type;       template<typename _Up>         using rebind = _Up*;       static pointer       pointer_to(__make_not_void<element_type>& __r) noexcept       { return std::addressof(__r); }     };
   template<typename _Ptr, typename _Tp>     using __ptr_rebind = typename pointer_traits<_Ptr>::template rebind<_Tp>;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
    template<typename _Iterator>     class reverse_iterator     : public iterator<typename iterator_traits<_Iterator>::iterator_category,         typename iterator_traits<_Iterator>::value_type,         typename iterator_traits<_Iterator>::difference_type,         typename iterator_traits<_Iterator>::pointer,                       typename iterator_traits<_Iterator>::reference>     {     protected:       _Iterator current;       typedef iterator_traits<_Iterator> __traits_type;     public:       typedef _Iterator iterator_type;       typedef typename __traits_type::difference_type difference_type;       typedef typename __traits_type::pointer pointer;       typedef typename __traits_type::reference reference;       reverse_iterator()  ;       explicit       reverse_iterator(iterator_type __x)  ;       reverse_iterator(const reverse_iterator& __x)  ;       template<typename _Iter>         reverse_iterator(const reverse_iterator<_Iter>& __x)  ;       iterator_type       base() const       ;                                         };
    template<typename _Container>     class insert_iterator     : public iterator<output_iterator_tag, void, void, void, void>     {     protected:       _Container* container;       typename _Container::iterator iter;     public:       typedef _Container container_type;                                                };
    template<typename _Container, typename _Iterator>      insert_iterator<_Container>     inserter(_Container& __x, _Iterator __i)     ;
 }
  namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
    using std::iterator_traits;
   using std::iterator;
   template<typename _Iterator, typename _Container>     class __normal_iterator     {     protected:       _Iterator _M_current;       typedef iterator_traits<_Iterator> __traits_type;     public:       typedef _Iterator iterator_type;       typedef typename __traits_type::iterator_category iterator_category;       typedef typename __traits_type::value_type value_type;       typedef typename __traits_type::difference_type difference_type;       typedef typename __traits_type::reference reference;       typedef typename __traits_type::pointer pointer;       constexpr __normal_iterator() noexcept       : _M_current(_Iterator()) { }       explicit       __normal_iterator(const _Iterator& __i) noexcept       : _M_current(__i) { }       template<typename _Iter>         __normal_iterator(const __normal_iterator<_Iter,      typename __enable_if<               (std::__are_same<_Iter, typename _Container::pointer>::__value),         _Container>::__type>& __i) noexcept         : _M_current(__i.base()) { }       reference       operator*() const noexcept       { return *_M_current; }       pointer       operator->() const noexcept       { return _M_current; }       __normal_iterator&       operator++() noexcept       {  ++_M_current;  return *this;       }       __normal_iterator       operator++(int) noexcept       { return __normal_iterator(_M_current++); }       __normal_iterator&       operator--() noexcept       {  --_M_current;  return *this;       }       __normal_iterator       operator--(int) noexcept       { return __normal_iterator(_M_current--); }       reference       operator[](difference_type __n) const noexcept       { return _M_current[__n]; }       __normal_iterator&       operator+=(difference_type __n) noexcept       { _M_current += __n; return *this; }       __normal_iterator       operator+(difference_type __n) const noexcept       { return __normal_iterator(_M_current + __n); }       __normal_iterator&       operator-=(difference_type __n) noexcept       { _M_current -= __n; return *this; }       __normal_iterator       operator-(difference_type __n) const noexcept       { return __normal_iterator(_M_current - __n); }       const _Iterator&       base() const noexcept       { return _M_current; }     };
    template<typename _IteratorL, typename _IteratorR, typename _Container>     inline bool     operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,         const __normal_iterator<_IteratorR, _Container>& __rhs)     noexcept     { return __lhs.base() == __rhs.base(); }
   template<typename _Iterator, typename _Container>     inline bool     operator==(const __normal_iterator<_Iterator, _Container>& __lhs,         const __normal_iterator<_Iterator, _Container>& __rhs)     noexcept     { return __lhs.base() == __rhs.base(); }
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
    template<typename _II, typename _OI>      _OI     copy(_II __first, _II __last, _OI __result)     ;
    template<typename>     class allocator;
   template<>     class allocator<void>;
   template<typename, typename>     struct uses_allocator;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   struct __allocator_traits_base   {     template<typename _Alloc, typename _Up>       using __rebind = typename _Alloc::template rebind<_Up>::other;   protected:     template<typename _Tp>       using __pointer = typename _Tp::pointer;     template<typename _Tp>       using __c_pointer = typename _Tp::const_pointer;     template<typename _Tp>       using __v_pointer = typename _Tp::void_pointer;     template<typename _Tp>       using __cv_pointer = typename _Tp::const_void_pointer;     template<typename _Tp>       using __diff_type = typename _Tp::difference_type;     template<typename _Tp>       using __size_type = typename _Tp::size_type;     template<typename _Tp>       using __pocca = typename _Tp::propagate_on_container_copy_assignment;     template<typename _Tp>       using __pocma = typename _Tp::propagate_on_container_move_assignment;     template<typename _Tp>       using __pocs = typename _Tp::propagate_on_container_swap;     template<typename _Tp>       using __equal = typename _Tp::is_always_equal;   };
   template<typename _Alloc, typename _Up>     using __alloc_rebind = __detected_or_t_<__replace_first_arg_t,          __allocator_traits_base::__rebind,          _Alloc, _Up>;
   template<typename _Alloc>     struct allocator_traits : __allocator_traits_base     {       typedef _Alloc allocator_type;       typedef typename _Alloc::value_type value_type;       using pointer = __detected_or_t<value_type*, __pointer, _Alloc>;       using const_pointer  = __detected_or_t<__ptr_rebind<pointer, const value_type>,      __c_pointer, _Alloc>;       using void_pointer  = __detected_or_t<__ptr_rebind<pointer, void>, __v_pointer, _Alloc>;       using const_void_pointer  = __detected_or_t<__ptr_rebind<pointer, const void>, __cv_pointer,      _Alloc>;       using difference_type  = __detected_or_t<typename pointer_traits<pointer>::difference_type,      __diff_type, _Alloc>;       using size_type  = __detected_or_t<typename make_unsigned<difference_type>::type,      __size_type, _Alloc>;       using propagate_on_container_copy_assignment  = __detected_or_t<false_type, __pocca, _Alloc>;       using propagate_on_container_move_assignment  = __detected_or_t<false_type, __pocma, _Alloc>;       using propagate_on_container_swap  = __detected_or_t<false_type, __pocs, _Alloc>;       using is_always_equal  = __detected_or_t<typename is_empty<_Alloc>::type, __equal, _Alloc>;       template<typename _Tp>  using rebind_alloc = __alloc_rebind<_Alloc, _Tp>;       template<typename _Tp>  using rebind_traits = allocator_traits<rebind_alloc<_Tp>>;       static_assert(!is_same<rebind_alloc<value_type>, __undefined>::value,    "allocator defines rebind or is like Alloc<T, Args>");     private:       template<typename _Alloc2>  static auto  _S_allocate(_Alloc2& __a, size_type __n, const_void_pointer __hint, int)  -> decltype(__a.allocate(__n, __hint))  { return __a.allocate(__n, __hint); }       template<typename _Alloc2>  static pointer  _S_allocate(_Alloc2& __a, size_type __n, const_void_pointer, ...)  { return __a.allocate(__n); }       template<typename _Tp, typename... _Args>  struct __construct_helper  {    template<typename _Alloc2,      typename = decltype(std::declval<_Alloc2*>()->construct(     std::declval<_Tp*>(), std::declval<_Args>()...))>      static true_type __test(int);    template<typename>      static false_type __test(...);    using type = decltype(__test<_Alloc>(0));  };       template<typename _Tp, typename... _Args>  using __has_construct    = typename __construct_helper<_Tp, _Args...>::type;       template<typename _Tp, typename... _Args>  static _Require<__has_construct<_Tp, _Args...>>  _S_construct(_Alloc& __a, _Tp* __p, _Args&&... __args)  { __a.construct(__p, std::forward<_Args>(__args)...); }       template<typename _Tp, typename... _Args>  static  _Require<__and_<__not_<__has_construct<_Tp, _Args...>>,           is_constructible<_Tp, _Args...>>>  _S_construct(_Alloc&, _Tp* __p, _Args&&... __args)  { ::new((void*)__p) _Tp(std::forward<_Args>(__args)...); }       template<typename _Alloc2, typename _Tp>  static auto  _S_destroy(_Alloc2& __a, _Tp* __p, int)  -> decltype(__a.destroy(__p))  { __a.destroy(__p); }       template<typename _Alloc2, typename _Tp>  static void  _S_destroy(_Alloc2&, _Tp* __p, ...)  { __p->~_Tp(); }       template<typename _Alloc2>  static auto  _S_max_size(_Alloc2& __a, int)  -> decltype(__a.max_size())  { return __a.max_size(); }       template<typename _Alloc2>  static size_type  _S_max_size(_Alloc2&, ...)  {    return __gnu_cxx::__numeric_traits<size_type>::__max      / sizeof(value_type);  }       template<typename _Alloc2>  static auto  _S_select(_Alloc2& __a, int)  -> decltype(__a.select_on_container_copy_construction())  { return __a.select_on_container_copy_construction(); }       template<typename _Alloc2>  static _Alloc2  _S_select(_Alloc2& __a, ...)  { return __a; }     public:        static pointer       allocate(_Alloc& __a, size_type __n)       { return __a.allocate(__n); }        static void       deallocate(allocator_type& __a, pointer __p, size_type __n)       ;        template<typename _Up, typename... _Args>  static void  construct(allocator_type& __a, _Up* __p, _Args&&... __args)  ;        template<typename _Up>  static void  destroy(allocator_type& __a, _Up* __p)  ;       static size_type       max_size(const allocator_type& __a) noexcept       { return __a.max_size(); }       static allocator_type       select_on_container_copy_construction(const allocator_type& __rhs)       { return __rhs; }     };
   template<typename _Alloc>      void     __do_alloc_on_copy(_Alloc& __one, const _Alloc& __two, true_type)     ;
   template<typename _Alloc>      void __do_alloc_on_move(_Alloc& __one, _Alloc& __two, true_type)     ;
   template<typename _Alloc>      void __do_alloc_on_move(_Alloc&, _Alloc&, false_type)     ;
   template<typename _Alloc>      void __alloc_on_move(_Alloc& __one, _Alloc& __two)     ;
 }
 namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
 template<typename _Alloc>   struct __alloc_traits   : std::allocator_traits<_Alloc>   {     typedef _Alloc allocator_type;     typedef std::allocator_traits<_Alloc> _Base_type;     typedef typename _Base_type::value_type value_type;     typedef typename _Base_type::pointer pointer;     typedef typename _Base_type::const_pointer const_pointer;     typedef typename _Base_type::size_type size_type;     typedef typename _Base_type::difference_type difference_type;     typedef value_type& reference;     typedef const value_type& const_reference;     using _Base_type::allocate;     using _Base_type::deallocate;     using _Base_type::construct;     using _Base_type::destroy;     using _Base_type::max_size;   private:     template<typename _Ptr>       using __is_custom_pointer  = std::__and_<std::is_same<pointer, _Ptr>,         std::__not_<std::is_pointer<_Ptr>>>;   public:     template<typename _Ptr, typename... _Args>       static typename std::enable_if<__is_custom_pointer<_Ptr>::value>::type       construct(_Alloc& __a, _Ptr __p, _Args&&... __args)       ;     template<typename _Ptr>       static typename std::enable_if<__is_custom_pointer<_Ptr>::value>::type       destroy(_Alloc& __a, _Ptr __p)       ;     static _Alloc _S_select_on_copy(const _Alloc& __a)     ;     static void _S_on_swap(_Alloc& __a, _Alloc& __b)     ;     static constexpr bool _S_propagate_on_copy_assign()     { return _Base_type::propagate_on_container_copy_assignment::value; }     static constexpr bool _S_propagate_on_move_assign()     { return _Base_type::propagate_on_container_move_assignment::value; }     static constexpr bool _S_propagate_on_swap()     { return _Base_type::propagate_on_container_swap::value; }     static constexpr bool _S_always_equal()     { return _Base_type::is_always_equal::value; }     static constexpr bool _S_nothrow_move()     { return _S_propagate_on_move_assign() || _S_always_equal(); }     template<typename _Tp>       struct rebind       { typedef typename _Base_type::template rebind_alloc<_Tp> other; };    };
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
  namespace std __attribute__ ((__visibility__ ("default"))) {
     }
 extern "C" {
  }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
  typedef struct {
 }
  cpu_set_t;
 namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
 }
 namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace js {
   namespace gc { struct Cell; const size_t ArenaShift = 12; const size_t ArenaSize = size_t(1) << ArenaShift; const size_t ArenaMask = ArenaSize - 1; const size_t ChunkShift = 20; const size_t ChunkSize = size_t(1) << ChunkShift; const size_t ChunkMask = ChunkSize - 1; const size_t CellShift = 3; const size_t CellSize = size_t(1) << CellShift; const size_t CellMask = CellSize - 1; const size_t ChunkMarkBitmapOffset = 1032352; const size_t ChunkMarkBitmapBits = 129024; const size_t ChunkRuntimeOffset = ChunkSize - sizeof(void*); const size_t ChunkTrailerSize = 2 * sizeof(uintptr_t) + sizeof(uint64_t); const size_t ChunkLocationOffset = ChunkSize - ChunkTrailerSize; const size_t ArenaZoneOffset = sizeof(size_t); const size_t ArenaHeaderSize = sizeof(size_t) + 2 * sizeof(uintptr_t) +                                sizeof(size_t) + sizeof(uintptr_t); static const uint32_t BLACK = 0; static const uint32_t GRAY = 1; enum class ChunkLocation : uint32_t {     Invalid = 0,     Nursery = 1,     TenuredHeap = 2 };   bool IsInsideNursery(const js::gc::Cell* cell); }
 }
  typedef enum JSGCMode {
     GC_NORMAL = 0,     GC_SHRINK = 1 }
  JSGCInvocationKind;
  namespace JS {
   }
 namespace js {
 }
 namespace mozilla {
 }
 namespace js {
 }
  namespace JS {
   }
  enum WeakMapTraceKind {
     DoNotTraceWeakMaps,     ExpandWeakMaps,     TraceWeakMapValues,     TraceWeakMapKeysValues };
  class JSTracer {
 };
  namespace JS {
 }
   namespace JS {
  }
  namespace JS {
 template <typename T> struct StructGCPolicy {                     };
 template <typename T> struct GCPolicy : public StructGCPolicy<T> {};
 }
 namespace js {
 template <typename Element, typename Wrapper> class WrappedPtrOperations {};
 template <typename Element, typename Wrapper> class MutableWrappedPtrOperations : public WrappedPtrOperations<Element, Wrapper> {};
 template <typename T, typename Wrapper> class RootedBase : public MutableWrappedPtrOperations<T, Wrapper> {};
  }
  namespace JS {
 }
  namespace js {
  template <typename T> class alignas(8) DispatchWrapper {     static_assert(JS::MapTypeToRootKind<T>::kind == JS::RootKind::Traceable,                   "DispatchWrapper is intended only for usage with a Traceable");     using TraceFn = void (*)(JSTracer*, T*, const char*);     TraceFn tracer;     alignas(gc::CellSize) T storage;   public:     template <typename U>                  DispatchWrapper(U&& initial)       : tracer(&JS::GCPolicy<T>::trace),         storage(mozilla::Forward<U>(initial))     { }     T* operator &() { return &storage; }     const T* operator &() const { return &storage; }     operator T&() { return storage; }     operator const T&() const { return storage; }     static void TraceWrapped(JSTracer* trc, T* thingp, const char* name) {         auto wrapper = reinterpret_cast<DispatchWrapper*>(                            uintptr_t(thingp) - __builtin_offsetof(DispatchWrapper, storage));         wrapper->tracer(trc, &wrapper->storage, name);     } };
 }
  namespace JS {
 namespace detail {  template <typename T> using MaybeWrapped = typename mozilla::Conditional<     MapTypeToRootKind<T>::kind == JS::RootKind::Traceable,     js::DispatchWrapper<T>,     T>::Type; }
 }
  namespace js {
 }
  namespace JS {
  void AddPersistentRoot(RootingContext* cx, RootKind kind, PersistentRooted<void*>* root);
  void AddPersistentRoot(JSRuntime* rt, RootKind kind, PersistentRooted<void*>* root);
  template<typename T> class PersistentRooted : public js::RootedBase<T, PersistentRooted<T>>,                          private mozilla::LinkedListElement<PersistentRooted<T>> {     using ListBase = mozilla::LinkedListElement<PersistentRooted<T>>;     friend class mozilla::LinkedList<PersistentRooted>;     friend class mozilla::LinkedListElement<PersistentRooted>;     void registerWithRootLists(RootingContext* cx) {         do { static_assert(mozilla::detail::AssertionConditionType<decltype(!initialized())>::isValid, "invalid assertion condition"); if ((__builtin_expect(!!(!(!!(!initialized()))), 0))) { MOZ_ReportAssertionFailure("!initialized()", "/home/fitzgen/stylo/obj-x86_64-pc-linux-gnu/dist/include/js/RootingAPI.h", 1105); do { } while (0); do { *((volatile int*) __null) = 1105; ::abort(); } while (0); } } while (0);         JS::RootKind kind = JS::MapTypeToRootKind<T>::kind;         AddPersistentRoot(cx, kind, reinterpret_cast<JS::PersistentRooted<void*>*>(this));     }     void registerWithRootLists(JSRuntime* rt) {         do { static_assert(mozilla::detail::AssertionConditionType<decltype(!initialized())>::isValid, "invalid assertion condition"); if ((__builtin_expect(!!(!(!!(!initialized()))), 0))) { MOZ_ReportAssertionFailure("!initialized()", "/home/fitzgen/stylo/obj-x86_64-pc-linux-gnu/dist/include/js/RootingAPI.h", 1111); do { } while (0); do { *((volatile int*) __null) = 1111; ::abort(); } while (0); } } while (0);         JS::RootKind kind = JS::MapTypeToRootKind<T>::kind;         AddPersistentRoot(rt, kind, reinterpret_cast<JS::PersistentRooted<void*>*>(this));     }   public:     using ElementType = T;     PersistentRooted() : ptr(GCPolicy<T>::initial()) {}                                        bool initialized() {         return ListBase::isInList();     }           ;           ;      ;      ;             private:          detail::MaybeWrapped<T> ptr; }
 ;
 }
