#include <iostream>
union U {
    unsigned int t:1;	// оголошення БП
    struct A {
        int t:1; 	// оголошення БП
        int i;
    } a;
    struct B {
        int t:1; 	// оголошення БП
        int i;

    } b;
} u;
bool Is(U u) {
    return (u.t)? false:true;
}
int main() {
    u.t = 1;
    (Is(u))? u.a.i = 10 : u.b.i = 20;
    std::cout<<u.b.i;
}
