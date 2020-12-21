#pragma once
#include "Symbol.h"
#include "com_include.h"

namespace cc {
namespace reflex {
struct Namespace : public Symbol {
  virtual Namespace *parent() const;
};
} // namespace reflex
}; // namespace cc
