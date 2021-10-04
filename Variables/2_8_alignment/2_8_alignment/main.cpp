#include <iostream>
using namespace std;
struct A {};
struct B {  int f2; char c; };
struct alignas(128) Empty128 {};
int main() {
  cout << "size of A class: " << sizeof(A)
<< '\n' <<"size of pointer : " <<sizeof(int*)
<< '\n' << "size of char : " << sizeof(char)    << '\n' << "size of short : " << sizeof(short)     << '\n' << "size of B : " << sizeof(B)          << '\n' << "size of Empty128 : "                << sizeof(Empty128) << '\n';

  cout << "alignment of A class: " << alignof(A) << '\n' << "alignment of pointer : "          << alignof(int*) << '\n'                      << "alignment of char : " << alignof(char)    << '\n' << "alignment of short : "            << alignof(short) << '\n' << "alignment of B :" << alignof(B) << '\n'                         << "alignment of Empty128 : "<< alignof(Empty128)<<'\n';
  }
