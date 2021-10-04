#include <functional>

struct As { int i; };


As&& f() { return As(); }


int main() {
f();
// The expression f() belongs
// to the xvalue category,
// because it refers to an unnamed
// rvalue reference to object.

As&& rr_a = As();
rr_a;
// The expression rr_a belongs
// to the lvalue category,
// because it refers to a named
// rvalue reference to object.


std::ref(f);
// The expression std::ref(f) belongs
// to the lvalue category,
// because it refers to an
// rvalue reference to function.
}
