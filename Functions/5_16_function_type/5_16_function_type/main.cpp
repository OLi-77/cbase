#include <iostream>
typedef void(*T)(void);    // тип вказівник на функцію
T p;
typedef void(&R)(void);    // тип посилання на функцію
void f(void) { std::cout << "F1"; }
void g(void) { std::cout << "F2"; }
R r = g;
int main() {
  p = f;   p();
  p = g;   p();
  r();
}
