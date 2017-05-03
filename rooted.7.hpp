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
 extern void abort (void) throw () __attribute__ ((__noreturn__));
  __attribute__ ((__unused__)) static __attribute__ ((cold)) __attribute__((noinline)) void MOZ_ReportAssertionFailure(const char* aStr, const char* aFilename, int aLine) ;
  }
 extern "C" {
  }
 namespace mozilla {
 template<typename> struct RemoveCV;
 template<typename> struct AddRvalueReference;
  template<typename T> typename AddRvalueReference<T>::Type DeclVal();
 template<typename T, T Value> struct IntegralConstant {   static constexpr T value = Value;   typedef T ValueType;   typedef IntegralConstant<T, Value> Type; };
 typedef IntegralConstant<bool, true> TrueType;
 typedef IntegralConstant<bool, false> FalseType;
 template<typename T, typename U> struct IsSame;
 namespace detail { template<typename T> struct IsFloatingPointHelper   : IntegralConstant<bool,                      IsSame<T, float>::value ||                      IsSame<T, double>::value ||                      IsSame<T, long double>::value> {}; }
  template<typename T> struct IsFloatingPoint   : detail::IsFloatingPointHelper<typename RemoveCV<T>::Type> {};
 namespace detail { template<typename T> struct IsArrayHelper : FalseType {}; template<typename T, decltype(sizeof(1)) N> struct IsArrayHelper<T[N]> : TrueType {}; template<typename T> struct IsArrayHelper<T[]> : TrueType {}; }
  template<typename T> struct IsArray : detail::IsArrayHelper<typename RemoveCV<T>::Type> {};
 namespace detail { template<typename T> struct IsFunPtr; template<typename> struct IsFunPtr   : public FalseType {}; template<typename Result, typename... ArgTypes> struct IsFunPtr<Result(*)(ArgTypes...)>   : public TrueType {}; };
  template<typename T> struct IsFunction   : public detail::IsFunPtr<typename RemoveCV<T>::Type *> {};
  template<typename T> struct RemoveReference {   typedef T Type; };
 template<bool Condition, typename A, typename B> struct Conditional {   typedef A Type; };
 namespace detail { template<typename T> struct AssertionConditionType {   typedef typename RemoveReference<T>::Type ValueT;   static_assert(!IsArray<ValueT>::value,                 "Expected boolean assertion condition, got an array or a "                 "string!");   static_assert(!IsFunction<ValueT>::value,                 "Expected boolean assertion condition, got a function! Did "                 "you intend to call that function?");   static_assert(!IsFloatingPoint<ValueT>::value,                 "It's often a bad idea to assert that a floating-point number "                 "is nonzero, because such assertions tend to intermittently "                 "fail. Shouldn't your code gracefully handle this case instead "                 "of asserting? Anyway, if you really want to do that, write an "                 "explicit boolean condition, like !!x or x!=0.");   static const bool isValid = true; }; }
 }
 namespace mozilla {
 template<typename T>  T&& Forward(typename RemoveReference<T>::Type& aX) ;
 }
 template<class T> struct already_AddRefed {
 };
  namespace mozilla {
 }
  template <class T> class RefPtr {
 };
  namespace mozilla {
 namespace detail { template<typename T> struct LinkedListElementTraits {   typedef T* RawType;   typedef const T* ConstRawType;   typedef T* ClientType;   typedef const T* ConstClientType;       }; template<typename T> struct LinkedListElementTraits<RefPtr<T>> {   typedef T* RawType;   typedef const T* ConstRawType;   typedef RefPtr<T> ClientType;   typedef RefPtr<const T> ConstClientType;       }; }
 template<typename T> class LinkedList;
 template<typename T> class LinkedListElement {   typedef typename detail::LinkedListElementTraits<T> Traits;   typedef typename Traits::RawType RawType;   typedef typename Traits::ConstRawType ConstRawType;   typedef typename Traits::ClientType ClientType;   typedef typename Traits::ConstClientType ConstClientType;  private:   LinkedListElement* mNext;   LinkedListElement* mPrev;   const bool mIsSentinel; public:                                              private:   friend class LinkedList<T>;   friend struct detail::LinkedListElementTraits<T>;   enum class NodeKind {     Normal,     Sentinel   };                         };
 }
 namespace std {
 }
  namespace std __attribute__ ((__visibility__ ("default"))) {
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
