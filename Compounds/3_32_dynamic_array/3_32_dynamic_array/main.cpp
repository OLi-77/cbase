#include <iostream>
#include <malloc.h>
#define ENDL std::cout << '\n';
struct A {
A() { std::cout << "ctor\n"; }
~A(){ std::cout << "dtor\n";}
};
int main() {
    A m[5]; ENDL;

    A* p = new A[5]; ENDL;
    A* p2 = (A*) malloc(5*sizeof(A));
    delete [] p; ENDL;
    free(p2);
    p = new A[5]; ENDL;
    delete p; ENDL;
    int* p3 = new int[5];
    delete p3;
}
