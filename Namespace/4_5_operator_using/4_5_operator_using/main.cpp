#include <iostream>
namespace A {
int i = 0, j = 1, z = 2;
}
namespace B {
  // int i; - error if use using A::i;
  using A::i;
  int j = 3;
  void f() { j++;  i = 1; }
  void g() { j--; using A::j; j++; }
}


int main() {
  B::f(); B::g();
  std::cout << "A: " << A::i << ' '
    << A::j << ' ' << A::z << ' ' <<
    "B: " << B::i << ' ' << B::j;

  using namespace A;
  std::cout << "A: " << i << ' ' <<
    j << ' ' << z << ' ' << "B: " <<
    B::i << ' ' << B::j;


  using namespace B;
  std::cout << "A: " << A::i << ' '
    << A::j << ' ' << z << ' ' <<
    "B: " << i << ' ' << B::j;
}


