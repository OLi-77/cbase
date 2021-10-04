#include <iostream>
#include <cstdarg>


void f(int i, ...) {
  va_list param;		// організація вказівника на список параметрів
  va_start(param, i);	// вказівник параметрів напочаток
  for (int j = 1; j <= i; j++)
    std::cout << j << "-й аргумент - " << va_arg(param, int) << "\n";
  va_list param2;
  va_copy (param2, param);
  va_end(param); 		//очистка списку
}
int main() {
  f(1, 1);     f(2, 1, 2);     f(3, 1, 2, 3);
}
