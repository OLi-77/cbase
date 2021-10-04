#include <iostream>
#include <type_traits>
typedef std::decay<int(int)>::type F;      // int(*)(int)


int main() {
  std::cout << std::boolalpha;
  std::cout << "F: " << std::is_same<int(*) (int), F>::value <<'\n';


  F f = [](int) {return 1; };
  std::cout << f(5);
}
