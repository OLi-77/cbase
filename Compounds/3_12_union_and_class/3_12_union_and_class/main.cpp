#include <iostream>
using namespace std;
#include <type_traits>
struct A {};
typedef union { int a; float b; } B;
struct C {   B d; };


int main(void) {
  cout << boolalpha << std::is_union<A>::value << '\n' << std::is_union<B>::value << '\n' <<
  is_union<C>::value << '\n' << is_union<int>::value << '\n';
}
