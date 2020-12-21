#pragma once
#include "Symbol.h"
#include "ValueType.h"
#include "Variant.h"
#include "com_include.h"

namespace cc {
namespace reflex {
struct Method : public Symbol {
  ValueType *return_type;
  list<Variant *> args;
};
} // namespace reflex
} // namespace cc
