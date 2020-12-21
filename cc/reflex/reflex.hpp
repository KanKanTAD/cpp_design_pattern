#include "Clazz.h"

namespace cc {
namespace reflex {
class Reflexer {

public:
  Reflexer(const list<string> &file_paths);
  virtual ~Reflexer();
  virtual shared_ptr<Clazz> find_clazz(const string &name) const;
  virtual void list_clazz(list<Clazz> &clazz_lst) const;
};
} // namespace reflex
} // namespace cc
