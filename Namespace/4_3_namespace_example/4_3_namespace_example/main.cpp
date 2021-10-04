namespace A {
  int i, c; //
  int f();
  typedef int I;
}
int A::f() { return 1; }


namespace B {
  int i, z = 2;
  int f() { return 2; }
}


int main() {
  A::i++;
  A::I p;
  using namespace A;
  i++; c++;   f();  I p2;// A
  B::i++;  B::z++;  B::f();// B


  using B::i;
  A::i++; c++;   f();  I p3;// A
  i++;  B::z++;  B::f();// B


  using namespace B;
  A::i++; c++;   A::f();  I p4;// A
  i++;  z++;  B::f();// B


  using B::f;
  f();        // B
}

