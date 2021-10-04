//Файл - main.cpp
#include <iostream>
#include "var.h"
namespace A {
  int z = 7;
}


int main() {
  A::f();
  std::cout << " A::i = " << A::i <<
    ", A::z = " << A::z << std::endl;
}
