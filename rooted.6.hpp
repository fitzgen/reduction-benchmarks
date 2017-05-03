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
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 extern "C++" {
 }
 namespace mozilla {
 }
 namespace mozilla {
 }
  namespace mozilla {
 }
  namespace JS {
 template <typename T> class Rooted;
 template <typename T> class PersistentRooted;
 }
 namespace js {
 }
  namespace JS {
 enum class RootKind : int8_t { BaseShape, JitCode, LazyScript, Scope, Object, ObjectGroup, Script, Shape, String, Symbol, RegExpShared,     Id,     Value,     Traceable,     Limit };
 template <typename T> struct MapTypeToRootKind {     static const JS::RootKind kind = JS::RootKind::Traceable; };
 struct Zone;
 }
  struct JSCompartment;
  struct JSRuntime;
  namespace JS {
 class AutoGCRooter {   public:                                 protected:     AutoGCRooter * const down;      ptrdiff_t tag_;     enum {         VALARRAY = -2,         PARSER = -3,         VALVECTOR = -10,         IDVECTOR = -11,         OBJVECTOR = -14,         IONMASM = -19,         WRAPVECTOR = -20,         WRAPPER = -21,         CUSTOM = -26     };                  private:     AutoGCRooter ** const stackTop;           };
 template <> struct MapTypeToRootKind<void*> {     static const RootKind kind = RootKind::Traceable; };
 using RootedListHeads = mozilla::EnumeratedArray<RootKind, RootKind::Limit,                                                  Rooted<void*>*>;
 enum StackKind {     StackForSystemCode,     StackForTrustedScript,     StackForUntrustedScript,     StackKindCount };
 class RootingContext {     RootedListHeads stackRoots_;     template <typename T> friend class JS::Rooted;     JS::AutoGCRooter* autoGCRooters_;     friend class JS::AutoGCRooter;   public:                  protected:     JSCompartment* compartment_;     JS::Zone* zone_;   public:     uintptr_t nativeStackLimit[StackKindCount];                    ; };
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
  }
 namespace std {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
                         }
 extern "C++" {
 }
 extern "C++" {
 }
 namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
  namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 }
 namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
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
