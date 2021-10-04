#include <type_traits>
#include <iostream>
struct A {};
int main(){
    std::cout << std::boolalpha  << std::is_pointer<A>::value << '\n' << std::is_pointer<A*>::value
    << '\n' << std::is_pointer<float>::value << '\n' << std::is_pointer<int>::value << '\n' <<
    std::is_pointer<int*>::value << '\n' << std::is_pointer<int**>::value << '\n';
}
