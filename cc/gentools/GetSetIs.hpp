#include "../reflex/reflex.hpp"

namespace cc {
namespace gentool {
struct StringGenerable {
  virtual string prefix() const = 0;
  virtual void generate(reflex::Field *field, string &code) const = 0;
  virtual void generate(const list<reflex::Field *> &fields,
                        string &code) const = 0;
};

struct GetterGener : public StringGenerable {};
struct SetterGener : public StringGenerable {};
struct IsGener : public StringGenerable {};

struct GeterGen {};
} // namespace gentool
} // namespace cc
