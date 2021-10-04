#include <iostream>
namespace A {  int i = 4; }
void f() {
  A::i++;
  // A::j++; - error
}
namespace A {  int j = 6;  }
int main() {
  f();
  std::cout << " A::i = " << A::i << ", A::j = " << A::j;
  // out A::i = 5, A::j = 6
}
