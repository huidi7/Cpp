#include <stdio.h>

class A {
 public:
  A(int i = 1, char j = 'a', float k = 0) : a(i), b(j), c(k) {}

  int GetA() { return a; }
  char GetB() { return b; }
  float GetC() const { return c; }

  virtual void Fun() { printf("A::Fun\n"); }

 private:
  int a;
  char b;
  float c;
};

int main() {
  A t(0x12345678, 'b', 12.5);

  t.Fun();
  printf("sizeof(A) = %ld\n", sizeof(A));
  printf("sizeof(t) = %ld\n", sizeof(t));
}
