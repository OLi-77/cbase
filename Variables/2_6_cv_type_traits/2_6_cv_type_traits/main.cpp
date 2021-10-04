#include <iostream>
#include <type_traits>
using namespace std;
void f(int) {}
void g(const int) {}
int main() {
   cout <<  boolalpha;
   cout <<  is_const<int>::value << '\n';
   cout <<  is_const<const int>::value << '\n';

   cout <<  is_const<const int*>::value <<'\n';
   cout <<  is_const<int* const>::value <<'\n';
   cout <<  is_const<const int&>::value <<'\n';


   remove_const<const int>::type t1 = 2;
   add_const<int>::type t2 = 3;


  f(t1);
  g(t2);
}

