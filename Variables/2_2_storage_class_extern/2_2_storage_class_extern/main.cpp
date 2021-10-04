#include <iostream>
int main() {
extern int i; i++;
  // extern int j = 2;    - помилка
  // спроба проініціалізувати зовнішню змінну
  std::cout << "i = " << i;
  return 0;
}
int i = 5;


