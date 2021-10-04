#include <iostream>
using namespace std;
struct S {}; 	// порожня структура
struct S1 {
    char a[2];	char c, *s;
    S *p;   	short i;
} z = { "a", 'b', "qwerty", new S };


int main() {
  std::cout << "Size of int :" << sizeof(int) << endl <<"Size of int* :" << sizeof(int*) << endl <<
     "Size of short :" << sizeof(short) << endl <<"Size of char :" << sizeof(char) << endl <<
     "Size of S1 :" << sizeof(S1) << endl << "Size of S :" << sizeof(S) << endl<<
     "adr z.a :" << long(&z.a) << endl <<"adr z.c :" << long(&z.c) << endl<<
     "adr z.s :" << long(&z.s) << endl<< "adr z.p :" << long(&z.p) << endl<<
     "adr z.i :" << long(&z.i) << endl;
}
