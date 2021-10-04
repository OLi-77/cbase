#include <type_traits>
#include <iostream>
class A {};
int main(void) {
 std::cout<<std::boolalpha << std::is_reference<A>::value << '\n' << std::is_reference<A&>::value << '\n' <<
  std::is_reference<A&&>::value << '\n' << std::is_reference<int>::value << '\n' <<
  std::is_reference<int&>::value << '\n' << std::is_reference<int&&>::value << '\n' <<
  std::is_lvalue_reference<A>::value << '\n' << std::is_lvalue_reference<A&>::value << '\n' <<
  std::is_lvalue_reference<A&&>::value << '\n' << std::is_lvalue_reference<int>::value << '\n' <<
  std::is_lvalue_reference<int&>::value << '\n' << std::is_lvalue_reference<int&&>::value << '\n' <<
  std::is_rvalue_reference<A>::value << '\n' << std::is_rvalue_reference<A&>::value << '\n' <<
  std::is_rvalue_reference<A&&>::value << '\n' << std::is_rvalue_reference<int>::value << '\n' <<
  std::is_rvalue_reference<int&>::value << '\n' << std::is_rvalue_reference<int&&>::value << '\n';
}
