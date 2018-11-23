#include <iostream>

class M {
 public:
  M() {
    std::cout << "M::M()" << std::endl;
  }
   ~M() {
    std::cout << "M::~M()" << std::endl;
  }
    M(const M&) {
    std::cout << "M::M(const M&)" << std::endl;
  }
    void operator=(const M &) {
      std::cout << "M::operator=" << std::endl;
    }

};

class F : public M {
 public:
  F() {
    std::cout << "F::F()" << std::endl;
  }
~F() {
    std::cout << "F::~F()" << std::endl;
  }

  
  F(const F& f): M(f) {
    std::cout << "F::F(const F&)" << std::endl;
  }

  void operator=(const F& f){
     M::operator=(f);
    std::cout << "F::operator=" << std::endl;
  }
  
};

// Class A
class A {
 M m; 
 public:
  A() {
    std::cout << "A::A()" << std::endl;
  }
   ~A() {
    std::cout << "A::~A()" << std::endl;
  }
    A(const A& a): m(a.m) {
    std::cout << "A::A(const A&)" << std::endl;
  }
    void operator=(const A &) {
      std::cout << "A::operator=" << std::endl;
    }

};

int main(int, char**) {

  F f1;
  F f2 = f1;

  f1 = f2;
  A a1;
  A a2 = a1;

  return 0;
}