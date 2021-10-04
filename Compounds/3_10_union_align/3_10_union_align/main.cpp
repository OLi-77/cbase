#include <iostream>
using namespace std;
union U {
    struct A {
        int i;   // поле вкладеної структури
        char c ; // поле вкладеної структури
        int j;   // поле вкладеної структури
    } a;         // поле об'єднання
    char m[7];   // поле об'єданння
} u;             // екземпляр об'єднання
int main(void) {
    cout << "Size of U: " << sizeof (U) << '\n'<<
    "Size of U::A :" << sizeof(U::A) << '\n'<<
    "Size of u.m: " << sizeof(u.m) << '\n'<<
    "Size of u.a.i: " << sizeof(u.a.i) << '\n'<<
    "Size of u.a.i: " << sizeof(u.a.c) << '\n'<<
    "Size of u.a: " << sizeof(u.a) << '\n';
    cout << "& u " << (&u) << '\n' <<
            "& u.m " << (&u.m) << '\n' <<
            "& u.a " << (&u.a) << '\n' <<
            "& u.a.i " << (&u.a.i) << '\n' <<
            "& u.a.j "<< (&u.a.j) << '\n';
}
