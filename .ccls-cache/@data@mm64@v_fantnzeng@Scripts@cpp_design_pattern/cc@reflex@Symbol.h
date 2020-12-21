#pragma once

#include "com_include.h"

namespace cc {
namespace reflex {

struct Namespace;

struct Symbol {
  Namespace *space = nullptr;
  string name;
};

} // namespace reflex
} // namespace cc
