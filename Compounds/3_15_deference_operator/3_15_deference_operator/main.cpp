#include <iostream>
int main() {
  int value = 5;
  std::cout << &value << std::endl; 	// виводимо адресу value
  std::cout << value << std::endl; 		// виводимо значення value


  int* ptr = &value; 				// ptr вказує на value
  std::cout << ptr << std::endl; 		// виводимо адресу, яка зберігається в ptr
  std::cout << *ptr << std::endl; 		// розіменовуємо ptr


  return 0;
}
