#include <iostream>
// Визначення аліаса
using F = int(*) (int, int);
// Визначення функцій
int add(int i, int j) {
  return i + j;
}
int mult(int i, int j) {
  return i * j;
}
// Використання аліаса для створення змінної
F f = mult;


int main() {
  std::cout << add(1, 1) << " " << f(2, 2) << " ";
  f = mult;
  std::cout << " " << f(3, 3) << '\n';
}
