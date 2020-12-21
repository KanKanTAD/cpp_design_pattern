#include <memory>
#include <string>
#define interface struct

interface Movable {
  virtual void move() = 0;
};

class SimpleMoveFactory {
public:
  virtual std::shared_ptr<Movable> create(const std::string &classname);
};

class Car : public Movable {
  void move() override {}
};

class Animal : public Movable {
  virtual void move() override;
};

std::shared_ptr<Movable>
SimpleMoveFactory::create(const std::string &classname) {
  if (classname == "Car") {
    return std::make_shared<Car>();
  } else if (classname == "Animal") {
    return std::make_shared<Animal>();
  }
  return std::shared_ptr<Movable>(nullptr);
}
