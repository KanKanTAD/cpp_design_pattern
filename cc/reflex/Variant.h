#pragma once
#include "Symbol.h"
#include "ValueType.h"
#include "com_include.h"

namespace cc {
namespace reflex {
struct Variant : public Symbol {
  ValueType type;
};
} // namespace reflex
} // namespace cc
