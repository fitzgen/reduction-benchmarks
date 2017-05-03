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
 typedef signed char __int8_t;
 typedef unsigned char __uint8_t;
 typedef signed short int __int16_t;
 typedef unsigned short int __uint16_t;
 typedef signed int __int32_t;
 typedef unsigned int __uint32_t;
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
 typedef unsigned long int __rlim64_t;
 typedef unsigned long int __fsfilcnt64_t;
 typedef long int __fsword_t;
 typedef long int __ssize_t;
 typedef long int __syscall_slong_t;
 typedef unsigned long int __syscall_ulong_t;
 typedef __off64_t __loff_t;
 typedef __quad_t *__qaddr_t;
 typedef char *__caddr_t;
 typedef long int __intptr_t;
 typedef unsigned int __socklen_t;
  typedef struct {   int __count;   union   {     unsigned int __wch;     char __wchb[4];   } __value; }
 __mbstate_t;
  struct _IO_jump_t;
 struct _IO_FILE;
 typedef void _IO_lock_t;
 struct _IO_marker {   struct _IO_marker *_next;   struct _IO_FILE *_sbuf;   int _pos;  };
 enum __codecvt_result {   __codecvt_ok,   __codecvt_partial,   __codecvt_error,   __codecvt_noconv };
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
  ;
 ;
 extern char *initstate (unsigned int __seed, char *__statebuf,    size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));
 extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));
 struct random_data   {     int32_t *fptr;     int32_t *rptr;     int32_t *state;     int rand_type;     int rand_deg;     int rand_sep;     int32_t *end_ptr;   };
 extern int random_r (struct random_data *__restrict __buf,        int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
 extern int srandom_r (unsigned int __seed, struct random_data *__buf)      throw () __attribute__ ((__nonnull__ (2)));
 extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,    size_t __statelen,    struct random_data *__restrict __buf)      throw () __attribute__ ((__nonnull__ (2, 4)));
 extern int setstate_r (char *__restrict __statebuf,          struct random_data *__restrict __buf)      throw () __attribute__ ((__nonnull__ (1, 2)));
 extern int rand (void) throw ();
 extern void srand (unsigned int __seed) throw ();
 ;
 ;
 extern void abort (void) throw () __attribute__ ((__noreturn__));
 ;
 ;
  }
 extern "C++" {
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
 ;
 ;
 ;
 ;
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
 template<> struct IsPod<char> : TrueType {};
 template<> struct IsPod<signed char> : TrueType {};
 template<> struct IsPod<unsigned char> : TrueType {};
 template<> struct IsPod<short> : TrueType {};
 template<> struct IsPod<unsigned short> : TrueType {};
 template<> struct IsPod<float> : TrueType {};
 template<> struct IsPod<double> : TrueType {};
 template<> struct IsPod<wchar_t> : TrueType {};
 template<> struct IsPod<char16_t> : TrueType {};
 template<typename T> struct IsPod<T*> : TrueType {};
 namespace detail { template<typename T> struct IsEmptyHelper   : IntegralConstant<bool, IsClass<T>::value && __is_empty(T)> {}; }
  template<typename T> struct IsEmpty : detail::IsEmptyHelper<typename RemoveCV<T>::Type> {};
  template<typename T, typename U> struct IsSame : FalseType {};
 template<typename T> struct IsSame<T, T> : TrueType {};
 namespace detail { template<class Base, class Derived> struct BaseOfTester : IntegralConstant<bool, __is_base_of(Base, Derived)> {};  }
  template<class Base, class Derived> struct IsBaseOf   : IntegralConstant<bool, detail::BaseOfTester<Base, Derived>::value> {};
 namespace detail { template<typename From, typename To> struct ConvertibleTester { private:   template<typename To1>   static char test_helper(To1);   template<typename From1, typename To1>   static decltype(test_helper<To1>(DeclVal<From1>())) test(int);   template<typename From1, typename To1>   static int test(...); public:   static const bool value =     sizeof(test<From, To>(0)) == sizeof(char); }; }
  template<typename From, typename To> struct IsConvertible   : IntegralConstant<bool, detail::ConvertibleTester<From, To>::value> {};
 template<typename B> struct IsConvertible<void, B>   : IntegralConstant<bool, IsVoid<B>::value> {};
 template<typename A> struct IsConvertible<A, void>   : IntegralConstant<bool, IsVoid<A>::value> {};
 template<> struct IsConvertible<void, void>   : TrueType {};
  template<typename T> struct RemoveConst {   typedef T Type; };
 template<typename T> struct RemoveConst<const T> {   typedef T Type; };
  template<typename T> struct RemoveReference {   typedef T Type; };
 template<typename T> struct RemoveReference<T&> {   typedef T Type; };
 template<typename T> struct RemoveReference<T&&> {   typedef T Type; };
  template<typename T> struct RemoveExtent {   typedef T Type; };
 template<typename T> struct RemoveExtent<T[]> {   typedef T Type; };
 template<typename T, decltype(sizeof(1)) N> struct RemoveExtent<T[N]> {   typedef T Type; };
 namespace detail { template<typename T, typename CVRemoved> struct RemovePointerHelper {   typedef T Type; }; template<typename T, typename Pointee> struct RemovePointerHelper<T, Pointee*> {   typedef Pointee Type; }; }
  template<typename T> struct AddPointer {   typedef typename RemoveReference<T>::Type* Type; };
  template<bool B, typename T> struct EnableIf {};
 template<typename T> struct EnableIf<true, T> {   typedef T Type; };
 template<bool Condition, typename A, typename B> struct Conditional {   typedef A Type; };
 template<class A, class B> struct Conditional<false, A, B> {   typedef B Type; };
 namespace detail { template<typename U,          bool IsArray = IsArray<U>::value,          bool IsFunction = IsFunction<U>::value> struct DecaySelector; template<typename U> struct DecaySelector<U, false, false> {   typedef typename RemoveCV<U>::Type Type; }; template<typename U> struct DecaySelector<U, true, false> {   typedef typename RemoveExtent<U>::Type* Type; }; template<typename U> struct DecaySelector<U, false, true> {   typedef typename AddPointer<U>::Type Type; }; };
  template<typename T> class Decay   : public detail::DecaySelector<typename RemoveReference<T>::Type> { };
 }
 namespace mozilla {
 namespace detail { template<typename T> struct AssertionConditionType {   typedef typename RemoveReference<T>::Type ValueT;   static_assert(!IsArray<ValueT>::value,                 "Expected boolean assertion condition, got an array or a "                 "string!");   static_assert(!IsFunction<ValueT>::value,                 "Expected boolean assertion condition, got a function! Did "                 "you intend to call that function?");   static_assert(!IsFloatingPoint<ValueT>::value,                 "It's often a bad idea to assert that a floating-point number "                 "is nonzero, because such assertions tend to intermittently "                 "fail. Shouldn't your code gracefully handle this case instead "                 "of asserting? Anyway, if you really want to do that, write an "                 "explicit boolean condition, like !!x or x!=0.");   static const bool isValid = true; }; }
 }
 namespace mozilla {
   ;
 template<typename T>  T&& Forward(typename RemoveReference<T>::Type& aX) ;
  ;
  ;
 }
 namespace mozilla {
 namespace detail {  class GuardObjectNotifier { private:   bool* mStatementDone; public:          }; class GuardObjectNotificationReceiver { private:   bool mStatementDone; public:          }; }
 }
 template<class T> struct already_AddRefed {
     private:   T* mRawPtr;
 };
  namespace mozilla {
 template<class T> class OwningNonNull;
 template<class T> class StaticRefPtr;
  template<class U> struct RefPtrTraits {       };
 }
  template <class T> class RefPtr {
 private:       private:   T* mRawPtr;
 public:   typedef T element_type;
               ;
                     template <typename R, typename... Args>   class Proxy   {     typedef R (T::*member_function)(Args...);     T* mRawPtr;     member_function mFunction;   public:               ;   };
      ;
       public:       private:    template<class U>   struct ConstRemovingRefPtrTraits   {             };
   template<class U>   struct ConstRemovingRefPtrTraits<const U>   {             };
 };
  namespace mozilla {
   ;
  ;
 }
 namespace mozilla {
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
   template<>     struct __and_<>     : public true_type     { };
   template<typename _B1>     struct __and_<_B1>     : public _B1     { };
   template<typename _B1, typename _B2>     struct __and_<_B1, _B2>     : public conditional<_B1::value, _B2, _B1>::type     { };
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
   template<>     struct __is_integral_helper<unsigned long>     : public true_type { };
   template<>     struct __is_integral_helper<long long>     : public true_type { };
   template<>     struct __is_integral_helper<unsigned long long>     : public true_type { };
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
   template<typename _Tp>     struct is_union     : public integral_constant<bool, __is_union(_Tp)>     { };
   template<typename _Tp>     struct is_class     : public integral_constant<bool, __is_class(_Tp)>     { };
   template<typename>     struct is_function     : public false_type { };
   template<typename _Res, typename... _ArgTypes>     struct is_function<_Res(_ArgTypes...)>     : public true_type { };
   template<typename _Res, typename... _ArgTypes>     struct is_function<_Res(_ArgTypes......) const volatile &>     : public true_type { };
   template<typename _Res, typename... _ArgTypes>     struct is_function<_Res(_ArgTypes......) const volatile &&>     : public true_type { };
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
   template<typename _Tp>     struct is_trivial     : public integral_constant<bool, __is_trivial(_Tp)>     { };
   template<typename _Tp>     struct is_trivially_copyable     : public integral_constant<bool, __is_trivially_copyable(_Tp)>     { };
   template<typename _Tp>     struct is_standard_layout     : public integral_constant<bool, __is_standard_layout(_Tp)>     { };
   template<typename _Tp>     struct is_pod     : public integral_constant<bool, __is_pod(_Tp)>     { };
   template<typename _Tp>     struct is_literal_type     : public integral_constant<bool, __is_literal_type(_Tp)>     { };
   template<typename _Tp>     struct is_empty     : public integral_constant<bool, __is_empty(_Tp)>     { };
   template<typename _Tp>     struct is_polymorphic     : public integral_constant<bool, __is_polymorphic(_Tp)>     { };
   template<typename _Tp>     struct is_final     : public integral_constant<bool, __is_final(_Tp)>     { };
   template<typename _Tp>     struct is_abstract     : public integral_constant<bool, __is_abstract(_Tp)>     { };
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
    struct __do_is_static_castable_impl   {     template<typename _From, typename _To, typename              = decltype(static_cast<_To>(declval<_From>()))>       static true_type __test(int);     template<typename, typename>       static false_type __test(...);   };
   template<typename _From, typename _To>     struct __is_static_castable_impl     : public __do_is_static_castable_impl     {       typedef decltype(__test<_From, _To>(0)) type;     };
   template<typename _From, typename _To>     struct __is_static_castable_safe     : public __is_static_castable_impl<_From, _To>::type     { };
   template<typename _From, typename _To>     struct __is_static_castable     : public integral_constant<bool, (__is_static_castable_safe<           _From, _To>::value)>     { };
   struct __do_is_direct_constructible_impl   {     template<typename _Tp, typename _Arg, typename       = decltype(::new _Tp(declval<_Arg>()))>       static true_type __test(int);     template<typename, typename>       static false_type __test(...);   };
   template<typename _Tp, typename _Arg>     struct __is_direct_constructible_impl     : public __do_is_direct_constructible_impl     {       typedef decltype(__test<_Tp, _Arg>(0)) type;     };
   template<typename _Tp, typename _Arg>     struct __is_direct_constructible_new_safe     : public __and_<is_destructible<_Tp>,                     __is_direct_constructible_impl<_Tp, _Arg>>     { };
   template<typename, typename>     struct is_same;
   template<typename, typename>     struct is_base_of;
   template<typename>     struct remove_reference;
   template<typename _From, typename _To, bool            = __not_<__or_<is_void<_From>,                           is_function<_From>>>::value>     struct __is_base_to_derived_ref;
   template<typename _Tp, typename... _Args>     struct is_constructible;
   template<typename _From, typename _To>     struct __is_base_to_derived_ref<_From, _To, true>     {       typedef typename remove_cv<typename remove_reference<_From         >::type>::type __src_t;       typedef typename remove_cv<typename remove_reference<_To         >::type>::type __dst_t;       typedef __and_<__not_<is_same<__src_t, __dst_t>>,        is_base_of<__src_t, __dst_t>,        __not_<is_constructible<__dst_t, _From>>> type;       static constexpr bool value = type::value;     };
   template<typename _From, typename _To>     struct __is_base_to_derived_ref<_From, _To, false>     : public false_type     { };
   template<typename _From, typename _To, bool            = __and_<is_lvalue_reference<_From>,                     is_rvalue_reference<_To>>::value>     struct __is_lvalue_to_rvalue_ref;
   template<typename _From, typename _To>     struct __is_lvalue_to_rvalue_ref<_From, _To, true>     {       typedef typename remove_cv<typename remove_reference<         _From>::type>::type __src_t;       typedef typename remove_cv<typename remove_reference<         _To>::type>::type __dst_t;       typedef __and_<__not_<is_function<__src_t>>,         __or_<is_same<__src_t, __dst_t>,       is_base_of<__dst_t, __src_t>>> type;       static constexpr bool value = type::value;     };
   template<typename _From, typename _To>     struct __is_lvalue_to_rvalue_ref<_From, _To, false>     : public false_type     { };
   template<typename _Tp, typename _Arg>     struct __is_direct_constructible_ref_cast     : public __and_<__is_static_castable<_Arg, _Tp>,                     __not_<__or_<__is_base_to_derived_ref<_Arg, _Tp>,                                  __is_lvalue_to_rvalue_ref<_Arg, _Tp>                    >>>     { };
   template<typename _Tp, typename _Arg>     struct __is_direct_constructible_new     : public conditional<is_reference<_Tp>::value,     __is_direct_constructible_ref_cast<_Tp, _Arg>,     __is_direct_constructible_new_safe<_Tp, _Arg>     >::type     { };
   template<typename _Tp, typename _Arg>     struct __is_direct_constructible     : public __is_direct_constructible_new<_Tp, _Arg>::type     { };
   struct __do_is_nary_constructible_impl   {     template<typename _Tp, typename... _Args, typename              = decltype(_Tp(declval<_Args>()...))>       static true_type __test(int);     template<typename, typename...>       static false_type __test(...);   };
   template<typename _Tp, typename... _Args>     struct __is_nary_constructible_impl     : public __do_is_nary_constructible_impl     {       typedef decltype(__test<_Tp, _Args...>(0)) type;     };
   template<typename _Tp, typename... _Args>     struct __is_nary_constructible     : public __is_nary_constructible_impl<_Tp, _Args...>::type     {       static_assert(sizeof...(_Args) > 1,                     "Only useful for > 1 arguments");     };
   template<typename _Tp, typename... _Args>     struct __is_constructible_impl     : public __is_nary_constructible<_Tp, _Args...>     { };
   template<typename _Tp, typename _Arg>     struct __is_constructible_impl<_Tp, _Arg>     : public __is_direct_constructible<_Tp, _Arg>     { };
   template<typename _Tp>     struct __is_constructible_impl<_Tp>     : public is_default_constructible<_Tp>     { };
   template<typename _Tp, typename... _Args>     struct is_constructible     : public __is_constructible_impl<_Tp, _Args...>::type     { };
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
   template<typename _Tp>     struct __is_nothrow_copy_constructible_impl<_Tp, false>     : public false_type { };
   template<typename _Tp>     struct __is_nothrow_copy_constructible_impl<_Tp, true>     : public is_nothrow_constructible<_Tp, const _Tp&>     { };
   template<typename _Tp>     struct is_nothrow_copy_constructible     : public __is_nothrow_copy_constructible_impl<_Tp>     { };
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
   template<typename _Tp>     struct add_cv     {       typedef typename       add_const<typename add_volatile<_Tp>::type>::type type;     };
   template<typename _Tp>     struct remove_reference<_Tp&>     { typedef _Tp type; };
   template<typename _Tp>     struct remove_reference<_Tp&&>     { typedef _Tp type; };
   template<typename _Tp, bool = __is_referenceable<_Tp>::value>     struct __add_lvalue_reference_helper     { typedef _Tp type; };
   template<typename _Tp>     struct __add_lvalue_reference_helper<_Tp, true>     { typedef _Tp& type; };
   template<typename _Tp>     struct add_lvalue_reference     : public __add_lvalue_reference_helper<_Tp>     { };
   template<typename _Tp, bool = __is_referenceable<_Tp>::value>     struct __add_rvalue_reference_helper     { typedef _Tp type; };
   template<typename _Tp>     struct __add_rvalue_reference_helper<_Tp, true>     { typedef _Tp&& type; };
   template<typename _Tp>     struct add_rvalue_reference     : public __add_rvalue_reference_helper<_Tp>     { };
   template<typename _Tp>     using remove_reference_t = typename remove_reference<_Tp>::type;
   template<typename _Tp>     using add_lvalue_reference_t = typename add_lvalue_reference<_Tp>::type;
   template<typename _Tp>     using add_rvalue_reference_t = typename add_rvalue_reference<_Tp>::type;
   template<typename _Unqualified, bool _IsConst, bool _IsVol>     struct __cv_selector;
   template<typename _Unqualified>     struct __cv_selector<_Unqualified, false, false>     { typedef _Unqualified __type; };
   template<typename _Unqualified>     struct __cv_selector<_Unqualified, false, true>     { typedef volatile _Unqualified __type; };
   template<typename _Unqualified>     struct __cv_selector<_Unqualified, true, false>     { typedef const _Unqualified __type; };
   template<typename _Unqualified>     struct __cv_selector<_Unqualified, true, true>     { typedef const volatile _Unqualified __type; };
   template<typename _Qualified, typename _Unqualified,     bool _IsConst = is_const<_Qualified>::value,     bool _IsVol = is_volatile<_Qualified>::value>     class __match_cv_qualifiers     {       typedef __cv_selector<_Unqualified, _IsConst, _IsVol> __match;     public:       typedef typename __match::__type __type;     };
   template<typename _Tp>     struct __make_unsigned     { typedef _Tp __type; };
   template<>     struct __make_unsigned<char>     { typedef unsigned char __type; };
   template<>     struct __make_unsigned<signed char>     { typedef unsigned char __type; };
   template<>     struct __make_unsigned<short>     { typedef unsigned short __type; };
   template<>     struct __make_unsigned<int>     { typedef unsigned int __type; };
   template<>     struct __make_unsigned<long>     { typedef unsigned long __type; };
   template<>     struct __make_unsigned<long long>     { typedef unsigned long long __type; };
   template<>     struct __make_unsigned<wchar_t> : __make_unsigned<int>     { };
    template<typename _Tp,     bool _IsInt = is_integral<_Tp>::value,     bool _IsEnum = is_enum<_Tp>::value>     class __make_unsigned_selector;
   template<typename _Tp>     class __make_unsigned_selector<_Tp, true, false>     {       typedef __make_unsigned<typename remove_cv<_Tp>::type> __unsignedt;       typedef typename __unsignedt::__type __unsigned_type;       typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;     public:       typedef typename __cv_unsigned::__type __type;     };
   template<typename _Tp>     class __make_unsigned_selector<_Tp, false, true>     {       typedef unsigned char __smallest;       static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);       static const bool __b1 = sizeof(_Tp) <= sizeof(unsigned short);       static const bool __b2 = sizeof(_Tp) <= sizeof(unsigned int);       static const bool __b3 = sizeof(_Tp) <= sizeof(unsigned long);       typedef conditional<__b3, unsigned long, unsigned long long> __cond3;       typedef typename __cond3::type __cond3_type;       typedef conditional<__b2, unsigned int, __cond3_type> __cond2;       typedef typename __cond2::type __cond2_type;       typedef conditional<__b1, unsigned short, __cond2_type> __cond1;       typedef typename __cond1::type __cond1_type;       typedef typename conditional<__b0, __smallest, __cond1_type>::type  __unsigned_type;       typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;     public:       typedef typename __cv_unsigned::__type __type;     };
   template<typename _Tp>     struct make_unsigned     { typedef typename __make_unsigned_selector<_Tp>::__type type; };
   template<>     struct make_unsigned<bool>;
   template<typename _Tp>     struct __make_signed     { typedef _Tp __type; };
   template<>     struct __make_signed<char>     { typedef signed char __type; };
   template<>     struct __make_signed<unsigned char>     { typedef signed char __type; };
   template<>     struct __make_signed<unsigned short>     { typedef signed short __type; };
   template<>     struct __make_signed<unsigned int>     { typedef signed int __type; };
   template<>     struct __make_signed<unsigned long>     { typedef signed long __type; };
   template<>     struct __make_signed<unsigned long long>     { typedef signed long long __type; };
    template<typename _Tp,     bool _IsInt = is_integral<_Tp>::value,     bool _IsEnum = is_enum<_Tp>::value>     class __make_signed_selector;
   template<typename _Tp>     class __make_signed_selector<_Tp, true, false>     {       typedef __make_signed<typename remove_cv<_Tp>::type> __signedt;       typedef typename __signedt::__type __signed_type;       typedef __match_cv_qualifiers<_Tp, __signed_type> __cv_signed;     public:       typedef typename __cv_signed::__type __type;     };
   template<typename _Tp>     class __make_signed_selector<_Tp, false, true>     {       typedef typename __make_unsigned_selector<_Tp>::__type __unsigned_type;     public:       typedef typename __make_signed_selector<__unsigned_type>::__type __type;     };
   template<typename _Tp>     struct make_signed     { typedef typename __make_signed_selector<_Tp>::__type type; };
   template<>     struct make_signed<bool>;
   template<typename _Tp>     using make_signed_t = typename make_signed<_Tp>::type;
   template<typename _Tp>     using make_unsigned_t = typename make_unsigned<_Tp>::type;
   template<typename _Tp>     struct remove_extent     { typedef _Tp type; };
   template<typename _Tp, std::size_t _Size>     struct remove_extent<_Tp[_Size]>     { typedef _Tp type; };
   template<typename _Tp>     struct remove_extent<_Tp[]>     { typedef _Tp type; };
   template<typename _Tp>     struct remove_all_extents     { typedef _Tp type; };
   template<typename _Tp, std::size_t _Size>     struct remove_all_extents<_Tp[_Size]>     { typedef typename remove_all_extents<_Tp>::type type; };
   template<typename _Tp>     struct remove_all_extents<_Tp[]>     { typedef typename remove_all_extents<_Tp>::type type; };
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
   template<typename... _Tp>     struct common_type;
   struct __do_common_type_impl   {     template<typename _Tp, typename _Up>       static __success_type<typename decay<decltype        (true ? std::declval<_Tp>()         : std::declval<_Up>())>::type> _S_test(int);     template<typename, typename>       static __failure_type _S_test(...);   };
   template<typename _Tp, typename _Up>     struct __common_type_impl     : private __do_common_type_impl     {       typedef decltype(_S_test<_Tp, _Up>(0)) type;     };
   struct __do_member_type_wrapper   {     template<typename _Tp>       static __success_type<typename _Tp::type> _S_test(int);     template<typename>       static __failure_type _S_test(...);   };
   template<typename _Tp>     struct __member_type_wrapper     : private __do_member_type_wrapper     {       typedef decltype(_S_test<_Tp>(0)) type;     };
   template<typename _CTp, typename... _Args>     struct __expanded_common_type_wrapper     {       typedef common_type<typename _CTp::type, _Args...> type;     };
   template<typename... _Args>     struct __expanded_common_type_wrapper<__failure_type, _Args...>     { typedef __failure_type type; };
   template<typename _Tp>     struct common_type<_Tp>     { typedef typename decay<_Tp>::type type; };
   template<typename _Tp, typename _Up>     struct common_type<_Tp, _Up>     : public __common_type_impl<_Tp, _Up>::type     { };
   template<typename _Tp, typename _Up, typename... _Vp>     struct common_type<_Tp, _Up, _Vp...>     : public __expanded_common_type_wrapper<typename __member_type_wrapper<                common_type<_Tp, _Up>>::type, _Vp...>::type     { };
   template<typename _Tp>     struct underlying_type     {       typedef __underlying_type(_Tp) type;     };
   template<typename _Tp>     struct __declval_protector     {       static const bool __stop = false;       static typename add_rvalue_reference<_Tp>::type __delegate();     };
   template<typename _Tp>     inline typename add_rvalue_reference<_Tp>::type     declval() noexcept     {       static_assert(__declval_protector<_Tp>::__stop,       "declval() must not be used!");       return __declval_protector<_Tp>::__delegate();     }
   template<typename _Signature>     class result_of;
   struct __invoke_memfun_ref { };
   struct __invoke_memfun_deref { };
   struct __invoke_memobj_ref { };
   struct __invoke_memobj_deref { };
   template<typename... _Tp>     using common_type_t = typename common_type<_Tp...>::type;
   template<typename _Tp>     using underlying_type_t = typename underlying_type<_Tp>::type;
   template<typename _Tp>     using result_of_t = typename result_of<_Tp>::type;
   template<typename...> using __void_t = void;
    template<typename _Default, typename _AlwaysVoid,     template<typename...> class _Op, typename... _Args>     struct __detector     {       using value_t = false_type;       using type = _Default;     };
   template<typename _Default, template<typename...> class _Op,      typename... _Args>     struct __detector<_Default, __void_t<_Op<_Args...>>, _Op, _Args...>     {       using value_t = true_type;       using type = _Op<_Args...>;     };
   template<typename _Default, template<typename...> class _Op,     typename... _Args>     using __detected_or = __detector<_Default, void, _Op, _Args...>;
   template<typename _Default, template<typename...> class _Op,     typename... _Args>     using __detected_or_t       = typename __detected_or<_Default, _Op, _Args...>::type;
   template<template<typename...> class _Default,     template<typename...> class _Op, typename... _Args>     using __detected_or_t_ =       __detected_or_t<_Default<_Args...>, _Op, _Args...>;
    template <typename _Tp>     struct __is_swappable;
   template <typename _Tp>     struct __is_nothrow_swappable;
   template<typename _Tp>     inline     typename enable_if<__and_<is_move_constructible<_Tp>,          is_move_assignable<_Tp>>::value>::type     swap(_Tp&, _Tp&)     noexcept(__and_<is_nothrow_move_constructible<_Tp>,              is_nothrow_move_assignable<_Tp>>::value);
   template<typename _Tp, size_t _Nm>     inline     typename enable_if<__is_swappable<_Tp>::value>::type     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])     noexcept(__is_nothrow_swappable<_Tp>::value);
   namespace __swappable_details {     using std::swap;     struct __do_is_swappable_impl     {       template<typename _Tp, typename                = decltype(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))>         static true_type __test(int);       template<typename>         static false_type __test(...);     };     struct __do_is_nothrow_swappable_impl     {       template<typename _Tp>         static __bool_constant<           noexcept(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))         > __test(int);       template<typename>         static false_type __test(...);     };   }
   template<typename _Tp>     struct __is_swappable_impl     : public __swappable_details::__do_is_swappable_impl     {       typedef decltype(__test<_Tp>(0)) type;     };
   template<typename _Tp>     struct __is_nothrow_swappable_impl     : public __swappable_details::__do_is_nothrow_swappable_impl     {       typedef decltype(__test<_Tp>(0)) type;     };
   template<typename _Tp>     struct __is_swappable     : public __is_swappable_impl<_Tp>::type     { };
   template<typename _Tp>     struct __is_nothrow_swappable     : public __is_nothrow_swappable_impl<_Tp>::type     { };
 }
 namespace mozilla {
 template<typename IteratorT> class ReverseIterator { public:   template<typename Iterator>   explicit ReverseIterator(Iterator aIter)  ;   template<typename Iterator>                ReverseIterator(const ReverseIterator<Iterator>& aOther)  ;   decltype(*DeclVal<IteratorT>()) operator*() const   {     IteratorT tmp = mCurrent;     return *--tmp;   }   ReverseIterator& operator++() { --mCurrent; return *this; }   ReverseIterator& operator--() { ++mCurrent; return *this; }   ReverseIterator operator++(int) { auto ret = *this; mCurrent--; return ret; }   ReverseIterator operator--(int) { auto ret = *this; mCurrent++; return ret; }   template<typename Iterator1, typename Iterator2>   friend bool operator==(const ReverseIterator<Iterator1>& aIter1,                          const ReverseIterator<Iterator2>& aIter2);   template<typename Iterator1, typename Iterator2>   friend bool operator!=(const ReverseIterator<Iterator1>& aIter1,                          const ReverseIterator<Iterator2>& aIter2);   ;   ;   ;   ; private:   IteratorT mCurrent; };
  ;
  ;
  ;
  ;
  ;
  ;
 namespace detail { template<typename IteratorT> class IteratorRange { public:   typedef IteratorT iterator;   typedef IteratorT const_iterator;   typedef ReverseIterator<IteratorT> reverse_iterator;   typedef ReverseIterator<IteratorT> const_reverse_iterator;     ;     ;                     reverse_iterator rend() const { return reverse_iterator(mIterBegin); }   const_reverse_iterator crend() const { return rend(); } private:   IteratorT mIterBegin;   IteratorT mIterEnd; }; }
 template<typename Range> detail::IteratorRange<typename Range::reverse_iterator> Reversed(Range& aRange) {   return {aRange.rbegin(), aRange.rend()}; }
 template<typename Range> detail::IteratorRange<typename Range::const_reverse_iterator> Reversed(const Range& aRange) {   return {aRange.rbegin(), aRange.rend()}; }
 }
 namespace mozilla {
 template<typename T, size_t Length> class Array {   T mArr[Length]; public:   Array() {}   template <typename... Args>                Array(Args&&... aArgs)     : mArr{mozilla::Forward<Args>(aArgs)...}   {     static_assert(sizeof...(aArgs) == Length,                   "The number of arguments should be equal to the template parameter Length");   }   T& operator[](size_t aIndex)   {     do { static_assert(mozilla::detail::AssertionConditionType<decltype(aIndex < Length)>::isValid, "invalid assertion condition"); if ((__builtin_expect(!!(!(!!(aIndex < Length))), 0))) { MOZ_ReportAssertionFailure("aIndex < Length", "/home/fitzgen/stylo/obj-x86_64-pc-linux-gnu/dist/include/mozilla/Array.h", 39); do { } while (0); do { *((volatile int*) __null) = 39; ::abort(); } while (0); } } while (0);     return mArr[aIndex];   }   const T& operator[](size_t aIndex) const   {     do { static_assert(mozilla::detail::AssertionConditionType<decltype(aIndex < Length)>::isValid, "invalid assertion condition"); if ((__builtin_expect(!!(!(!!(aIndex < Length))), 0))) { MOZ_ReportAssertionFailure("aIndex < Length", "/home/fitzgen/stylo/obj-x86_64-pc-linux-gnu/dist/include/mozilla/Array.h", 45); do { } while (0); do { *((volatile int*) __null) = 45; ::abort(); } while (0); } } while (0);     return mArr[aIndex];   }   bool operator==(const Array<T, Length>& aOther) const   {     for (size_t i = 0; i < Length; i++) {       if (mArr[i] != aOther[i]) {         return false;       }     }     return true;   }   typedef T* iterator;   typedef const T* const_iterator;   typedef ReverseIterator<T*> reverse_iterator;   typedef ReverseIterator<const T*> const_reverse_iterator;   iterator begin() { return mArr; }   const_iterator begin() const { return mArr; }   const_iterator cbegin() const { return begin(); }   iterator end() { return mArr + Length; }   const_iterator end() const { return mArr + Length; }                      };
 template<typename T> class Array<T, 0> { public:       };
 }
 namespace mozilla {
  template<typename IndexType,          IndexType SizeAsEnumValue,          typename ValueType> class EnumeratedArray { public:   static const size_t kSize = size_t(SizeAsEnumValue); private:   typedef Array<ValueType, kSize> ArrayType;   ArrayType mArray; public:   EnumeratedArray() {}   template <typename... Args>                EnumeratedArray(Args&&... aArgs)     : mArray{mozilla::Forward<Args>(aArgs)...}   {}   explicit EnumeratedArray(const EnumeratedArray& aOther)   {     for (size_t i = 0; i < kSize; i++) {       mArray[i] = aOther.mArray[i];     }   }   EnumeratedArray(EnumeratedArray&& aOther)   {     for (size_t i = 0; i < kSize; i++) {       mArray[i] = Move(aOther.mArray[i]);     }   }   ValueType& operator[](IndexType aIndex)   {     return mArray[size_t(aIndex)];   }   const ValueType& operator[](IndexType aIndex) const   {     return mArray[size_t(aIndex)];   }   typedef typename ArrayType::iterator iterator;   typedef typename ArrayType::const_iterator const_iterator;   typedef typename ArrayType::reverse_iterator reverse_iterator;   typedef typename ArrayType::const_reverse_iterator const_reverse_iterator;   iterator begin() { return mArray.begin(); }   const_iterator begin() const { return mArray.begin(); }   const_iterator cbegin() const { return mArray.cbegin(); }   iterator end() { return mArray.end(); }                         };
 }
 namespace mozilla {
 template<typename T> class AlignmentFinder {   struct Aligner   {     char mChar;     T mT;   }; public:   static const size_t alignment = sizeof(Aligner) - sizeof(T); };
  template<size_t Align> struct AlignedElem;
 template<> struct AlignedElem<1> {   uint8_t elem __attribute__((aligned(1))); };
  }
 extern "C++" {
 namespace std {    class exception   {   public:     exception() noexcept { }     virtual ~exception() noexcept;     virtual const char*     what() const noexcept;   };   class bad_exception : public exception   {   public:     bad_exception() noexcept { }     virtual ~bad_exception() noexcept;     virtual const char*     what() const noexcept;   };   typedef void (*terminate_handler) ();   typedef void (*unexpected_handler) ();   terminate_handler set_terminate(terminate_handler) noexcept;   terminate_handler get_terminate() noexcept;   void terminate() noexcept __attribute__ ((__noreturn__));   unexpected_handler set_unexpected(unexpected_handler) noexcept;   unexpected_handler get_unexpected() noexcept;   void unexpected() __attribute__ ((__noreturn__));    void __verbose_terminate_handler(); }
 }
 extern "C++" {
 namespace std {   class type_info;   namespace __exception_ptr   {     class exception_ptr;   }   using __exception_ptr::exception_ptr;   exception_ptr current_exception() noexcept;   void rethrow_exception(exception_ptr) __attribute__ ((__noreturn__));   namespace __exception_ptr   {     using std::rethrow_exception;     class exception_ptr     {       void* _M_exception_object;       explicit exception_ptr(void* __e) noexcept;       void _M_addref() noexcept;       void _M_release() noexcept;       void *_M_get() const noexcept __attribute__ ((__pure__));       friend exception_ptr std::current_exception() noexcept;       friend void std::rethrow_exception(exception_ptr);     public:       exception_ptr() noexcept;       exception_ptr(const exception_ptr&) noexcept;       exception_ptr(nullptr_t) noexcept       : _M_exception_object(0)       { }       exception_ptr(exception_ptr&& __o) noexcept       : _M_exception_object(__o._M_exception_object)       { __o._M_exception_object = 0; }        explicit operator bool() const       ;       friend bool       operator==(const exception_ptr&, const exception_ptr&)  noexcept __attribute__ ((__pure__));       const class std::type_info*       __cxa_exception_type() const noexcept  __attribute__ ((__pure__));     };     bool     operator==(const exception_ptr&, const exception_ptr&)       noexcept __attribute__ ((__pure__));     bool     operator!=(const exception_ptr&, const exception_ptr&)       noexcept __attribute__ ((__pure__));      void     swap(exception_ptr& __lhs, exception_ptr& __rhs)     ;   }   template<typename _Ex>     exception_ptr     make_exception_ptr(_Ex __ex) noexcept     {       try  {    throw __ex;  }       catch(...)  {    return current_exception();  }     }   template<typename _Ex>     exception_ptr     copy_exception(_Ex __ex) noexcept __attribute__ ((__deprecated__));   template<typename _Ex>     exception_ptr     copy_exception(_Ex __ex) noexcept     { return std::make_exception_ptr<_Ex>(__ex); } }
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   template<typename _Tp>     inline _Tp*     __addressof(_Tp& __r) noexcept     {       return reinterpret_cast<_Tp*>  (&const_cast<char&>(reinterpret_cast<const volatile char&>(__r)));     }
 }
  namespace std __attribute__ ((__visibility__ ("default"))) {
    template<typename _Tp>     constexpr _Tp&&     forward(typename std::remove_reference<_Tp>::type& __t) noexcept     { return static_cast<_Tp&&>(__t); }
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
 typedef Handle<jsid> HandleId;
 typedef Handle<JSObject*> HandleObject;
 typedef Handle<JSScript*> HandleScript;
 typedef Handle<JSString*> HandleString;
 typedef Handle<JS::Symbol*> HandleSymbol;
 typedef PersistentRooted<Value> PersistentRootedValue;
 }
 namespace js {
 class BaseShape;
 class LazyScript;
 class ObjectGroup;
 class RegExpShared;
 class Shape;
 class Scope;
 namespace jit { class JitCode; }
 }
  namespace JS {
  enum class TraceKind {     Object = 0x00,     String = 0x02,     Symbol = 0x03,     Script = 0x01,     Shape = 0x04,     ObjectGroup = 0x05,     Null = 0x06,     BaseShape = 0x0F,     JitCode = 0x1F,     LazyScript = 0x2F,     Scope = 0x3F,     RegExpShared = 0x4F };
 const static uintptr_t OutOfLineTraceKindMask = 0x07;
 static_assert(uintptr_t(JS::TraceKind::BaseShape) & OutOfLineTraceKindMask, "mask bits are set");
 static_assert(uintptr_t(JS::TraceKind::JitCode) & OutOfLineTraceKindMask, "mask bits are set");
 static_assert(uintptr_t(JS::TraceKind::LazyScript) & OutOfLineTraceKindMask, "mask bits are set");
 static_assert(uintptr_t(JS::TraceKind::Scope) & OutOfLineTraceKindMask, "mask bits are set");
 static_assert(uintptr_t(JS::TraceKind::RegExpShared) & OutOfLineTraceKindMask, "mask bits are set");
 template <typename T> struct MapTypeToTraceKind {     static const JS::TraceKind kind = T::TraceKind; };
  template <> struct MapTypeToTraceKind<js::BaseShape> { static const JS::TraceKind kind = JS::TraceKind::BaseShape; };
 template <> struct MapTypeToTraceKind<JSString> { static const JS::TraceKind kind = JS::TraceKind::String; };
 template <> struct MapTypeToTraceKind<JS::Symbol> { static const JS::TraceKind kind = JS::TraceKind::Symbol; };
 template <> struct MapTypeToTraceKind<js::RegExpShared> { static const JS::TraceKind kind = JS::TraceKind::RegExpShared; };
;
 enum class RootKind : int8_t { BaseShape, JitCode, LazyScript, Scope, Object, ObjectGroup, Script, Shape, String, Symbol, RegExpShared,     Id,     Value,     Traceable,     Limit };
 template <TraceKind traceKind> struct MapTraceKindToRootKind {};
 template <> struct MapTraceKindToRootKind<JS::TraceKind::BaseShape> { static const JS::RootKind kind = JS::RootKind::BaseShape; };
 template <> struct MapTraceKindToRootKind<JS::TraceKind::String> { static const JS::RootKind kind = JS::RootKind::String; };
 template <> struct MapTraceKindToRootKind<JS::TraceKind::Symbol> { static const JS::RootKind kind = JS::RootKind::Symbol; };
 template <> struct MapTraceKindToRootKind<JS::TraceKind::RegExpShared> { static const JS::RootKind kind = JS::RootKind::RegExpShared; };
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
   void   __throw_bad_cast(void) __attribute__((__noreturn__));
   void   __throw_bad_typeid(void) __attribute__((__noreturn__));
   void   __throw_logic_error(const char*) __attribute__((__noreturn__));
   void   __throw_domain_error(const char*) __attribute__((__noreturn__));
   void   __throw_invalid_argument(const char*) __attribute__((__noreturn__));
   void   __throw_length_error(const char*) __attribute__((__noreturn__));
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
   template<typename _Value>     const _Value __numeric_traits_integer<_Value>::__max;
   template<typename _Value>     const bool __numeric_traits_integer<_Value>::__is_signed;
   template<typename _Value>     const int __numeric_traits_integer<_Value>::__digits;
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
   template<typename _IteratorL, typename _IteratorR, typename _Container>     inline bool     operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,         const __normal_iterator<_IteratorR, _Container>& __rhs)     noexcept     { return __lhs.base() != __rhs.base(); }
   template<typename _Iterator, typename _Container>     inline bool     operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,         const __normal_iterator<_Iterator, _Container>& __rhs)     noexcept     { return __lhs.base() != __rhs.base(); }
   template<typename _IteratorL, typename _IteratorR, typename _Container>     inline bool     operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,        const __normal_iterator<_IteratorR, _Container>& __rhs)     noexcept     { return __lhs.base() < __rhs.base(); }
   template<typename _IteratorL, typename _IteratorR, typename _Container>     inline auto     operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,        const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept     -> decltype(__lhs.base() - __rhs.base())     { return __lhs.base() - __rhs.base(); }
   template<typename _Iterator, typename _Container>     inline typename __normal_iterator<_Iterator, _Container>::difference_type     operator-(const __normal_iterator<_Iterator, _Container>& __lhs,        const __normal_iterator<_Iterator, _Container>& __rhs)     noexcept     { return __lhs.base() - __rhs.base(); }
   template<typename _Iterator, typename _Container>     inline __normal_iterator<_Iterator, _Container>     operator+(typename __normal_iterator<_Iterator, _Container>::difference_type        __n, const __normal_iterator<_Iterator, _Container>& __i)     noexcept     { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }
 }
 namespace __gnu_cxx {
 namespace __ops {   struct _Iter_less_iter   {     template<typename _Iterator1, typename _Iterator2>       constexpr       bool       operator()(_Iterator1 __it1, _Iterator2 __it2) const       { return *__it1 < *__it2; }   };   constexpr   inline _Iter_less_iter   __iter_less_iter()   { return _Iter_less_iter(); }   struct _Iter_less_val   {     template<typename _Iterator, typename _Value>       bool       operator()(_Iterator __it, _Value& __val) const       ;     };    _Iter_less_val   __iter_less_val()   ;    _Iter_less_val   __iter_comp_val(_Iter_less_iter)   ;   struct _Val_less_iter   {     template<typename _Value, typename _Iterator>       bool       operator()(_Value& __val, _Iterator __it) const       ;     };    _Val_less_iter   __val_less_iter()   ;    _Val_less_iter   __val_comp_iter(_Iter_less_iter)   ;   struct _Iter_equal_to_iter   {     template<typename _Iterator1, typename _Iterator2>       bool       operator()(_Iterator1 __it1, _Iterator2 __it2) const       ;     };    _Iter_equal_to_iter   __iter_equal_to_iter()   ;   struct _Iter_equal_to_val   {     template<typename _Iterator, typename _Value>       bool       operator()(_Iterator __it, _Value& __val) const       ;     };    _Iter_equal_to_val   __iter_equal_to_val()   ;    _Iter_equal_to_val   __iter_comp_val(_Iter_equal_to_iter)   ;   template<typename _Compare>     struct _Iter_comp_iter     {       _Compare _M_comp;       constexpr       _Iter_comp_iter(_Compare __comp)  : _M_comp(__comp)       { }       template<typename _Iterator1, typename _Iterator2>         constexpr         bool         operator()(_Iterator1 __it1, _Iterator2 __it2)         { return bool(_M_comp(*__it1, *__it2)); }     };   template<typename _Compare>     constexpr     inline _Iter_comp_iter<_Compare>     __iter_comp_iter(_Compare __comp)     { return _Iter_comp_iter<_Compare>(__comp); }   template<typename _Compare>     struct _Iter_comp_val     {       _Compare _M_comp;       _Iter_comp_val(_Compare __comp)  : _M_comp(__comp)       { }       template<typename _Iterator, typename _Value>  bool  operator()(_Iterator __it, _Value& __val)  { return bool(_M_comp(*__it, __val)); }     };   template<typename _Compare>    inline _Iter_comp_val<_Compare>     __iter_comp_val(_Compare __comp)     { return _Iter_comp_val<_Compare>(__comp); }   template<typename _Compare>     inline _Iter_comp_val<_Compare>     __iter_comp_val(_Iter_comp_iter<_Compare> __comp)     { return _Iter_comp_val<_Compare>(__comp._M_comp); }   template<typename _Compare>     struct _Val_comp_iter     {       _Compare _M_comp;       _Val_comp_iter(_Compare __comp)  : _M_comp(__comp)       { }       template<typename _Value, typename _Iterator>  bool  operator()(_Value& __val, _Iterator __it)  { return bool(_M_comp(__val, *__it)); }     };   template<typename _Compare>     inline _Val_comp_iter<_Compare>     __val_comp_iter(_Compare __comp)     { return _Val_comp_iter<_Compare>(__comp); }   template<typename _Compare>     inline _Val_comp_iter<_Compare>     __val_comp_iter(_Iter_comp_iter<_Compare> __comp)     { return _Val_comp_iter<_Compare>(__comp._M_comp); }   template<typename _Value>     struct _Iter_equals_val     {       _Value& _M_value;       _Iter_equals_val(_Value& __value)  : _M_value(__value)       { }       template<typename _Iterator>  bool  operator()(_Iterator __it)  { return *__it == _M_value; }     };   template<typename _Value>     inline _Iter_equals_val<_Value>     __iter_equals_val(_Value& __val)     { return _Iter_equals_val<_Value>(__val); }   template<typename _Iterator1>     struct _Iter_equals_iter     {       typename std::iterator_traits<_Iterator1>::reference _M_ref;       _Iter_equals_iter(_Iterator1 __it1)  : _M_ref(*__it1)       { }       template<typename _Iterator2>  bool  operator()(_Iterator2 __it2)  { return *__it2 == _M_ref; }     };   template<typename _Iterator>     inline _Iter_equals_iter<_Iterator>     __iter_comp_iter(_Iter_equal_to_iter, _Iterator __it)     { return _Iter_equals_iter<_Iterator>(__it); }   template<typename _Predicate>     struct _Iter_pred     {       _Predicate _M_pred;       _Iter_pred(_Predicate __pred)  : _M_pred(__pred)       { }       template<typename _Iterator>  bool  operator()(_Iterator __it)  { return bool(_M_pred(*__it)); }     };   template<typename _Predicate>     inline _Iter_pred<_Predicate>     __pred_iter(_Predicate __pred)     { return _Iter_pred<_Predicate>(__pred); }   template<typename _Compare, typename _Value>     struct _Iter_comp_to_val     {       _Compare _M_comp;       _Value& _M_value;       _Iter_comp_to_val(_Compare __comp, _Value& __value)  : _M_comp(__comp), _M_value(__value)       { }       template<typename _Iterator>  bool  operator()(_Iterator __it)  { return bool(_M_comp(*__it, _M_value)); }     };   template<typename _Compare, typename _Value>     _Iter_comp_to_val<_Compare, _Value>     __iter_comp_val(_Compare __comp, _Value &__val)     { return _Iter_comp_to_val<_Compare, _Value>(__comp, __val); }   template<typename _Compare, typename _Iterator1>     struct _Iter_comp_to_iter     {       _Compare _M_comp;       typename std::iterator_traits<_Iterator1>::reference _M_ref;       _Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1)  : _M_comp(__comp), _M_ref(*__it1)       { }       template<typename _Iterator2>  bool  operator()(_Iterator2 __it2)  { return bool(_M_comp(*__it2, _M_ref)); }     };   template<typename _Compare, typename _Iterator>     inline _Iter_comp_to_iter<_Compare, _Iterator>     __iter_comp_iter(_Iter_comp_iter<_Compare> __comp, _Iterator __it)     { return _Iter_comp_to_iter<_Compare, _Iterator>(__comp._M_comp, __it); }   template<typename _Predicate>     struct _Iter_negate     {       _Predicate _M_pred;       _Iter_negate(_Predicate __pred)  : _M_pred(__pred)       { }       template<typename _Iterator>  bool  operator()(_Iterator __it)  { return !bool(_M_pred(*__it)); }     };   template<typename _Predicate>     inline _Iter_negate<_Predicate>     __negate(_Iter_pred<_Predicate> __pred)     { return _Iter_negate<_Predicate>(__pred._M_pred); } }
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
    template<typename _II, typename _OI>      _OI     copy(_II __first, _II __last, _OI __result)     ;
         ;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
    template<typename>     class allocator;
   template<>     class allocator<void>;
   template<typename, typename>     struct uses_allocator;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   struct __allocator_traits_base   {     template<typename _Alloc, typename _Up>       using __rebind = typename _Alloc::template rebind<_Up>::other;   protected:     template<typename _Tp>       using __pointer = typename _Tp::pointer;     template<typename _Tp>       using __c_pointer = typename _Tp::const_pointer;     template<typename _Tp>       using __v_pointer = typename _Tp::void_pointer;     template<typename _Tp>       using __cv_pointer = typename _Tp::const_void_pointer;     template<typename _Tp>       using __diff_type = typename _Tp::difference_type;     template<typename _Tp>       using __size_type = typename _Tp::size_type;     template<typename _Tp>       using __pocca = typename _Tp::propagate_on_container_copy_assignment;     template<typename _Tp>       using __pocma = typename _Tp::propagate_on_container_move_assignment;     template<typename _Tp>       using __pocs = typename _Tp::propagate_on_container_swap;     template<typename _Tp>       using __equal = typename _Tp::is_always_equal;   };
   template<typename _Alloc, typename _Up>     using __alloc_rebind = __detected_or_t_<__replace_first_arg_t,          __allocator_traits_base::__rebind,          _Alloc, _Up>;
   template<typename _Alloc>     struct allocator_traits : __allocator_traits_base     {       typedef _Alloc allocator_type;       typedef typename _Alloc::value_type value_type;       using pointer = __detected_or_t<value_type*, __pointer, _Alloc>;       using const_pointer  = __detected_or_t<__ptr_rebind<pointer, const value_type>,      __c_pointer, _Alloc>;       using void_pointer  = __detected_or_t<__ptr_rebind<pointer, void>, __v_pointer, _Alloc>;       using const_void_pointer  = __detected_or_t<__ptr_rebind<pointer, const void>, __cv_pointer,      _Alloc>;       using difference_type  = __detected_or_t<typename pointer_traits<pointer>::difference_type,      __diff_type, _Alloc>;       using size_type  = __detected_or_t<typename make_unsigned<difference_type>::type,      __size_type, _Alloc>;       using propagate_on_container_copy_assignment  = __detected_or_t<false_type, __pocca, _Alloc>;       using propagate_on_container_move_assignment  = __detected_or_t<false_type, __pocma, _Alloc>;       using propagate_on_container_swap  = __detected_or_t<false_type, __pocs, _Alloc>;       using is_always_equal  = __detected_or_t<typename is_empty<_Alloc>::type, __equal, _Alloc>;       template<typename _Tp>  using rebind_alloc = __alloc_rebind<_Alloc, _Tp>;       template<typename _Tp>  using rebind_traits = allocator_traits<rebind_alloc<_Tp>>;       static_assert(!is_same<rebind_alloc<value_type>, __undefined>::value,    "allocator defines rebind or is like Alloc<T, Args>");     private:       template<typename _Alloc2>  static auto  _S_allocate(_Alloc2& __a, size_type __n, const_void_pointer __hint, int)  -> decltype(__a.allocate(__n, __hint))  { return __a.allocate(__n, __hint); }       template<typename _Alloc2>  static pointer  _S_allocate(_Alloc2& __a, size_type __n, const_void_pointer, ...)  { return __a.allocate(__n); }       template<typename _Tp, typename... _Args>  struct __construct_helper  {    template<typename _Alloc2,      typename = decltype(std::declval<_Alloc2*>()->construct(     std::declval<_Tp*>(), std::declval<_Args>()...))>      static true_type __test(int);    template<typename>      static false_type __test(...);    using type = decltype(__test<_Alloc>(0));  };       template<typename _Tp, typename... _Args>  using __has_construct    = typename __construct_helper<_Tp, _Args...>::type;       template<typename _Tp, typename... _Args>  static _Require<__has_construct<_Tp, _Args...>>  _S_construct(_Alloc& __a, _Tp* __p, _Args&&... __args)  { __a.construct(__p, std::forward<_Args>(__args)...); }       template<typename _Tp, typename... _Args>  static  _Require<__and_<__not_<__has_construct<_Tp, _Args...>>,           is_constructible<_Tp, _Args...>>>  _S_construct(_Alloc&, _Tp* __p, _Args&&... __args)  { ::new((void*)__p) _Tp(std::forward<_Args>(__args)...); }       template<typename _Alloc2, typename _Tp>  static auto  _S_destroy(_Alloc2& __a, _Tp* __p, int)  -> decltype(__a.destroy(__p))  { __a.destroy(__p); }       template<typename _Alloc2, typename _Tp>  static void  _S_destroy(_Alloc2&, _Tp* __p, ...)  { __p->~_Tp(); }       template<typename _Alloc2>  static auto  _S_max_size(_Alloc2& __a, int)  -> decltype(__a.max_size())  { return __a.max_size(); }       template<typename _Alloc2>  static size_type  _S_max_size(_Alloc2&, ...)  {    return __gnu_cxx::__numeric_traits<size_type>::__max      / sizeof(value_type);  }       template<typename _Alloc2>  static auto  _S_select(_Alloc2& __a, int)  -> decltype(__a.select_on_container_copy_construction())  { return __a.select_on_container_copy_construction(); }       template<typename _Alloc2>  static _Alloc2  _S_select(_Alloc2& __a, ...)  { return __a; }     public:        static pointer       allocate(_Alloc& __a, size_type __n)       { return __a.allocate(__n); }        static void       deallocate(allocator_type& __a, pointer __p, size_type __n)       ;        template<typename _Up, typename... _Args>  static void  construct(allocator_type& __a, _Up* __p, _Args&&... __args)  ;        template<typename _Up>  static void  destroy(allocator_type& __a, _Up* __p)  ;       static size_type       max_size(const allocator_type& __a) noexcept       { return __a.max_size(); }       static allocator_type       select_on_container_copy_construction(const allocator_type& __rhs)       { return __rhs; }     };
   template<typename _Alloc>      void     __do_alloc_on_copy(_Alloc& __one, const _Alloc& __two, true_type)     ;
   template<typename _Alloc>      void     __do_alloc_on_copy(_Alloc&, const _Alloc&, false_type)     ;
   template<typename _Alloc>      void __alloc_on_copy(_Alloc& __one, const _Alloc& __two)     ;
   template<typename _Alloc>      _Alloc __alloc_on_copy(const _Alloc& __a)     ;
   template<typename _Alloc>      void __do_alloc_on_move(_Alloc& __one, _Alloc& __two, true_type)     ;
   template<typename _Alloc>      void __do_alloc_on_move(_Alloc&, _Alloc&, false_type)     ;
   template<typename _Alloc>      void __alloc_on_move(_Alloc& __one, _Alloc& __two)     ;
   template<typename _Alloc>      void __do_alloc_on_swap(_Alloc& __one, _Alloc& __two, true_type)     ;
   template<typename _Alloc>      void __do_alloc_on_swap(_Alloc&, _Alloc&, false_type)     ;
   template<typename _Alloc>      void __alloc_on_swap(_Alloc& __one, _Alloc& __two)     ;
   template<typename _Alloc>     class __is_copy_insertable_impl     {       typedef allocator_traits<_Alloc> _Traits;       template<typename _Up, typename         = decltype(_Traits::construct(std::declval<_Alloc&>(),           std::declval<_Up*>(),           std::declval<const _Up&>()))>  static true_type  _M_select(int);       template<typename _Up>  static false_type  _M_select(...);     public:       typedef decltype(_M_select<typename _Alloc::value_type>(0)) type;     };
   template<typename _Alloc>     struct __is_copy_insertable     : __is_copy_insertable_impl<_Alloc>::type     { };
   template<typename _Tp>     struct __is_copy_insertable<allocator<_Tp>>     : is_copy_constructible<_Tp>     { };
 }
 namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
 template<typename _Alloc>   struct __alloc_traits   : std::allocator_traits<_Alloc>   {     typedef _Alloc allocator_type;     typedef std::allocator_traits<_Alloc> _Base_type;     typedef typename _Base_type::value_type value_type;     typedef typename _Base_type::pointer pointer;     typedef typename _Base_type::const_pointer const_pointer;     typedef typename _Base_type::size_type size_type;     typedef typename _Base_type::difference_type difference_type;     typedef value_type& reference;     typedef const value_type& const_reference;     using _Base_type::allocate;     using _Base_type::deallocate;     using _Base_type::construct;     using _Base_type::destroy;     using _Base_type::max_size;   private:     template<typename _Ptr>       using __is_custom_pointer  = std::__and_<std::is_same<pointer, _Ptr>,         std::__not_<std::is_pointer<_Ptr>>>;   public:     template<typename _Ptr, typename... _Args>       static typename std::enable_if<__is_custom_pointer<_Ptr>::value>::type       construct(_Alloc& __a, _Ptr __p, _Args&&... __args)       ;     template<typename _Ptr>       static typename std::enable_if<__is_custom_pointer<_Ptr>::value>::type       destroy(_Alloc& __a, _Ptr __p)       ;     static _Alloc _S_select_on_copy(const _Alloc& __a)     ;     static void _S_on_swap(_Alloc& __a, _Alloc& __b)     ;     static constexpr bool _S_propagate_on_copy_assign()     { return _Base_type::propagate_on_container_copy_assignment::value; }     static constexpr bool _S_propagate_on_move_assign()     { return _Base_type::propagate_on_container_move_assignment::value; }     static constexpr bool _S_propagate_on_swap()     { return _Base_type::propagate_on_container_swap::value; }     static constexpr bool _S_always_equal()     { return _Base_type::is_always_equal::value; }     static constexpr bool _S_nothrow_move()     { return _S_propagate_on_move_assign() || _S_always_equal(); }     template<typename _Tp>       struct rebind       { typedef typename _Base_type::template rebind_alloc<_Tp> other; };    };
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   template<typename _T1, typename... _Args>      void     _Construct(_T1* __p, _Args&&... __args)     ;
    template<typename _Tp>      void     _Destroy(_Tp* __pointer)     ;
   template<bool>     struct _Destroy_aux     {       template<typename _ForwardIterator>         static void         __destroy(_ForwardIterator __first, _ForwardIterator __last)  ;     };
   template<>     struct _Destroy_aux<true>     {       template<typename _ForwardIterator>         static void         __destroy(_ForwardIterator, _ForwardIterator) ;     };
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
    template<class _CharT>     struct char_traits;
   template<> struct char_traits<char>;
   template<> struct char_traits<wchar_t>;
   template<> struct char_traits<char16_t>;
   template<> struct char_traits<char32_t>;
 namespace __cxx11 {   template<typename _CharT, typename _Traits = char_traits<_CharT>,            typename _Alloc = allocator<_CharT> >     class basic_string;   typedef basic_string<char> string;   typedef basic_string<wchar_t> wstring;   typedef basic_string<char16_t> u16string;   typedef basic_string<char32_t> u32string; }
 }
 namespace std {
   using ::mbstate_t;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
    typedef long streamoff;
    typedef ptrdiff_t streamsize;
    template<typename _StateT>     class fpos     {     private:       streamoff _M_off;       _StateT _M_state;     public:                                                                            };
        ;
        ;
   typedef fpos<mbstate_t> streampos;
   typedef fpos<mbstate_t> wstreampos;
   typedef fpos<mbstate_t> u16streampos;
   typedef fpos<mbstate_t> u32streampos;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
    class ios_base;
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class basic_ios;
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class basic_streambuf;
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class basic_istream;
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class basic_ostream;
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class basic_iostream;
 namespace __cxx11 {   template<typename _CharT, typename _Traits = char_traits<_CharT>,      typename _Alloc = allocator<_CharT> >     class basic_stringbuf;   template<typename _CharT, typename _Traits = char_traits<_CharT>,     typename _Alloc = allocator<_CharT> >     class basic_istringstream;   template<typename _CharT, typename _Traits = char_traits<_CharT>,     typename _Alloc = allocator<_CharT> >     class basic_ostringstream;   template<typename _CharT, typename _Traits = char_traits<_CharT>,     typename _Alloc = allocator<_CharT> >     class basic_stringstream; }
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class basic_filebuf;
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class basic_ifstream;
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class basic_ofstream;
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class basic_fstream;
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class istreambuf_iterator;
   template<typename _CharT, typename _Traits = char_traits<_CharT> >     class ostreambuf_iterator;
   typedef basic_ios<char> ios;
   typedef basic_streambuf<char> streambuf;
   typedef basic_istream<char> istream;
   typedef basic_ostream<char> ostream;
   typedef basic_iostream<char> iostream;
   template<>     struct char_traits<char>     {       typedef char char_type;       typedef int int_type;       typedef streampos pos_type;       typedef streamoff off_type;       typedef mbstate_t state_type;       static void       assign(char_type& __c1, const char_type& __c2) noexcept       { __c1 = __c2; }       static constexpr bool       eq(const char_type& __c1, const char_type& __c2) noexcept       { return __c1 == __c2; }       static constexpr bool       lt(const char_type& __c1, const char_type& __c2) noexcept       {  return (static_cast<unsigned char>(__c1)   < static_cast<unsigned char>(__c2));       }       static int       compare(const char_type* __s1, const char_type* __s2, size_t __n)       {  if (__n == 0)    return 0;  return __builtin_memcmp(__s1, __s2, __n);       }       static size_t       length(const char_type* __s)       { return __builtin_strlen(__s); }       static const char_type*       find(const char_type* __s, size_t __n, const char_type& __a)       {  if (__n == 0)    return 0;  return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n));       }       static char_type*       move(char_type* __s1, const char_type* __s2, size_t __n)       {  if (__n == 0)    return __s1;  return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n));       }       static char_type*       copy(char_type* __s1, const char_type* __s2, size_t __n)       {  if (__n == 0)    return __s1;  return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n));       }       static char_type*       assign(char_type* __s, size_t __n, char_type __a)       {  if (__n == 0)    return __s;  return static_cast<char_type*>(__builtin_memset(__s, __a, __n));       }       static constexpr char_type       to_char_type(const int_type& __c) noexcept       { return static_cast<char_type>(__c); }       static constexpr int_type       to_int_type(const char_type& __c) noexcept       { return static_cast<int_type>(static_cast<unsigned char>(__c)); }       static constexpr bool       eq_int_type(const int_type& __c1, const int_type& __c2) noexcept       { return __c1 == __c2; }       static constexpr int_type       eof() noexcept       { return static_cast<int_type>(-1); }       static constexpr int_type       not_eof(const int_type& __c) noexcept       { return (__c == eof()) ? 0 : __c; }   };
   template<>     struct char_traits<wchar_t>     {       typedef wchar_t char_type;       typedef wint_t int_type;       typedef streamoff off_type;       typedef wstreampos pos_type;       typedef mbstate_t state_type;       static void       assign(char_type& __c1, const char_type& __c2) noexcept       { __c1 = __c2; }       static constexpr bool       eq(const char_type& __c1, const char_type& __c2) noexcept       { return __c1 == __c2; }       static constexpr bool       lt(const char_type& __c1, const char_type& __c2) noexcept       { return __c1 < __c2; }       static int       compare(const char_type* __s1, const char_type* __s2, size_t __n)       {  if (__n == 0)    return 0;  return wmemcmp(__s1, __s2, __n);       }       static size_t       length(const char_type* __s)       { return wcslen(__s); }       static const char_type*       find(const char_type* __s, size_t __n, const char_type& __a)       {  if (__n == 0)    return 0;  return wmemchr(__s, __a, __n);       }       static char_type*       move(char_type* __s1, const char_type* __s2, size_t __n)       {  if (__n == 0)    return __s1;  return wmemmove(__s1, __s2, __n);       }       static char_type*       copy(char_type* __s1, const char_type* __s2, size_t __n)       {  if (__n == 0)    return __s1;  return wmemcpy(__s1, __s2, __n);       }       static char_type*       assign(char_type* __s, size_t __n, char_type __a)       {  if (__n == 0)    return __s;  return wmemset(__s, __a, __n);       }       static constexpr char_type       to_char_type(const int_type& __c) noexcept       { return char_type(__c); }       static constexpr int_type       to_int_type(const char_type& __c) noexcept       { return int_type(__c); }       static constexpr bool       eq_int_type(const int_type& __c1, const int_type& __c2) noexcept       { return __c1 == __c2; }       static constexpr int_type       eof() noexcept       { return static_cast<int_type>((0xffffffffu)); }       static constexpr int_type       not_eof(const int_type& __c) noexcept       { return eq_int_type(__c, eof()) ? 0 : __c; }   };
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   template<>     struct char_traits<char16_t>     {       typedef char16_t char_type;       typedef uint_least16_t int_type;       typedef streamoff off_type;       typedef u16streampos pos_type;       typedef mbstate_t state_type;       static void       assign(char_type& __c1, const char_type& __c2) noexcept       { __c1 = __c2; }       static constexpr bool       eq(const char_type& __c1, const char_type& __c2) noexcept       { return __c1 == __c2; }       static constexpr bool       lt(const char_type& __c1, const char_type& __c2) noexcept       { return __c1 < __c2; }       static int       compare(const char_type* __s1, const char_type* __s2, size_t __n)       {  for (size_t __i = 0; __i < __n; ++__i)    if (lt(__s1[__i], __s2[__i]))      return -1;    else if (lt(__s2[__i], __s1[__i]))      return 1;  return 0;       }       static size_t       length(const char_type* __s)       {  size_t __i = 0;  while (!eq(__s[__i], char_type()))    ++__i;  return __i;       }       static const char_type*       find(const char_type* __s, size_t __n, const char_type& __a)       {  for (size_t __i = 0; __i < __n; ++__i)    if (eq(__s[__i], __a))      return __s + __i;  return 0;       }       static char_type*       move(char_type* __s1, const char_type* __s2, size_t __n)       {  if (__n == 0)    return __s1;  return (static_cast<char_type*>   (__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));       }       static char_type*       copy(char_type* __s1, const char_type* __s2, size_t __n)       {  if (__n == 0)    return __s1;  return (static_cast<char_type*>   (__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));       }       static char_type*       assign(char_type* __s, size_t __n, char_type __a)       {  for (size_t __i = 0; __i < __n; ++__i)    assign(__s[__i], __a);  return __s;       }       static constexpr char_type       to_char_type(const int_type& __c) noexcept       { return char_type(__c); }       static constexpr int_type       to_int_type(const char_type& __c) noexcept       { return int_type(__c); }       static constexpr bool       eq_int_type(const int_type& __c1, const int_type& __c2) noexcept       { return __c1 == __c2; }       static constexpr int_type       eof() noexcept       { return static_cast<int_type>(-1); }       static constexpr int_type       not_eof(const int_type& __c) noexcept       { return eq_int_type(__c, eof()) ? 0 : __c; }     };
   template<>     struct char_traits<char32_t>     {       typedef char32_t char_type;       typedef uint_least32_t int_type;       typedef streamoff off_type;       typedef u32streampos pos_type;       typedef mbstate_t state_type;       static void       assign(char_type& __c1, const char_type& __c2) noexcept       { __c1 = __c2; }       static constexpr bool       eq(const char_type& __c1, const char_type& __c2) noexcept       { return __c1 == __c2; }       static constexpr bool       lt(const char_type& __c1, const char_type& __c2) noexcept       { return __c1 < __c2; }       static int       compare(const char_type* __s1, const char_type* __s2, size_t __n)       {  for (size_t __i = 0; __i < __n; ++__i)    if (lt(__s1[__i], __s2[__i]))      return -1;    else if (lt(__s2[__i], __s1[__i]))      return 1;  return 0;       }       static size_t       length(const char_type* __s)       {  size_t __i = 0;  while (!eq(__s[__i], char_type()))    ++__i;  return __i;       }       static const char_type*       find(const char_type* __s, size_t __n, const char_type& __a)       {  for (size_t __i = 0; __i < __n; ++__i)    if (eq(__s[__i], __a))      return __s + __i;  return 0;       }       static char_type*       move(char_type* __s1, const char_type* __s2, size_t __n)       {  if (__n == 0)    return __s1;  return (static_cast<char_type*>   (__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));       }       static char_type*       copy(char_type* __s1, const char_type* __s2, size_t __n)       {  if (__n == 0)    return __s1;  return (static_cast<char_type*>   (__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));       }       static char_type*       assign(char_type* __s, size_t __n, char_type __a)       {  for (size_t __i = 0; __i < __n; ++__i)    assign(__s[__i], __a);  return __s;       }       static constexpr char_type       to_char_type(const int_type& __c) noexcept       { return char_type(__c); }       static constexpr int_type       to_int_type(const char_type& __c) noexcept       { return int_type(__c); }       static constexpr bool       eq_int_type(const int_type& __c1, const int_type& __c2) noexcept       { return __c1 == __c2; }       static constexpr int_type       eof() noexcept       { return static_cast<int_type>(-1); }       static constexpr int_type       not_eof(const int_type& __c) noexcept       { return eq_int_type(__c, eof()) ? 0 : __c; }     };
 }
 extern "C" {
  struct lconv {   char *decimal_point;   char *thousands_sep;   char *grouping;   char *int_curr_symbol;   char *currency_symbol;   char *mon_decimal_point;   char *mon_thousands_sep;   char *mon_grouping;   char *positive_sign;   char *negative_sign;   char int_frac_digits;   char frac_digits;   char p_cs_precedes;   char p_sep_by_space;   char n_cs_precedes;   char n_sep_by_space;   char p_sign_posn;   char n_sign_posn;   char int_p_cs_precedes;   char int_p_sep_by_space;   char int_n_cs_precedes;   char int_n_sep_by_space;   char int_p_sign_posn;   char int_n_sign_posn;  };
 ;
 ;
  ;
 ;
 extern __locale_t uselocale (__locale_t __dataset) throw ();
 }
  namespace std __attribute__ ((__visibility__ ("default"))) {
   typedef __locale_t __c_locale;
     }
 extern "C" {
  enum {   _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),   _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),   _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),   _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),   _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),   _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),   _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),   _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),   _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),   _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),   _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),   _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8)) };
  }
 namespace std __attribute__ ((__visibility__ ("default"))) {
    class locale;
   ;
   template<typename _Facet>     const _Facet&     use_facet(const locale&);
   template<typename _CharT>     bool     isspace(_CharT, const locale&);
   template<typename _CharT>     bool     isprint(_CharT, const locale&);
   template<typename _CharT>     bool     iscntrl(_CharT, const locale&);
   ;
   ;
   ;
   ;
   class ctype_base;
   template<typename _CharT>     class ctype;
   template<> class ctype<char>;
   template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >     class num_get;
   template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >     class num_put;
 namespace __cxx11 {   template<typename _CharT> class numpunct;   template<typename _CharT> class numpunct_byname; }
 namespace __cxx11 {   template<typename _CharT>     class collate;   template<typename _CharT>     class collate_byname; }
   class time_base;
 namespace __cxx11 {   template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >     class time_get;   template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >     class time_get_byname; }
   template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >     class time_put;
   template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >     class time_put_byname;
   class money_base;
 namespace __cxx11 {   template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >     class money_get;   template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >     class money_put; }
 namespace __cxx11 {   template<typename _CharT, bool _Intl = false>     class moneypunct;   template<typename _CharT, bool _Intl = false>     class moneypunct_byname; }
   class messages_base;
 namespace __cxx11 {   template<typename _CharT>     class messages;   template<typename _CharT>     class messages_byname; }
 }
 typedef unsigned long int __cpu_mask;
  typedef struct {
   __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
 }
  cpu_set_t;
 extern "C" {
 ;
  }
  typedef pthread_once_t __gthread_once_t;
 typedef int _Atomic_word;
 namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
      static void   __atomic_add(volatile _Atomic_word* __mem, int __val)   ;
    static _Atomic_word   __exchange_and_add_single(_Atomic_word* __mem, int __val)   ;
   static void   __atomic_add_single(_Atomic_word* __mem, int __val)   ;
   static _Atomic_word   __attribute__ ((__unused__))   __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)   ;
   static void   __attribute__ ((__unused__))   __atomic_add_dispatch(_Atomic_word* __mem, int __val)   ;
 }
 namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
   using std::size_t;
   using std::ptrdiff_t;
    template<typename _Tp>     class new_allocator     {     public:       typedef size_t size_type;       typedef ptrdiff_t difference_type;       typedef _Tp* pointer;       typedef const _Tp* const_pointer;       typedef _Tp& reference;       typedef const _Tp& const_reference;       typedef _Tp value_type;       template<typename _Tp1>         struct rebind         { typedef new_allocator<_Tp1> other; };       typedef std::true_type propagate_on_container_move_assignment;       new_allocator() noexcept { }       new_allocator(const new_allocator&) noexcept { }       template<typename _Tp1>         new_allocator(const new_allocator<_Tp1>&) noexcept { }       ~new_allocator() noexcept { }       pointer       address(reference __x) const noexcept       { return std::__addressof(__x); }       const_pointer       address(const_reference __x) const noexcept       { return std::__addressof(__x); }       pointer       allocate(size_type __n, const void* = 0)       {  if (__n > this->max_size())    std::__throw_bad_alloc();  return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));       }       void       deallocate(pointer __p, size_type)       { ::operator delete(__p); }       size_type       max_size() const noexcept       { return size_t(-1) / sizeof(_Tp); }       template<typename _Up, typename... _Args>         void         construct(_Up* __p, _Args&&... __args)  { ::new((void *)__p) _Up(std::forward<_Args>(__args)...); }       template<typename _Up>         void         destroy(_Up* __p) { __p->~_Up(); }      };
   template<typename _Tp>      bool     operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)     ;
   template<typename _Tp>      bool     operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)     ;
 }
 namespace std {
    template<typename _Tp>     using __allocator_base = __gnu_cxx::new_allocator<_Tp>;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
    template<typename _Tp>     class allocator: public __allocator_base<_Tp>     {    public:       typedef size_t size_type;       typedef ptrdiff_t difference_type;       typedef _Tp* pointer;       typedef const _Tp* const_pointer;       typedef _Tp& reference;       typedef const _Tp& const_reference;       typedef _Tp value_type;       template<typename _Tp1>         struct rebind         { typedef allocator<_Tp1> other; };       typedef true_type propagate_on_container_move_assignment;       typedef true_type is_always_equal;       allocator() throw() ;       allocator(const allocator& __a) throw()  ;       template<typename _Tp1>         allocator(const allocator<_Tp1>&) throw() ;       ~allocator() throw() ;     };
   template<typename _T1, typename _T2>     inline bool     operator==(const allocator<_T1>&, const allocator<_T2>&)     noexcept     { return true; }
   template<typename _Tp>     inline bool     operator==(const allocator<_Tp>&, const allocator<_Tp>&)     noexcept     { return true; }
   template<typename _T1, typename _T2>     inline bool     operator!=(const allocator<_T1>&, const allocator<_T2>&)     noexcept     { return false; }
   template<typename _Tp>     inline bool     operator!=(const allocator<_Tp>&, const allocator<_Tp>&)     noexcept     { return false; }
   extern template class allocator<char>;
   extern template class allocator<wchar_t>;
   template<typename _Arg1, typename _Arg2, typename _Result>     struct binary_function     {       typedef _Arg1 first_argument_type;       typedef _Arg2 second_argument_type;       typedef _Result result_type;     };
    struct __is_transparent;
   template<typename _Tp = void>     struct plus;
   template<typename _Tp>     struct not_equal_to : public binary_function<_Tp, _Tp, bool>     {       constexpr       bool       operator()(const _Tp& __x, const _Tp& __y) const       { return __x != __y; }     };
   template<typename _Tp>     struct greater : public binary_function<_Tp, _Tp, bool>     {       constexpr       bool       operator()(const _Tp& __x, const _Tp& __y) const       { return __x > __y; }     };
   template<typename _Tp>     struct less : public binary_function<_Tp, _Tp, bool>     {       constexpr       bool       operator()(const _Tp& __x, const _Tp& __y) const       { return __x < __y; }     };
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
 namespace __cxx11 {    template<typename _CharT, typename _Traits, typename _Alloc>     class basic_string     {       typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template  rebind<_CharT>::other _Char_alloc_type;       typedef __gnu_cxx::__alloc_traits<_Char_alloc_type> _Alloc_traits;     public:       typedef _Traits traits_type;       typedef typename _Traits::char_type value_type;       typedef _Char_alloc_type allocator_type;       typedef typename _Alloc_traits::size_type size_type;       typedef typename _Alloc_traits::difference_type difference_type;       typedef typename _Alloc_traits::reference reference;       typedef typename _Alloc_traits::const_reference const_reference;       typedef typename _Alloc_traits::pointer pointer;       typedef typename _Alloc_traits::const_pointer const_pointer;       typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;       typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>        const_iterator;       typedef std::reverse_iterator<const_iterator> const_reverse_iterator;       typedef std::reverse_iterator<iterator> reverse_iterator;       static const size_type npos = static_cast<size_type>(-1);     private:       typedef const_iterator __const_iterator;       struct _Alloc_hider : allocator_type       {  _Alloc_hider(pointer __dat, const _Alloc& __a = _Alloc())  ;  pointer _M_p;       };       _Alloc_hider _M_dataplus;       size_type _M_string_length;       enum { _S_local_capacity = 15 / sizeof(_CharT) };       union       {  _CharT _M_local_buf[_S_local_capacity + 1];  size_type _M_allocated_capacity;       };       void       _M_data(pointer __p)       ;       void       _M_length(size_type __length)       ;       pointer       _M_data() const       ;       pointer       _M_local_data()       ;       const_pointer       _M_local_data() const       ;       void       _M_capacity(size_type __capacity)       ;       void       _M_set_length(size_type __n)       ;       bool       _M_is_local() const       ;       pointer       _M_create(size_type&, size_type);       void       _M_dispose()       ;       void       _M_destroy(size_type __size) throw()       ;       template<typename _InIterator>         void         _M_construct_aux(_InIterator __beg, _InIterator __end,     std::__false_type)  ;       template<typename _Integer>         void         _M_construct_aux(_Integer __beg, _Integer __end, std::__true_type)  ;       void       _M_construct_aux_2(size_type __req, _CharT __c)       ;       template<typename _InIterator>         void         _M_construct(_InIterator __beg, _InIterator __end)  ;       template<typename _InIterator>         void         _M_construct(_InIterator __beg, _InIterator __end,        std::input_iterator_tag);       template<typename _FwdIterator>         void         _M_construct(_FwdIterator __beg, _FwdIterator __end,        std::forward_iterator_tag);       void       _M_construct(size_type __req, _CharT __c);       allocator_type&       _M_get_allocator()       ;       const allocator_type&       _M_get_allocator() const       ;     private:        size_type       _M_check(size_type __pos, const char* __s) const       ;       void       _M_check_length(size_type __n1, size_type __n2, const char* __s) const       ;       size_type       _M_limit(size_type __pos, size_type __off) const noexcept       {  const bool __testoff = __off < this->size() - __pos;  return __testoff ? __off : this->size() - __pos;       }       bool       _M_disjunct(const _CharT* __s) const noexcept       {  return (less<const _CharT*>()(__s, _M_data())   || less<const _CharT*>()(_M_data() + this->size(), __s));       }       static void       _S_copy(_CharT* __d, const _CharT* __s, size_type __n)       {  if (__n == 1)    traits_type::assign(*__d, *__s);  else    traits_type::copy(__d, __s, __n);       }       static void       _S_move(_CharT* __d, const _CharT* __s, size_type __n)       {  if (__n == 1)    traits_type::assign(*__d, *__s);  else    traits_type::move(__d, __s, __n);       }       static void       _S_assign(_CharT* __d, size_type __n, _CharT __c)       {  if (__n == 1)    traits_type::assign(*__d, __c);  else    traits_type::assign(__d, __n, __c);       }       template<class _Iterator>         static void         _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)         {    for (; __k1 != __k2; ++__k1, (void)++__p)      traits_type::assign(*__p, *__k1);  }       static void       _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2) noexcept       { _S_copy_chars(__p, __k1.base(), __k2.base()); }       static void       _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)       noexcept       { _S_copy_chars(__p, __k1.base(), __k2.base()); }       static void       _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2) noexcept       { _S_copy(__p, __k1, __k2 - __k1); }       static void       _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)       noexcept       { _S_copy(__p, __k1, __k2 - __k1); }       static int       _S_compare(size_type __n1, size_type __n2) noexcept       {  const difference_type __d = difference_type(__n1 - __n2);  if (__d > __gnu_cxx::__numeric_traits<int>::__max)    return __gnu_cxx::__numeric_traits<int>::__max;  else if (__d < __gnu_cxx::__numeric_traits<int>::__min)    return __gnu_cxx::__numeric_traits<int>::__min;  else    return int(__d);       }       void       _M_assign(const basic_string& __rcs);       void       _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,   size_type __len2);       void       _M_erase(size_type __pos, size_type __n);     public:       basic_string()       noexcept(is_nothrow_default_constructible<_Alloc>::value)       : _M_dataplus(_M_local_data())       { _M_set_length(0); }       explicit       basic_string(const _Alloc& __a) noexcept       : _M_dataplus(_M_local_data(), __a)       { _M_set_length(0); }       basic_string(const basic_string& __str)       : _M_dataplus(_M_local_data(),       _Alloc_traits::_S_select_on_copy(__str._M_get_allocator()))       { _M_construct(__str._M_data(), __str._M_data() + __str.length()); }        basic_string&       operator=(basic_string&& __str)       noexcept(_Alloc_traits::_S_nothrow_move())       {  if (!_M_is_local() && _Alloc_traits::_S_propagate_on_move_assign()      && !_Alloc_traits::_S_always_equal()      && _M_get_allocator() != __str._M_get_allocator())    {      _M_destroy(_M_allocated_capacity);      _M_data(_M_local_data());      _M_set_length(0);    }  std::__alloc_on_move(_M_get_allocator(), __str._M_get_allocator());  if (!__str._M_is_local()      && (_Alloc_traits::_S_propagate_on_move_assign()        || _Alloc_traits::_S_always_equal()))    {      pointer __data = nullptr;      size_type __capacity;      if (!_M_is_local())        {   if (_Alloc_traits::_S_always_equal())     {       __data = _M_data();       __capacity = _M_allocated_capacity;     }   else     _M_destroy(_M_allocated_capacity);        }      _M_data(__str._M_data());      _M_length(__str.length());      _M_capacity(__str._M_allocated_capacity);      if (__data)        {   __str._M_data(__data);   __str._M_capacity(__capacity);        }      else        __str._M_data(__str._M_local_buf);    }  else      assign(__str);  __str.clear();  return *this;       }       basic_string&       operator=(initializer_list<_CharT> __l)       {  this->assign(__l.begin(), __l.size());  return *this;       }       iterator       begin() noexcept       { return iterator(_M_data()); }       const_iterator       begin() const noexcept       { return const_iterator(_M_data()); }       iterator       end() noexcept       { return iterator(_M_data() + this->size()); }       const_iterator       end() const noexcept       { return const_iterator(_M_data() + this->size()); }       reverse_iterator       rbegin() noexcept       { return reverse_iterator(this->end()); }       const_reverse_iterator       rbegin() const noexcept       { return const_reverse_iterator(this->end()); }       reverse_iterator       rend() noexcept       { return reverse_iterator(this->begin()); }       const_reverse_iterator       rend() const noexcept       { return const_reverse_iterator(this->begin()); }       const_iterator       cbegin() const noexcept       { return const_iterator(this->_M_data()); }       const_iterator       cend() const noexcept       { return const_iterator(this->_M_data() + this->size()); }       const_reverse_iterator       crbegin() const noexcept       { return const_reverse_iterator(this->end()); }       const_reverse_iterator       crend() const noexcept       { return const_reverse_iterator(this->begin()); }     public:       size_type       size() const noexcept       { return _M_string_length; }       size_type       length() const noexcept       { return _M_string_length; }       size_type       max_size() const noexcept       { return (_Alloc_traits::max_size(_M_get_allocator()) - 1) / 2; }        const _CharT*       c_str() const noexcept       { return _M_data(); }       const _CharT*       data() const noexcept       { return _M_data(); }       allocator_type       get_allocator() const noexcept       { return _M_get_allocator(); }        int       compare(size_type __pos, size_type __n1, const _CharT* __s,        size_type __n2) const;   }; }
   template<typename _CharT, typename _Traits, typename _Alloc>      basic_string<_CharT, _Traits, _Alloc>     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,        const _CharT* __rhs)     ;
    class locale   {   public:     typedef int category;     class facet;     class id;     class _Impl;     friend class facet;     friend class _Impl;     ;     template<typename _Facet>       friend const _Facet&       use_facet(const locale&);     template<typename _Cache>       friend struct __use_cache;      enum { _S_categories_size = 6 + 6 };     static __gthread_once_t _S_once;                              static const id* const _S_twinned_facets[];   };
    class locale::facet   {   private:     friend class locale;     friend class locale::_Impl;     mutable _Atomic_word _M_refcount;     static __c_locale _S_c_locale;     static const char _S_c_name[2];     static __gthread_once_t _S_once;        protected:              private:               class __shim;             };
    class locale::id   {   private:     friend class locale;     friend class locale::_Impl;     template<typename _Facet>       friend const _Facet&       use_facet(const locale&);     ;     mutable size_t _M_index;     static _Atomic_word _S_refcount;             public:     id() ;        };
   class locale::_Impl   {   public:     friend class locale;     friend class locale::facet;     ;     template<typename _Facet>       friend const _Facet&       use_facet(const locale&);     template<typename _Cache>       friend struct __use_cache;   private:     _Atomic_word _M_refcount;     const facet** _M_facets;     size_t _M_facets_size;     const facet** _M_caches;     char** _M_names;     static const locale::id* const _S_id_ctype[];     static const locale::id* const _S_id_numeric[];     static const locale::id* const _S_id_collate[];     static const locale::id* const _S_id_time[];     static const locale::id* const _S_id_monetary[];     static const locale::id* const _S_id_messages[];     static const locale::id* const* const _S_facet_categories[];                                                                            ;            ;                  };
    template<typename _CharT>     class __cxx11:: collate : public locale::facet     {     public:       typedef _CharT char_type;       typedef basic_string<_CharT> string_type;     protected:       __c_locale _M_c_locale_collate;     public:       static locale::id id;             };
   template<typename _CharT>     locale::id collate<_CharT>::id;
               template<typename _CharT>     class __cxx11:: collate_byname : public collate<_CharT>     {     public:       typedef _CharT char_type;       typedef basic_string<_CharT> string_type;                   protected:            };
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   enum class errc     {       address_family_not_supported = 97,       address_in_use = 98,       address_not_available = 99,       already_connected = 106,       argument_list_too_long = 7,       argument_out_of_domain = 33,       bad_address = 14,       bad_file_descriptor = 9,       bad_message = 74,       broken_pipe = 32,       connection_aborted = 103,       connection_already_in_progress = 114,       connection_refused = 111,       connection_reset = 104,       cross_device_link = 18,       destination_address_required = 89,       device_or_resource_busy = 16,       directory_not_empty = 39,       executable_format_error = 8,       file_exists = 17,       file_too_large = 27,       filename_too_long = 36,       function_not_supported = 38,       host_unreachable = 113,       identifier_removed = 43,       illegal_byte_sequence = 84,       inappropriate_io_control_operation = 25,       interrupted = 4,       invalid_argument = 22,       invalid_seek = 29,       io_error = 5,       is_a_directory = 21,       message_size = 90,       network_down = 100,       network_reset = 102,       network_unreachable = 101,       no_buffer_space = 105,       no_child_process = 10,       no_link = 67,       no_lock_available = 37,       no_message_available = 61,       no_message = 42,       no_protocol_option = 92,       no_space_on_device = 28,       no_stream_resources = 63,       no_such_device_or_address = 6,       no_such_device = 19,       no_such_file_or_directory = 2,       no_such_process = 3,       not_a_directory = 20,       not_a_socket = 88,       not_a_stream = 60,       not_connected = 107,       not_enough_memory = 12,       not_supported = 95,       operation_canceled = 125,       operation_in_progress = 115,       operation_not_permitted = 1,       operation_not_supported = 95,       operation_would_block = 11,       owner_dead = 130,       permission_denied = 13,       protocol_error = 71,       protocol_not_supported = 93,       read_only_file_system = 30,       resource_deadlock_would_occur = 35,       resource_unavailable_try_again = 11,       result_out_of_range = 34,       state_not_recoverable = 131,       stream_timeout = 62,       text_file_busy = 26,       timed_out = 110,       too_many_files_open_in_system = 23,       too_many_files_open = 24,       too_many_links = 31,       too_many_symbolic_link_levels = 40,       value_too_large = 75,       wrong_protocol_type = 91     };
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   struct __cow_string   {     union {       const char* _M_p;       char _M_bytes[sizeof(const char*)];     };                                           };
   typedef basic_string<char> __sso_string;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   class error_code;
   class error_condition;
   class system_error;
   template<typename _Tp>     struct is_error_code_enum : public false_type { };
   template<typename _Tp>     struct is_error_condition_enum : public false_type { };
   template<>     struct is_error_condition_enum<errc>     : public true_type { };
   inline namespace _V2 {   class error_category   {   public:     constexpr error_category() noexcept = default;               error_category& operator=(const error_category&) = delete;     virtual const char*     name() const noexcept = 0;   private:     __attribute ((__abi_tag__ ("cxx11")))     virtual __cow_string     _M_message(int) const;   public:     __attribute ((__abi_tag__ ("cxx11")))     virtual string     message(int) const = 0;    public:     virtual error_condition     default_error_condition(int __i) const noexcept;     virtual bool     equivalent(int __i, const error_condition& __cond) const noexcept;     virtual bool     equivalent(const error_code& __code, int __i) const noexcept;     bool     operator<(const error_category& __other) const noexcept     { return less<const error_category*>()(this, &__other); }     bool     operator==(const error_category& __other) const noexcept     { return this == &__other; }     bool     operator!=(const error_category& __other) const noexcept     { return this != &__other; }   };   __attribute__ ((__const__)) const error_category& system_category() noexcept;   __attribute__ ((__const__)) const error_category& generic_category() noexcept;   }
   error_code make_error_code(errc) noexcept;
   template<typename _Tp>     struct hash;
   struct error_code   {     error_code() noexcept     : _M_value(0), _M_cat(&system_category()) { }     error_code(int __v, const error_category& __cat) noexcept     : _M_value(__v), _M_cat(&__cat) { }     template<typename _ErrorCodeEnum, typename = typename       enable_if<is_error_code_enum<_ErrorCodeEnum>::value>::type>       error_code(_ErrorCodeEnum __e) noexcept       { *this = make_error_code(__e); }     void     assign(int __v, const error_category& __cat) noexcept     {       _M_value = __v;       _M_cat = &__cat;     }     void     clear() noexcept     { assign(0, system_category()); }     template<typename _ErrorCodeEnum>       typename enable_if<is_error_code_enum<_ErrorCodeEnum>::value,     error_code&>::type       operator=(_ErrorCodeEnum __e) noexcept       { return *this = make_error_code(__e); }     int     value() const noexcept { return _M_value; }     const error_category&     category() const noexcept { return *_M_cat; }     error_condition     default_error_condition() const noexcept;     __attribute ((__abi_tag__ ("cxx11")))     string     message() const     ;     explicit operator bool() const noexcept     { return _M_value != 0; }   private:     friend class hash<error_code>;     int _M_value;     const error_category* _M_cat;   };
   error_condition make_error_condition(errc) noexcept;
   struct error_condition   {     error_condition() noexcept     : _M_value(0), _M_cat(&generic_category()) { }     error_condition(int __v, const error_category& __cat) noexcept     : _M_value(__v), _M_cat(&__cat) { }     template<typename _ErrorConditionEnum, typename = typename   enable_if<is_error_condition_enum<_ErrorConditionEnum>::value>::type>       error_condition(_ErrorConditionEnum __e) noexcept       { *this = make_error_condition(__e); }     void     assign(int __v, const error_category& __cat) noexcept     {       _M_value = __v;       _M_cat = &__cat;     }     template<typename _ErrorConditionEnum>       typename enable_if<is_error_condition_enum     <_ErrorConditionEnum>::value, error_condition&>::type       operator=(_ErrorConditionEnum __e) noexcept       { return *this = make_error_condition(__e); }     void     clear() noexcept     { assign(0, generic_category()); }     int     value() const noexcept { return _M_value; }     const error_category&     category() const noexcept { return *_M_cat; }     __attribute ((__abi_tag__ ("cxx11")))     string     message() const     { return category().message(value()); }     explicit operator bool() const noexcept     { return _M_value != 0; }   private:     int _M_value;     const error_category* _M_cat;   };
   inline error_condition   make_error_condition(errc __e) noexcept   { return error_condition(static_cast<int>(__e), generic_category()); }
   enum _Ios_Fmtflags     {       _S_boolalpha = 1L << 0,       _S_dec = 1L << 1,       _S_fixed = 1L << 2,       _S_hex = 1L << 3,       _S_internal = 1L << 4,       _S_left = 1L << 5,       _S_oct = 1L << 6,       _S_right = 1L << 7,       _S_scientific = 1L << 8,       _S_showbase = 1L << 9,       _S_showpoint = 1L << 10,       _S_showpos = 1L << 11,       _S_skipws = 1L << 12,       _S_unitbuf = 1L << 13,       _S_uppercase = 1L << 14,       _S_adjustfield = _S_left | _S_right | _S_internal,       _S_basefield = _S_dec | _S_oct | _S_hex,       _S_floatfield = _S_scientific | _S_fixed,       _S_ios_fmtflags_end = 1L << 16,       _S_ios_fmtflags_max = 2147483647,       _S_ios_fmtflags_min = ~2147483647     };
   inline constexpr _Ios_Fmtflags   operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)   { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }
   inline constexpr _Ios_Fmtflags   operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)   { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }
   inline constexpr _Ios_Fmtflags   operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)   { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }
   inline constexpr _Ios_Fmtflags   operator~(_Ios_Fmtflags __a)   { return _Ios_Fmtflags(~static_cast<int>(__a)); }
   inline const _Ios_Fmtflags&   operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)   { return __a = __a | __b; }
   inline const _Ios_Fmtflags&   operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)   { return __a = __a & __b; }
   inline const _Ios_Fmtflags&   operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)   { return __a = __a ^ __b; }
   enum _Ios_Openmode     {       _S_app = 1L << 0,       _S_ate = 1L << 1,       _S_bin = 1L << 2,       _S_in = 1L << 3,       _S_out = 1L << 4,       _S_trunc = 1L << 5,       _S_ios_openmode_end = 1L << 16,       _S_ios_openmode_max = 2147483647,       _S_ios_openmode_min = ~2147483647     };
   inline constexpr _Ios_Openmode   operator&(_Ios_Openmode __a, _Ios_Openmode __b)   { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }
   inline constexpr _Ios_Openmode   operator|(_Ios_Openmode __a, _Ios_Openmode __b)   { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }
   inline constexpr _Ios_Openmode   operator^(_Ios_Openmode __a, _Ios_Openmode __b)   { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }
   inline const _Ios_Openmode&   operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)   { return __a = __a ^ __b; }
   enum _Ios_Iostate     {       _S_goodbit = 0,       _S_badbit = 1L << 0,       _S_eofbit = 1L << 1,       _S_failbit = 1L << 2,       _S_ios_iostate_end = 1L << 16,       _S_ios_iostate_max = 2147483647,       _S_ios_iostate_min = ~2147483647     };
   enum _Ios_Seekdir     {       _S_beg = 0,       _S_cur = 1,       _S_end = 2,       _S_ios_seekdir_end = 1L << 16     };
   enum class io_errc { stream = 1 };
   template <> struct is_error_code_enum<io_errc> : public true_type { };
   const error_category& iostream_category() noexcept;
   inline error_code   make_error_code(io_errc e) noexcept   { return error_code(static_cast<int>(e), iostream_category()); }
   inline error_condition   make_error_condition(io_errc e) noexcept   { return error_condition(static_cast<int>(e), iostream_category()); }
    class ios_base   {      typedef _Ios_Fmtflags fmtflags;     static const fmtflags boolalpha = _S_boolalpha;     static const fmtflags dec = _S_dec;     static const fmtflags fixed = _S_fixed;     static const fmtflags hex = _S_hex;     static const fmtflags internal = _S_internal;     static const fmtflags left = _S_left;     static const fmtflags oct = _S_oct;     static const fmtflags right = _S_right;     static const fmtflags scientific = _S_scientific;     static const fmtflags showbase = _S_showbase;     static const fmtflags showpoint = _S_showpoint;     static const fmtflags showpos = _S_showpos;     static const fmtflags skipws = _S_skipws;     static const fmtflags unitbuf = _S_unitbuf;     static const fmtflags uppercase = _S_uppercase;     static const fmtflags adjustfield = _S_adjustfield;     static const fmtflags basefield = _S_basefield;     static const fmtflags floatfield = _S_floatfield;      typedef _Ios_Iostate iostate;     static const iostate badbit = _S_badbit;     static const iostate eofbit = _S_eofbit;     static const iostate failbit = _S_failbit;     static const iostate goodbit = _S_goodbit;      enum event     {       erase_event,       imbue_event,       copyfmt_event     };      typedef void (*event_callback) (event __e, ios_base& __b, int __i);      void     register_callback(event_callback __fn, int __index);   protected:     streamsize _M_precision;     streamsize _M_width;     fmtflags _M_flags;     iostate _M_exception;     iostate _M_streambuf_state;     struct _Callback_list     {       _Callback_list* _M_next;       ios_base::event_callback _M_fn;       int _M_index;       _Atomic_word _M_refcount;       _Callback_list(ios_base::event_callback __fn, int __index,        _Callback_list* __cb)       : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }       void       _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }       int       _M_remove_reference()       {                                                              ;         int __res = __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1);         if (__res == 0)           {                                                                 ;           }         return __res;       }     };      _Callback_list* _M_callbacks;     void     _M_call_callbacks(event __ev) throw();     void     _M_dispose_callbacks(void) throw();     struct _Words     {       void* _M_pword;       long _M_iword;       _Words() : _M_pword(0), _M_iword(0) { }     };     _Words _M_word_zero;     enum { _S_local_word_size = 8 };     _Words _M_local_word[_S_local_word_size];     int _M_word_size;     _Words* _M_word;     _Words&     _M_grow_words(int __index, bool __iword);     locale _M_ios_locale;     void     _M_init() throw();   public:     class Init     {       friend class ios_base;     public:       Init();       ~Init();     private:       static _Atomic_word _S_refcount;       static bool _S_synced_with_stdio;     };     fmtflags     flags() const     { return _M_flags; }    public:     ios_base(const ios_base&) = delete;     ios_base&     operator=(const ios_base&) = delete;   protected:     void     _M_move(ios_base&) noexcept;     void     _M_swap(ios_base& __rhs) noexcept;   };
 ;
 ;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
   struct ctype_base   {     typedef const int* __to_type;     typedef unsigned short mask;     static const mask upper = _ISupper;     static const mask lower = _ISlower;     static const mask alpha = _ISalpha;     static const mask digit = _ISdigit;     static const mask xdigit = _ISxdigit;     static const mask space = _ISspace;     static const mask print = _ISprint;     static const mask graph = _ISalpha | _ISdigit | _ISpunct;     static const mask cntrl = _IScntrl;     static const mask punct = _ISpunct;     static const mask alnum = _ISalpha | _ISdigit;     static const mask blank = _ISblank;   };
   extern template     const num_put<wchar_t>&     use_facet<num_put<wchar_t> >(const locale&);
