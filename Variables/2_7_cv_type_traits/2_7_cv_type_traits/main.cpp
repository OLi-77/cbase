#include <iostream>
#include<typeinfo>
#include<type_traits>
using namespace std;


typedef char ch;
typedef std::add_pointer<ch>::type Tch;
typedef add_const<const Tch>::type c_Tch;
typedef add_const<Tch const>::type Tch_c;


void f0(c_Tch s) {
 cout << "const char * const function. Agr is "
  << typeid(s).name() << ": " << s << endl;
}
void f1( Tch s ) {
  cout << "char * function. Agr is " <<
    typeid(s).name() << ": " << s << endl;
}


int main() {
 c_Tch cpc = "My pointer";
 auto p = static_cast<Tch> (cpc);
 f1(p);

}
