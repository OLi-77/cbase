#include <iostream>

using namespace std;



extern "C" {
  int f(int i, int j); // C function declaration
}
int f(int i, int j){ return 1;}



int main() {
  int j;
  j = f(1, 2); // call a C function from a C++ program
}


// This C++ function can be called from C code
extern "C" void F(int) {
  std::cout << "Callback invoked\n"; // It can use C++
}
