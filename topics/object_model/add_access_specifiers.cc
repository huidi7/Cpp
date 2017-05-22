#include <stdio.h>

class A {
 public:
  int a = 0x77;
  char b = 'b';

 private:
  float c = 12.5;
};

int main() {
  A t;

  printf("sizeof(t) = %ld\n", sizeof(t));
  printf("&t = %p\n", &t);
  printf("&t.a = %p\n", &t.a);
  printf("&t.b = %p\n", &t.b);
}