;
;
 }
 namespace std __attribute__ ((__visibility__ ("default"))) {
        ;
    template<typename _CharT, typename _Traits>     class basic_ios : public ios_base     {     public:       typedef _CharT char_type;       typedef typename _Traits::int_type int_type;       typedef typename _Traits::pos_type pos_type;       typedef typename _Traits::off_type off_type;       typedef _Traits traits_type;       typedef ctype<_CharT> __ctype_type;       typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >            __num_put_type;       typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >            __num_get_type;     protected:       basic_ostream<_CharT, _Traits>* _M_tie;       mutable char_type _M_fill;       mutable bool _M_fill_init;       basic_streambuf<_CharT, _Traits>* _M_streambuf;       const __ctype_type* _M_ctype;       const __num_put_type* _M_num_put;       const __num_get_type* _M_num_get;     public:             protected:                                          void       move(basic_ios&& __rhs)       ;       void       swap(basic_ios& __rhs) noexcept       {  ios_base::_M_swap(__rhs);  _M_cache_locale(_M_ios_locale);  __rhs._M_cache_locale(__rhs._M_ios_locale);  std::swap(_M_tie, __rhs._M_tie);  std::swap(_M_fill, __rhs._M_fill);  std::swap(_M_fill_init, __rhs._M_fill_init);       }       void       set_rdbuf(basic_streambuf<_CharT, _Traits>* __sb)       { _M_streambuf = __sb; }       void       _M_cache_locale(const locale& __loc);     };
    template<typename _CharT, typename _Traits, typename _Tp>      basic_ostream<_CharT, _Traits>&     operator<<(basic_ostream<_CharT, _Traits>&& __os, const _Tp& __x)     ;
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
 enum class AllocFunction {     Malloc,     Calloc,     Realloc };
 class SystemAllocPolicy {   public:           ;      ;      ;      ;      ;                };
   class TempAllocPolicy {     JSContext* const cx_;           ;   public:                        ;      ;      ;      ;      ;      ;                };
 }
 namespace mozilla {
 static const uint32_t kGoldenRatioU32 = 0x9E3779B9U;
   namespace detail {   ;   }
  class HashCodeScrambler {   struct SipHasher;   uint64_t mK0, mK1; public:   constexpr HashCodeScrambler(uint64_t aK0, uint64_t aK1) : mK0(aK0), mK1(aK1) {}    private:   struct SipHasher   {                    uint64_t mV0, mV1, mV2, mV3;   }; };
 }
 namespace js {
 class TempAllocPolicy;
 template <class> struct DefaultHasher;
 template <class, class> class HashMapEntry;
 namespace detail {     template <class T> class HashTableEntry;     template <class T, class HashPolicy, class AllocPolicy> class HashTable; }
  template <class Key,           class Value,           class HashPolicy = DefaultHasher<Key>,           class AllocPolicy = TempAllocPolicy> class HashMap {     typedef HashMapEntry<Key, Value> TableEntry;     struct MapHashPolicy : HashPolicy     {         using Base = HashPolicy;         typedef Key KeyType;                       };     typedef detail::HashTable<TableEntry, MapHashPolicy, AllocPolicy> Impl;     Impl impl;   public:     typedef typename HashPolicy::Lookup Lookup;     typedef TableEntry Entry;                     typedef typename Impl::Enum Enum;                                                        ;      ;      ;                                 private:               friend class Impl::Enum; };
  template <class T,           class HashPolicy = DefaultHasher<T>,           class AllocPolicy = TempAllocPolicy> class HashSet {     struct SetOps : HashPolicy     {         using Base = HashPolicy;         typedef T KeyType;                       };     typedef detail::HashTable<const T, SetOps, AllocPolicy> Impl;     Impl impl;   public:     typedef typename HashPolicy::Lookup Lookup;     typedef T Entry;                     typedef typename Impl::Enum Enum;                                                        ;      ;      ;      ;                                 private:               friend class Impl::Enum; };
  template <class Key, class Value> class HashMapEntry {     Key key_;     Value value_;     template <class, class, class> friend class detail::HashTable;     template <class> friend class detail::HashTableEntry;     template <class, class, class, class> friend class HashMap;   public:           ;               typedef Key KeyType;     typedef Value ValueType;                       private:           };
 }
  namespace JS {
 class CallbackTracer;
 template <typename T> class Heap;
 template <typename T> class TenuredHeap;
   }
  enum WeakMapTraceKind {
     DoNotTraceWeakMaps,     ExpandWeakMaps,     TraceWeakMapValues,     TraceWeakMapKeysValues };
  class JSTracer {
   public:               enum class TracerKindTag {         Marking,         WeakMarking,         Tenuring,         Callback     };
                         ;
   protected:     TracerKindTag tag_;
     bool traceWeakEdges_;
 };
  namespace JS {
 class AutoTracingName;
 class AutoTracingIndex;
 class AutoTracingIndex {     CallbackTracer* trc_;   public:                };
 class AutoTracingDetails {     CallbackTracer* trc_;   public:           };
 }
   namespace JS {
  ;
  ;
  using ZoneSet = js::HashSet<Zone*, js::DefaultHasher<Zone*>, js::SystemAllocPolicy>;
 using CompartmentSet = js::HashSet<JSCompartment*, js::DefaultHasher<JSCompartment*>,                                    js::SystemAllocPolicy>;
  }
 class JSAtom;
  namespace JS {
 template <typename T> struct StructGCPolicy {                     };
 template <typename T> struct GCPolicy : public StructGCPolicy<T> {};
 template <typename T> struct IgnoreGCPolicy {                };
 template <> struct GCPolicy<uint32_t> : public IgnoreGCPolicy<uint32_t> {};
 }
 namespace js {
 template <typename T> struct BarrierMethods { };
 template <typename Element, typename Wrapper> class WrappedPtrOperations {};
 template <typename Element, typename Wrapper> class MutableWrappedPtrOperations : public WrappedPtrOperations<Element, Wrapper> {};
 template <typename T, typename Wrapper> class RootedBase : public MutableWrappedPtrOperations<T, Wrapper> {};
 template <typename T, typename Wrapper> class HandleBase : public WrappedPtrOperations<T, Wrapper> {};
 template <typename T, typename Wrapper> class MutableHandleBase : public MutableWrappedPtrOperations<T, Wrapper> {};
 template <typename T, typename Wrapper> class HeapBase : public MutableWrappedPtrOperations<T, Wrapper> {};
 template <typename T> struct IsHeapConstructibleType { static constexpr bool value = false; };
 template <> struct IsHeapConstructibleType<JS::Symbol*> { static constexpr bool value = true; };
 template <> struct IsHeapConstructibleType<JSAtom*> { static constexpr bool value = true; };
 template <> struct IsHeapConstructibleType<JSFunction*> { static constexpr bool value = true; };
  }
  namespace JS {
 template <typename T> class Rooted;
 template <typename T> class PersistentRooted;
        template <typename T> class Heap : public js::HeapBase<T, Heap<T>> {        public:     using ElementType = T;                          ;      ;          void exposeToActiveJS() const ;                            private:                    T ptr; };
            template <typename T> class Handle : public js::HandleBase<T, Handle<T>> {     friend class JS::MutableHandle<T>;   public:     using ElementType = T;          ;                                          static constexpr Handle fromMarkedLocation(const T* p) {         return Handle(p, DeliberatelyChoosingThisOverload,                       ImUsingThisOnlyInFromFromMarkedLocation);     }     template <typename S>     inline                  Handle(const Rooted<S>& root,                         typename mozilla::EnableIf<mozilla::IsConvertible<S, T>::value, int>::Type dummy = 0);     ;     ;      ;      ;   private:          template <typename S> Handle<T>& operator=(S) = delete; Handle<T>& operator=(const Handle<T>&) = delete;;     enum Disambiguator { DeliberatelyChoosingThisOverload = 42 };     enum CallerIdentity { ImUsingThisOnlyInFromFromMarkedLocation = 17 };     constexpr Handle(const T* p, Disambiguator, CallerIdentity) : ptr(p) {}     const T* ptr; };
  template <typename T> class MutableHandle : public js::MutableHandleBase<T, MutableHandle<T>> {   public:     using ElementType = T;     inline MutableHandle(Rooted<T>* root);     inline MutableHandle(PersistentRooted<T>* root);   private:     MutableHandle(decltype(nullptr)) = delete;   public:     void set(const T& v) ;      static MutableHandle fromMarkedLocation(T* p) ;     operator const T&() const ; const T& operator->() const ;;     const T* address() const ; const T& get() const ;;     T* address() ; T& get() ;;   private:     MutableHandle() ;     template <typename S> MutableHandle<T>& operator=(S) = delete; MutableHandle<T>& operator=(const MutableHandle<T>&) = delete;;     T* ptr; };
 }
  namespace js {
  template <typename T> class alignas(8) DispatchWrapper {     static_assert(JS::MapTypeToRootKind<T>::kind == JS::RootKind::Traceable,                   "DispatchWrapper is intended only for usage with a Traceable");     using TraceFn = void (*)(JSTracer*, T*, const char*);     TraceFn tracer;     alignas(gc::CellSize) T storage;   public:     template <typename U>                  DispatchWrapper(U&& initial)       : tracer(&JS::GCPolicy<T>::trace),         storage(mozilla::Forward<U>(initial))     { }     T* operator &() { return &storage; }     const T* operator &() const { return &storage; }     operator T&() { return storage; }     operator const T&() const { return storage; }     static void TraceWrapped(JSTracer* trc, T* thingp, const char* name) {         auto wrapper = reinterpret_cast<DispatchWrapper*>(                            uintptr_t(thingp) - __builtin_offsetof(DispatchWrapper, storage));         wrapper->tracer(trc, &wrapper->storage, name);     } };
 }
  namespace JS {
 namespace detail {  template <typename T> using MaybeWrapped = typename mozilla::Conditional<     MapTypeToRootKind<T>::kind == JS::RootKind::Traceable,     js::DispatchWrapper<T>,     T>::Type; }
  template <typename T> class Rooted : public js::RootedBase<T, Rooted<T>> {                   public:     using ElementType = T;                               ;      ;      ;      ;   private:     Rooted<void*>** stack;     Rooted<void*>* prev;     detail::MaybeWrapped<T> ptr;      }
 ;
 }
  namespace js {
  template <typename Container> class HandleBase<JSObject*, Container> : public WrappedPtrOperations<JSObject*, Container> {   public:     ; };
 template <typename T> class FakeRooted : public RootedBase<T, FakeRooted<T>> {   public:     using ElementType = T;       ;       ;      ;      ;      ;      ;   private:     T ptr;           };
 template <typename T> class FakeMutableHandle : public js::MutableHandleBase<T, FakeMutableHandle<T>> {   public:     using ElementType = T;                                               const T& operator->() const ;;     const T* address() const ; const T& get() const ;;     T* address() ; T& get() ;;   private:     FakeMutableHandle() ;     template <typename S> FakeMutableHandle<T>& operator=(S) = delete; FakeMutableHandle<T>& operator=(const FakeMutableHandle<T>&) = delete;;     T* ptr; };
  enum AllowGC {     NoGC = 0,     CanGC = 1 };
 template <typename T, AllowGC allowGC> class MaybeRooted { };
 template <typename T> class MaybeRooted<T, CanGC> {   public:     typedef JS::Handle<T> HandleType;     typedef JS::Rooted<T> RootType;     typedef JS::MutableHandle<T> MutableHandleType;     static JS::Handle<T> toHandle(HandleType v) ;     static JS::MutableHandle<T> toMutableHandle(MutableHandleType v) ;     template <typename T2>     static JS::Handle<T2*> downcastHandle(HandleType v) ; };
 template <typename T> class MaybeRooted<T, NoGC> {   public:     typedef const T& HandleType;     typedef FakeRooted<T> RootType;     typedef FakeMutableHandle<T> MutableHandleType;     static JS::Handle<T> toHandle(HandleType v) ;     static JS::MutableHandle<T> toMutableHandle(MutableHandleType v) ;     template <typename T2>     static inline T2* downcastHandle(HandleType v) {         return &v->template as<T2>();     } };
 }
  namespace JS {
  void AddPersistentRoot(RootingContext* cx, RootKind kind, PersistentRooted<void*>* root);
  void AddPersistentRoot(JSRuntime* rt, RootKind kind, PersistentRooted<void*>* root);
  template<typename T> class PersistentRooted : public js::RootedBase<T, PersistentRooted<T>>,                          private mozilla::LinkedListElement<PersistentRooted<T>> {     using ListBase = mozilla::LinkedListElement<PersistentRooted<T>>;     friend class mozilla::LinkedList<PersistentRooted>;     friend class mozilla::LinkedListElement<PersistentRooted>;     void registerWithRootLists(RootingContext* cx) {         do { static_assert(mozilla::detail::AssertionConditionType<decltype(!initialized())>::isValid, "invalid assertion condition"); if ((__builtin_expect(!!(!(!!(!initialized()))), 0))) { MOZ_ReportAssertionFailure("!initialized()", "/home/fitzgen/stylo/obj-x86_64-pc-linux-gnu/dist/include/js/RootingAPI.h", 1105); do { } while (0); do { *((volatile int*) __null) = 1105; ::abort(); } while (0); } } while (0);         JS::RootKind kind = JS::MapTypeToRootKind<T>::kind;         AddPersistentRoot(cx, kind, reinterpret_cast<JS::PersistentRooted<void*>*>(this));     }     void registerWithRootLists(JSRuntime* rt) {         do { static_assert(mozilla::detail::AssertionConditionType<decltype(!initialized())>::isValid, "invalid assertion condition"); if ((__builtin_expect(!!(!(!!(!initialized()))), 0))) { MOZ_ReportAssertionFailure("!initialized()", "/home/fitzgen/stylo/obj-x86_64-pc-linux-gnu/dist/include/js/RootingAPI.h", 1111); do { } while (0); do { *((volatile int*) __null) = 1111; ::abort(); } while (0); } } while (0);         JS::RootKind kind = JS::MapTypeToRootKind<T>::kind;         AddPersistentRoot(rt, kind, reinterpret_cast<JS::PersistentRooted<void*>*>(this));     }   public:     using ElementType = T;     PersistentRooted() : ptr(GCPolicy<T>::initial()) {}                                        bool initialized() {         return ListBase::isInList();     }           ;           ;      ;      ;             private:          detail::MaybeWrapped<T> ptr; }
 ;
 class ObjectPtr {     Heap<JSObject*> value;   public:     using ElementType = JSObject*;                                                                                      };
 }
