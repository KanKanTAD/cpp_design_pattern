#pragma once
#include "com_include.h"

namespace cc {
namespace reflex {
struct Clazz;
struct Field {
  Clazz *clazz;
  Clazz *type;
  string name;
};
} // namespace reflex
} // namespace cc
