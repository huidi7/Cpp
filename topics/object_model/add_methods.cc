#include <stdio.h>

class A {
 public:
  A(int i, char j, float k) : a(i), b(j), c(k) {}

  int GetA() { return a; }
  char GetB() { return b; }
  float GetC() const { return c; }

 private:
  int a;
  char b;
  float c;
};

int g_a = 100;
int GetA() { return g_a; }

int main() {
  A t(0x12345678, 'b', 12.5);
  t.GetA();
  GetA();
}
