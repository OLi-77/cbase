#include <iostream>
#include <type_traits>


int f(int) { return 1; }


int main() {
  std::cout << std::boolalpha;
  std::cout << std::is_function<decltype(f)>::value << '\n';
}
