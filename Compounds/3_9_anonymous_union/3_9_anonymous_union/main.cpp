#include <iostream>
static union { int x = 1000; }; 	// оголошення анонімного об'єднання
// int x = 2000; не можна оголошувати з анонімним union
union A { int x; 				// оголошення об'єднання в С++
    A(int i);
    int get() {return x;}
} u(10);
A::A(int i) {x=i+10;}
struct B { int x; 			// оголошення структури в С++
    B(int i) { x = i+20; } } s(10);

struct {int j; } s1; 			// - використовується лише один екземпляр структури

union {int j; } u1;  			// використовується лише один екземпляр об'єднання

int& get () {return x;}
int main() { int x = -1;
    std::cout<<"local variable "<< x <<"\n"<< "static anonymous union "<< get() <<"\n"<<
     "static anonymous union "<< ::x <<"\n"<< "union " << u.get()<< "\n" << "struct " << s.x <<
     "\n" << "anonymous union " << u1.j << "\n" << "anonymous struct " << s1.j << "\n"; }
