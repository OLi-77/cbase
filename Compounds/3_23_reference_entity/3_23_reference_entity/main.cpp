#include <iostream>
using namespace std;
void f() { int&& i = 1; }
struct A {};
struct B: A { operator int(){ return 1; }  };
B bar() { return B(); }
int j = 0;
int&& rval = 1; // rvalue
// int&& rval1 = j; помилка
auto&& rval4 = j;//rvalue, яке насправді є lvalue;
int& lval = j;// lvalue
auto&& rval2 = rval;//rvalue, яке насправді є lvalue;
auto&& rval3 = lval;//rvalue, яке насправді є lvalue;
int main(void) {

    cout << j << ' ' << rval << ' ' << lval << ' ' <<
       rval2 << ' ' << rval3 << ' ' << rval4 << '\n';
    j = 1;
    cout << j << ' ' << rval << ' ' << lval << ' ' <<
       rval2 << ' ' << rval3 << ' ' << rval4 << '\n';
    rval3 = 2;
    cout << j << ' ' << rval << ' ' << lval << ' ' <<
       rval2 << ' ' << rval3 << ' ' << rval4 << '\n';


    int i = 1;
    // int& bad_ref2 = 1; помилка організації посилання
    const int& cref = 1;// зв'язування lvalue з rvalue
    int&& rref = 1; //зв'язування з rvalue


    // lvalue-посилання на частину об'єкта
    const A& cref2 = bar();
    // rvalue-посилання на частину об'єкта
    A&& rref2 = bar();
    // зв'язування з lvalue i
    int&& xref = static_cast<int&&>(i);
    // int&& copy_ref = i; // помилка зв'язування
    // зв'язування з тичасовою змінною
    double&& copy_ref = i;
    B b;
    int&& conv_ref = b; // rvalue-посилання на результат приведення
  }




