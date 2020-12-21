#pragma once
#include "com_include.h"

namespace cc {
namespace reflex {
struct Value {
  virtual ~Value();
};

struct Pointer : public Value {
  void *value = nullptr;
  Pointer(void *ptr) : value(ptr) {}
};
struct Integer : public Value {
  int value = 0;
  Integer(int v) : value(v) {}
};

struct Long : public Value {
  long value = 0L;
  Long(long v) : value(v) {}
};

} // namespace reflex
} // namespace cc
