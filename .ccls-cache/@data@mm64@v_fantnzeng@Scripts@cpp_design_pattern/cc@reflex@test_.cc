#include "reflex.hpp"

using namespace cc;
using namespace reflex;

int main(int argc, char *argv[]) {
  Reflexer er({__FILE__});
  auto clz = er.find_clazz("::Constomer");
  list<Clazz> beans;
  er.list_clazz(beans);


  return 0;
}
