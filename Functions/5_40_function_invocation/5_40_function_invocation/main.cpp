#include <iostream>
#include <type_traits>
int f(int) { return 1; }
typedef int(&R)(int);                    typedef int(*F)(int);
using Al = int(*) (int, int);
#define OUT(C) std::cout << #C<<": " << std::is_same<int, C>::value << std::endl;
#define TYPE(T, N) typedef std::result_of<T>::type N;
int main() {
  TYPE(decltype(f)&(int), A);  TYPE(R(int), B);
  TYPE(F(int), C);             TYPE(Al(int, int), D);
  std::cout << std::boolalpha;
  OUT(A);    OUT(B);    OUT(C);    OUT(D)
}
