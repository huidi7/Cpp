#include <iostream>
using namespace std;

class Test {
 public:
  double m1;
  int m2;
};

class A {
 public:
  A() : ia(0), ca('A') {}
  void f() { cout << "A::f()" << endl; }
  void Af() { cout << "A::Af()" << endl; }

 private:
  int ia;
  char ca;
};

class B {
 public:
  B() : ib(0), cb('B') {}
  void nb() {}
  virtual void f() { cout << "B::f()" << endl; }
  virtual void Bf() { cout << "B::Bf()" << endl; }

 private:
  int ib;
  char cb;
};

class B1 : virtual public B {
 public:
  B1() : ib1(11), cb1('1') {}
  virtual void f() { cout << "B1::f()" << endl; }
  virtual void f1() { cout << "B1::f1()" << endl; }
  virtual void Bf1() { cout << "B1::Bf1()" << endl; }

 private:
  int ib1;
  char cb1;
};

class B2 : virtual public B {
 public:
  B2() : ib2(12), cb2('2') {}
  virtual void f() { cout << "B2::f()" << endl; }
  virtual void f2() { cout << "B2::f2()" << endl; }
  virtual void Bf2() { cout << "B2::Bf2()" << endl; }

 private:
  int ib2;
  char cb2;
};

class D : public B1, public B2 {
 public:
  D() : id(100), cd('D') {}
  virtual void f() { cout << "D::f()" << endl; }
  virtual void f1() { cout << "D::f1()" << endl; }
  virtual void f2() { cout << "D::f2()" << endl; }
  virtual void Df() { cout << "D::Df()" << endl; }

 private:
  int id;
  char cd;
};

int main() {
//  A a;
//  B b, bb;
//  B1 b1;
//  B2 b2;
  D d;

  B1* pb1 = &d;
//  B2* pb2 = &d;
//  D* pd = &d;
  pb1->f();
//  pb2->f();
//  pd->f();

  return 0;
}
