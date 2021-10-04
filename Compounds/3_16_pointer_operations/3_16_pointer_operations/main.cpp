#include <iostream>
int main() {
  int* p1 = (int*) 1000000;
  std::cout << (long)p1;
  std::cout << sizeof(int);
  std::cout << long(p1 + 1);
  std::cout << (long)p1 + sizeof(int);
  p1 = (p1 + 1);
  std::cout << (long)p1;
  p1 = (p1 + 3);
  std::cout << (long)p1;
  return 0;
}
