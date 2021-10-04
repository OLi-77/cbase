#include <iostream>
namespace {//  АПІ
  int i = 4;
}
int i = 5; // ГОВ
namespace A {
  int i = 6;
}
int main() {
// i++; -error
std::cout << " A::i = " << A::i << ", Global::i = " << ::i;
//out -  A::i = 6, Global::i = 5
}

