#include <iostream>
namespace A {
  int i;
  void f() {    i = 1; }
  void g();
}

void A::g() {  i = 1;  }


int main() {
  std::cout << A::i;
}
