namespace std {
  }
  namespace std {
  }
  typedef long int ptrdiff_t;
  typedef long unsigned int size_t;
  typedef signed char int8_t;
   typedef unsigned int uint32_t;
   typedef unsigned long int uint64_t;
   typedef unsigned long int uintptr_t;
  extern "C" {
  typedef struct {
 int __val[2];
 }
  __fsid_t;
  __extension__ typedef struct   {
     long long int quot;
     long long int rem;
   const int *__ctype_toupper;
   const char *__names[13];
 }
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
  template<typename T, T Value> struct IntegralConstant {
   static constexpr T value = Value;
   typedef T ValueType;
   typedef IntegralConstant<T, Value> Type;
 };
  typedef IntegralConstant<bool, true> TrueType;
  typedef IntegralConstant<bool, false> FalseType;
  template<typename T, typename U> struct IsSame;
  namespace detail {
 template<typename T> struct IsFloatingPointHelper   : IntegralConstant<bool,                      IsSame<T, float>::value ||                      IsSame<T, double>::value ||                      IsSame<T, long double>::value> {};
 }
   template<typename T> struct IsFloatingPoint   : detail::IsFloatingPointHelper<typename RemoveCV<T>::Type> {
};
  namespace detail {
 template<typename T> struct IsArrayHelper : FalseType {};
 template<typename T, decltype(sizeof(1)) N> struct IsArrayHelper<T[N]> : TrueType {};
 template<typename T> struct IsArrayHelper<T[]> : TrueType {};
 }
   template<typename T> struct IsArray : detail::IsArrayHelper<typename RemoveCV<T>::Type> {
};
  namespace detail {
 template<typename T> struct IsFunPtr;
 template<typename> struct IsFunPtr   : public FalseType {};
 template<typename Result, typename... ArgTypes> struct IsFunPtr<Result(*)(ArgTypes...)>   : public TrueType {};
 };
   template<typename T> struct IsFunction   : public detail::IsFunPtr<typename RemoveCV<T>::Type *> {
};
   template<typename T> struct RemoveReference {
   typedef T Type;
 };
  template<bool Condition, typename A, typename B> struct Conditional {
   typedef A Type;
 };
  namespace detail {
 template<typename T> struct AssertionConditionType {   typedef typename RemoveReference<T>::Type ValueT;   static_assert(!IsArray<ValueT>::value,                 "Expected boolean assertion condition, got an array or a "                 "string!");   static_assert(!IsFunction<ValueT>::value,                 "Expected boolean assertion condition, got a function! Did "                 "you intend to call that function?");   static_assert(!IsFloatingPoint<ValueT>::value,                 "It's often a bad idea to assert that a floating-point number "                 "is nonzero, because such assertions tend to intermittently "                 "fail. Shouldn't your code gracefully handle this case instead "                 "of asserting? Anyway, if you really want to do that, write an "                 "explicit boolean condition, like !!x or x!=0.");   static const bool isValid = true; };
 }
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
  namespace detail {
 template<typename T> struct LinkedListElementTraits {   typedef T* RawType;   typedef const T* ConstRawType;   typedef T* ClientType;   typedef const T* ConstClientType;       };
 template<typename T> struct LinkedListElementTraits<RefPtr<T>> {   typedef T* RawType;   typedef const T* ConstRawType;   typedef RefPtr<T> ClientType;   typedef RefPtr<const T> ConstClientType;       };
 }
  template<typename T> class LinkedList;
  template<typename T> class LinkedListElement {
   typedef typename detail::LinkedListElementTraits<T> Traits;
   typedef typename Traits::RawType RawType;
   typedef typename Traits::ConstRawType ConstRawType;
   typedef typename Traits::ClientType ClientType;
   typedef typename Traits::ConstClientType ConstClientType;
  private:   LinkedListElement* mNext;
   LinkedListElement* mPrev;
   const bool mIsSentinel;
 public:                                              private:   friend class LinkedList<T>;
   friend struct detail::LinkedListElementTraits<T>;
   enum class NodeKind {     Normal,     Sentinel   };
                         };
  }
  namespace std {
  }
   namespace std __attribute__ ((__visibility__ ("default"))) {
  }
  namespace mozilla {
  template<typename IteratorT> class ReverseIterator {
 public:   template<typename Iterator>   explicit ReverseIterator(Iterator aIter)  ;
   template<typename Iterator>                ReverseIterator(const ReverseIterator<Iterator>& aOther)  ;
 };
  }
  namespace mozilla {
  template<typename T, size_t Length> class Array {
   T mArr[Length];
 public:   Array() {}
   const T& operator[](size_t aIndex) const   {     do { static_assert(mozilla::detail::AssertionConditionType<decltype(aIndex < Length)>::isValid, "invalid assertion condition"); if ((__builtin_expect(!!(!(!!(aIndex < Length))), 0))) { MOZ_ReportAssertionFailure("aIndex < Length", "/home/fitzgen/stylo/obj-x86_64-pc-linux-gnu/dist/include/mozilla/Array.h", 45); do { } while (0); do { *((volatile int*) __null) = 45; ::abort(); } while (0); } } while (0);     return mArr[aIndex];   }
   bool operator==(const Array<T, Length>& aOther) const   {     for (size_t i = 0; i < Length; i++) {       if (mArr[i] != aOther[i]) {         return false;       }     }     return true;   }
   typedef T* iterator;
   typedef const T* const_iterator;
   typedef ReverseIterator<T*> reverse_iterator;
   typedef ReverseIterator<const T*> const_reverse_iterator;
   iterator end() { return mArr + Length; }
   const_iterator end() const { return mArr + Length; }
                      };
   template<typename IndexType,          IndexType SizeAsEnumValue,          typename ValueType> class EnumeratedArray {
 public:   static const size_t kSize = size_t(SizeAsEnumValue);
 private:   typedef Array<ValueType, kSize> ArrayType;
   ArrayType mArray;
 public:   EnumeratedArray() {}
   template <typename... Args>                EnumeratedArray(Args&&... aArgs)     : mArray{mozilla::Forward<Args>(aArgs)...}
   {}
                         };
  }
   namespace mozilla {
  }
   namespace JS {
  template <typename T> class PersistentRooted;
  }
  namespace js {
  }
   namespace JS {
  enum class RootKind : int8_t {
 BaseShape, JitCode, LazyScript, Scope, Object, ObjectGroup, Script, Shape, String, Symbol, RegExpShared,     Id,     Value,     Traceable,     Limit };
  template <typename T> struct MapTypeToRootKind {
     static const JS::RootKind kind = JS::RootKind::Traceable;
 };
  }
   namespace JS {
  class AutoGCRooter {
 };
  enum StackKind {
     StackForSystemCode,     StackForTrustedScript,     StackForUntrustedScript,     StackKindCount };
  class RootingContext {
 };
  }
  namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
  }
  namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
  }
  namespace std __attribute__ ((__visibility__ ("default"))) {
  }
  namespace std __attribute__ ((__visibility__ ("default"))) {
  }
  namespace js {
    namespace gc {
 const size_t CellShift = 3;
 const size_t CellSize = size_t(1) << CellShift;
 }
  }
   namespace JS {
    }
  namespace js {
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
  template <typename T> struct StructGCPolicy {
                     };
  template <typename T> struct GCPolicy : public StructGCPolicy<T> {
};
  }
  namespace js {
  template <typename Element, typename Wrapper> class WrappedPtrOperations {
};
  template <typename Element, typename Wrapper> class MutableWrappedPtrOperations : public WrappedPtrOperations<Element, Wrapper> {
};
  template <typename T, typename Wrapper> class RootedBase : public MutableWrappedPtrOperations<T, Wrapper> {
};
   }
   namespace JS {
  }
   namespace js {
   template <typename T> class alignas(8) DispatchWrapper {
     using TraceFn = void (*)(JSTracer*, T*, const char*);
     TraceFn tracer;
     alignas(gc::CellSize) T storage;
 };
  }
   namespace JS {
  namespace detail {
  template <typename T> using MaybeWrapped = typename mozilla::Conditional<     MapTypeToRootKind<T>::kind == JS::RootKind::Traceable,     js::DispatchWrapper<T>,     T>::Type;
 }
  }
   namespace js {
  }
   namespace JS {
   void AddPersistentRoot(RootingContext* cx, RootKind kind, PersistentRooted<void*>* root);
   template<typename T> class PersistentRooted : public js::RootedBase<T, PersistentRooted<T>>,                          private mozilla::LinkedListElement<PersistentRooted<T>> {
     using ListBase = mozilla::LinkedListElement<PersistentRooted<T>>;
     void registerWithRootLists(RootingContext* cx) {         do { static_assert(mozilla::detail::AssertionConditionType<decltype(!initialized())>::isValid, "invalid assertion condition"); if ((__builtin_expect(!!(!(!!(!initialized()))), 0))) { MOZ_ReportAssertionFailure("!initialized()", "/home/fitzgen/stylo/obj-x86_64-pc-linux-gnu/dist/include/js/RootingAPI.h", 1105); do { } while (0); do { *((volatile int*) __null) = 1105; ::abort(); } while (0); } } while (0);         JS::RootKind kind = JS::MapTypeToRootKind<T>::kind;         AddPersistentRoot(cx, kind, reinterpret_cast<JS::PersistentRooted<void*>*>(this));     }
                                        bool initialized() {         return ListBase::isInList();     }
             private:          detail::MaybeWrapped<T> ptr;
 }
  ;
  }
