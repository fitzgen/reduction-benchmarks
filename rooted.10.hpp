   typedef long unsigned int size_t;
           typedef signed char int8_t;
           namespace mozilla {
                    template<int Condition, typename A, typename B> struct Conditional {
          typedef A Type;
        };
           class LinkedListElement {
         private:   LinkedListElement* mNext;
          LinkedListElement* mPrev;
          const bool mIsSentinel;
                                };
          }
            namespace JS {
          template <typename T> class PersistentRooted;
          enum class RootKind : int8_t {
        BaseShape, JitCode, LazyScript, Scope, Object, ObjectGroup, Script, Shape, String, Symbol, RegExpShared,     Id,     Value,     Traceable,     Limit };
          template <typename T> struct MapTypeToRootKind {
            static const JS::RootKind kind = JS::RootKind::Traceable;
        };
                  }
           namespace js {
            namespace gc {
        const size_t CellSize = size_t() << 3;
        }
            }
           namespace js {
                                      template <typename T> class alignas(8) DispatchWrapper {
            using TraceFn = void (*);
            TraceFn tracer;
            alignas(gc::CellSize) T storage;
        };
          }
            namespace JS {
          namespace detail {
         template <typename T> using MaybeWrapped = typename mozilla::Conditional<     MapTypeToRootKind<T>::kind == JS::RootKind::Traceable,     js::DispatchWrapper<T>,     T>::Type;
        }
           void AddPersistentRoot(  PersistentRooted<void*>* root);
           template<typename T> class PersistentRooted :                           private mozilla::LinkedListElement {
            void registerWithRootLists(void) {
              AddPersistentRoot(  reinterpret_cast<JS::PersistentRooted<void*>*>(this));
          }
                                                                  private:          detail::MaybeWrapped<T> ptr;
        }
          ;
          }
