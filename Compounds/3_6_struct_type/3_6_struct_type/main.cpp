#include <iostream>
#include <cstring>
using namespace std;
struct A {
    int i;	char* s;	int m[3];
    // int m[]; - розмір неможливо визначити за ініціалізатором і він буде нульовим
} a = {1, "aaaa", {1,2,3} };	// явна ініціалізація усіх полів
A b = {2};				// явна ініціалізація тільки одного поля
A c = {3,"c",{-1}};		// явна ініціалізація двох полів і 0-го елемента третього
// A d = {, "bbbb"};		// помилка ініціалізації
int main() {
  cout << "a.i = " << a.i << " Str Len: " << ( (a.s) ? strlen(a.s) : 0) << " Mas Count:" <<
  sizeof(a.m)/sizeof(int) << " Zero index el.:" << a.m[0] << endl << "b.i = " << b.i <<
  " Str Len: " << ( (b.s) ? strlen(b.s) : 0) << " Mas Count:" << sizeof(b.m)/sizeof(int) <<
  " Zero index el.:" << b.m[0] << endl << "c.i = " << c.i << " Str Len: " <<
  ( (c.s) ? strlen(c.s) : 0) << " Mas Count:" << sizeof(c.m)/sizeof(int) << " Zero index el.:" <<
  c.m[0] << endl; }

