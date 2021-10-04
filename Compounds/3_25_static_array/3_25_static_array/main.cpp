#include <iostream>
#include <type_traits>
class A {};
int main() {
    std::cout << std::boolalpha << std::is_array<A>::value << ' ' <<
        std::is_array<A[3]>::value << ' ' << std::is_array<float>::value << ' ' <<
        std::is_array<int>::value << ' ' << std::is_array<int[3]>::value << "\n\n";
    std::cout <<  std::rank<int[1][2][3]>::value << ' ' << std::rank<int[][2][3][4]>::value <<
                   ' ' << std::rank<int>::value <<"\n\n";
    std::cout << std::extent<int[3]>::value << ' ' <<  std::extent<int[3][4]>::value << ' ' <<
        std::extent<int[3][4],1>::value << ' ' << std::extent<int[3][4],2>::value << ' ' <<
        std::extent<int[]>::value << '\n';
}
