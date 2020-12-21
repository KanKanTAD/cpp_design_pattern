struct NeedSingleton {};

class Director : public NeedSingleton {
public:
  void say() const;
};

class DirectorFactory {
  Director &getDirector() const {
    static Director instance;
    return instance;
  }
};
