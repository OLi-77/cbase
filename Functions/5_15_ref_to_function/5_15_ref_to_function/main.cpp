#include <iostream>


void f(void) {  std::cout << "F1";  }
void g(void) {  std::cout << "F2";  }
void(&r)(void) = f;


int main() {
  r();
  // r = g; - error
}
