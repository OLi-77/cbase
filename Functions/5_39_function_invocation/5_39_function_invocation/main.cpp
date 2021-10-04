#include <iostream>
#include <tuple>
#include <utility>
int add(int first, int second) { return first + second; }
auto add_lambda = [](int first, int second) { return first + second; };
int main() {
    std::cout << std::apply(add, std::make_pair(1, 2)) << '\n';
     std::cout << std::apply(add_lambda, std::make_pair(2.0f, 3.0f)) << '\n';
}
