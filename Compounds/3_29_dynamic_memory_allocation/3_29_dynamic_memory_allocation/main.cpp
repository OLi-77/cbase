#include <iostream>
#include <cstring>
using namespace std;
struct A { char n; };
struct B { char n;
 B():n(3){ cout << "\nctor B";}
};
char p[2];
int main(void) {
    p[0] = 1; p[1] = '\0'; 	// Fill the memory cell
    A* a = new (p) A; 		// Create an object in memory
    cout << "\n new A: a.n = " << (int)a->n << endl;
    p[0] = 2; p[1] = '\0';    // Fill the memory cell
    A* a1 = new (p) A();	// Create an object in memory
    cout << "\n new A(): A.n = " << (int)a1->n << endl;
    p[0] = 1; p[1] = '\0'; 	// Fill the memory cell
    B* b = new (p) B; 		// Create an object in memory
    cout << "\n new B: B.n = " << (int)b->n << endl;
    p[0] = 2; p[1] = '\0';    // Fill the memory cell
    B* b1 = new (p) B();	// Create an object in memory
    cout << "\n new B(): B.n = " << (int)b1->n << endl;
}
