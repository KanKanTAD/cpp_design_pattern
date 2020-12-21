#include "../reflex/reflex.hpp"
template <class T> struct Copiable { virtual void copyTo(T &) = 0; };
template <class T> struct Clonable { virtual shared_ptr<T> clone() = 0; };
template <class T> struct Outtable {
  virtual void outto(ostream &out) const = 0;
};

template <class T> struct Persistent {};
