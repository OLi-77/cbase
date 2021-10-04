#include <iostream>
namespace A {  void f() { std::cout << "A::f\n"; } }


void f() { std::cout << "f\n"; }


namespace B {  void  f() { std::cout << "B::f\n"; } }


int main() {
  f(); A::f(); B::f();   		// out - f A::f B::f
  using A::f;
  ::f(); f(); A::f(); B::f();  	// out - f A::f A::f B::f
  using B::f;
  //f(); collision call: A::f or B:: f
  ::f(); A::f(); B::f(); 		// out - f A::f B::f
}

