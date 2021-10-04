#include <functional>
#include <iostream>


void print(int i) { std::cout << i << '\n'; }


int main() {
  // збереження і виклик функції
  std::function<void(int)> f = print;                   f(-9);
  // збереження і виклик лямбда функції
  std::function<void()> f_l = []() { print(42); };      f_l();
  // збереження результату і виклик зв'язаного виразу
  std::function<void()> f_b = std::bind(print, 31337);  f_b();
}
