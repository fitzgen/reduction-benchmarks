namespace std {
   }
   namespace std {
   }
   typedef long unsigned int size_t;
   typedef signed char int8_t;
   extern "C" {
   typedef struct {
  }
   __fsid_t;
   __extension__ typedef struct   {
  }
   *__locale_t;
   extern void abort (void) throw () __attribute__ ((__noreturn__));
    __attribute__ ((__unused__)) static __attribute__ ((cold)) __attribute__((noinline)) void MOZ_ReportAssertionFailure(const char* aStr, const char* aFilename, int aLine) ;
    }
   extern "C" {
    }
   namespace mozilla {
   template<typename> struct RemoveCV;
   template<typename T, T Value> struct IntegralConstant {
  };
   typedef IntegralConstant<bool, false> FalseType;
   template<typename T, typename U> struct IsSame;
   namespace detail {
  template<typename T> struct IsFloatingPointHelper   : IntegralConstant<bool,                      IsSame<T, float>::value ||                      IsSame<T, double>::value ||                      IsSame<T, long double>::value> {
};
  }
    template<typename T> struct IsFloatingPoint   : detail::IsFloatingPointHelper<typename RemoveCV<T>::Type> {
 };
   namespace detail {
  template<typename T> struct IsArrayHelper : FalseType {
};
  }
    template<typename T> struct IsArray : detail::IsArrayHelper<typename RemoveCV<T>::Type> {
 };
   namespace detail {
  template<typename T> struct IsFunPtr;
  };
    template<typename T> struct IsFunction   : public detail::IsFunPtr<typename RemoveCV<T>::Type *> {
 };
    template<typename T> struct RemoveReference {
  };
   template<bool Condition, typename A, typename B> struct Conditional {
    typedef A Type;
  };
   namespace detail {
  template<typename T> struct AssertionConditionType {
   typedef typename RemoveReference<T>::Type ValueT;
   static_assert(!IsArray<ValueT>::value,                 "Expected boolean assertion condition, got an array or a "                 "string!");
   static const bool isValid = true;
 };
  }
   }
   namespace mozilla {
   template<typename T>  T&& Forward(typename RemoveReference<T>::Type& aX) ;
   template<typename T> class LinkedListElement {
   private:   LinkedListElement* mNext;
    LinkedListElement* mPrev;
    const bool mIsSentinel;
                          };
   }
   namespace mozilla {
   template<typename IteratorT> class ReverseIterator {
  };
   }
   namespace mozilla {
   template<typename T, size_t Length> class Array {
                       };
    template<typename IndexType,          IndexType SizeAsEnumValue,          typename ValueType> class EnumeratedArray {
  public:   static const size_t kSize = size_t(SizeAsEnumValue);
  private:   typedef Array<ValueType, kSize> ArrayType;
    ArrayType mArray;
    template <typename... Args>                EnumeratedArray(Args&&... aArgs)     : mArray{
mozilla::Forward<Args>(aArgs)...}
    {
}
                          };
   }
    namespace JS {
   template <typename T> class PersistentRooted;
   }
    namespace JS {
   enum class RootKind : int8_t {
  BaseShape, JitCode, LazyScript, Scope, Object, ObjectGroup, Script, Shape, String, Symbol, RegExpShared,     Id,     Value,     Traceable,     Limit };
   template <typename T> struct MapTypeToRootKind {
      static const JS::RootKind kind = JS::RootKind::Traceable;
  };
   class RootingContext {
  };
   }
   namespace js {
     namespace gc {
  const size_t CellShift = 3;
  const size_t CellSize = size_t(1) << CellShift;
  }
     }
    enum WeakMapTraceKind {
       DoNotTraceWeakMaps,     ExpandWeakMaps,     TraceWeakMapValues,     TraceWeakMapKeysValues };
    class JSTracer {
   };
    namespace JS {
   }
   namespace js {
   template <typename Element, typename Wrapper> class WrappedPtrOperations {
 };
   template <typename Element, typename Wrapper> class MutableWrappedPtrOperations : public WrappedPtrOperations<Element, Wrapper> {
 };
   template <typename T, typename Wrapper> class RootedBase : public MutableWrappedPtrOperations<T, Wrapper> {
 };
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
    void AddPersistentRoot(RootingContext* cx, RootKind kind, PersistentRooted<void*>* root);
    template<typename T> class PersistentRooted : public js::RootedBase<T, PersistentRooted<T>>,                          private mozilla::LinkedListElement<PersistentRooted<T>> {
      using ListBase = mozilla::LinkedListElement<PersistentRooted<T>>;
      void registerWithRootLists(RootingContext* cx) {
         JS::RootKind kind = JS::MapTypeToRootKind<T>::kind;
         AddPersistentRoot(cx, kind, reinterpret_cast<JS::PersistentRooted<void*>*>(this));
     }
                                         bool initialized() {
         return ListBase::isInList();
     }
              private:          detail::MaybeWrapped<T> ptr;
  }
   ;
   }
