#pragma once
#include "Field.h"
#include "Method.h"
#include "com_include.h"

namespace cc {
namespace reflex {

struct Clazz {
  list<Clazz *> super_clazz;
  string name;
  list<Field *> fields;
  list<Method *> methods;

  virtual ~Clazz() {}
};

} // namespace reflex
} // namespace cc
