#include <iostream>
int* f() {
  int i = 1;
  return &i; // warning
}


volatile int& g() {
  int j = 20;
  return j; // warning
}


#define OUT(ff, pp1, pp2) std::cout << "call "<<#ff<<": "<< "\n int*: " << (long)pp1 << "\n int&: " << (int)pp2 << '\n';


#define OUT2(N,a,b,c,d) std::cout << "new "<<N<< "\n f: int& = " << a << " int* = " << b << "\n g: int& = " << c << " int* = " << d << '\n';

int main() {
  int* p1 = f();
  volatile int& p0 = *p1;
  OUT(f, p1, p0);
  volatile int* p3 = &g();
  volatile int& p2 = *p3;




  OUT(g, p3, p2);
//значення у памяті, яка може
// бути використана під стек
 *p1 = 800;
// значення зберігаємо
  int m[] = { p0, *p1, p2, *p3 };


// значення на які посилається
// p0,p1,p2,p3 перезапишуться при
// наступному використанні стеку


  OUT2('1', p0, *p1, p2, *p3);
// збережені значення
  OUT2('2', m[0], m[1],
            m[2], m[3]);
}
