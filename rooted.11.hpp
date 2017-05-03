typedef int size_t;
;
namespace mozilla {
template < int , typename A, typename > struct Conditional {
  typedef A Type;
};
class LinkedListElement {
LinkedListElement *mNext;
  LinkedListElement *mPrev;
  bool mIsSentinel;
};
}
namespace JS {
template < typename > class PersistentRooted;
enum RootKind {
  Traceable,
  };
template < typename > struct MapTypeToRootKind {
  static const RootKind kind = Traceable;
};
}
namespace {
namespace gc {
}
}
namespace js {
template < typename T > class DispatchWrapper {
  using TraceFn = void(*);
  TraceFn tracer;
  T storage;
};
}
namespace JS {
namespace detail {
template < typename T >
using MaybeWrapped =
    typename mozilla::Conditional< Traceable,
                                   js::DispatchWrapper< T >, T >::Type;
}
void AddPersistentRoot(PersistentRooted< void * > *);
template < typename T >
class PersistentRooted : mozilla::LinkedListElement {
  void registerWithRootLists() {
    AddPersistentRoot(
        reinterpret_cast< PersistentRooted< void * > * >(this));
  }

detail::MaybeWrapped< T > ptr;
};
}
