#include <iostream>
struct A {
    A() { std::cout << "ctor\n"; }
    ~A(){ std::cout << "dtor\n";}
};

int main() {
    A* p = new A;
    delete p; delete p;
    p = new A[3];
    delete (A*)(p + 3);
    delete (A*)(p + 1);
    delete p;
    return 0;
}
