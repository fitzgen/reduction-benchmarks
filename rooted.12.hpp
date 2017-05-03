class a;
template <typename> struct b { typedef a c; };
class C {
  C *d;
  C *e;
  bool f;
};
namespace JS {
template <typename> class PersistentRooted;
}
class a {
  using g = void *;
  g h;
  int i;
};
namespace JS {
namespace detail {
template <typename j> using MaybeWrapped = typename b<j>::c;
}
void AddPersistentRoot(PersistentRooted<void *> *);
template <typename j> class PersistentRooted : C {
  void k() {
    AddPersistentRoot(reinterpret_cast<PersistentRooted<void *> *>(this));
  }
  detail::MaybeWrapped<j> l;
};
}
