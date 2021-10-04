#include <functional>
#include <iostream>
struct A {
  A(int num) : j(num) {}
  void out(int i) const { std::cout << j + i << '\n'; }
  int j;
};


int main() {
  std::function<void(const A&, int)> f = &A::out;    // збереження і виклик методу
  A a(314159);
  f(a, 1);
}
