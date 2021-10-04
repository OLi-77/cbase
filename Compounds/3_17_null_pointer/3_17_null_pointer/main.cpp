#include <iostream>
int main() {
  double* ptr(0);
  std::cout <<
      ((ptr) ? "ptr is pointing to a double value." : "ptr is a null pointer.");
  return 0;
}
