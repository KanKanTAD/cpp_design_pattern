#include <cassert>
struct Operation1 {
  virtual void run() = 0;
};
struct Operation2 {
  virtual void exec() = 0;
};
struct Operation3 {
  virtual void eval() = 0;
};
struct Operation4 {
  virtual void invoke() = 0;
};

class FacadeOperation {
  Operation1 *op1;
  Operation2 *op2;
  Operation3 *op3;
  Operation4 *op4;

public:
  virtual void run() {
    assert(op1 != nullptr);
    op1->run();
  }
};
