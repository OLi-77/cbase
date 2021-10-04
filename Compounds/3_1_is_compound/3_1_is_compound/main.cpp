#include <iostream>
#include <type_traits>
class A {};


int main (void) {
  std::cout << (std::is_compound< A >::value
                     ? "T is compound" : "T is not a compound") << '\n';
  std::cout << (std::is_compound< int >::value
                     ? "T is compound" : "T is not a compound") << '\n';
}
