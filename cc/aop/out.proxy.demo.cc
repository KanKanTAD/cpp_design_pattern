#include <cassert>
#include <string>

struct Classiable {
  virtual unsigned long __get_classid__() const = 0;
};
struct Connectable : public Classiable {
  virtual bool connect() = 0;
};

class RealConnect : public Connectable {};

class ProxyConnect : public Connectable {
  std::string _be_proxied_clazz_[1] = {"RealConnect"};
  Connectable &real_connect;

public:
  ProxyConnect(Connectable &c) : real_connect(c) {
    assert(__get_classid__() != c.__get_classid__());
  }
  bool connect() override {
    bool self_res = false;
    // before
    auto res = real_connect.connect();
    // after
    return self_res;
  }
};
