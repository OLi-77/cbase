#include <iostream>
#include <iostream>
static int k = 70;
void f() {
  int i = 0; i++;
  static int j = 0;j++;
  std::cout << "i = " << i << " j = " << j << "\n";
}


int main() {
  f();
  f();
}


