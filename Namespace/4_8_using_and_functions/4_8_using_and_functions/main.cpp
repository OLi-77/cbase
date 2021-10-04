#include <iostream>
using namespace std;
void f() { cout << "f\n"; }
namespace A {  void f(char) { cout << "A::f\n"; }  }
namespace B {  void f(char) { cout << "B::f\n"; }  }
int main() {
  f();  A::f('a'); B::f('b'); // out - f A::f B::f
  using A::f;
  //f(); must  call A::f  or using namespace A;
  ::f(); f('a'); B::f('b'); // out - f A::f B::f
return 1;
}
