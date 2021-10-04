namespace A {
  namespace { int i = 1; int j = 2; }
  int i = 3;
  int z = 4;
  int f() {
    // return A::i + z + i + j; -
    // error доступ до i

    return A::i + z + j;
  }
}

int main() {
  A::i = 5; A::j = 6;  A::f();
using namespace A;
// i = 5;  -error
A::i = 5;  j = 6;  f();
}
