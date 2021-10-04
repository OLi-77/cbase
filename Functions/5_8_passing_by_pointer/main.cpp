#include <iostream>
int f(int i) {
  i = 4;   return i;
}


int main() {
  int j = 10;
  std::cout << " before call f: j = " << j << std::endl;
  std::cout << " f = " << f(j) << std::endl;
  std::cout << " after call f: j = " << j << std::endl;
}


