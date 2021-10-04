namespace A {
  int i, j;
  namespace B {
    int i, z;
  }
}


int main() {
  A::i = 1;  A::j = 2;
  A::B::i = 3;  A::B::z = 4;
  using namespace A;

  i = 1;  j = 2;
  B::i = 3;  B::z = 4;
  using namespace A::B;
  A::i = 1;  j = 2;
  B::i = 3;  z = 4;


  //::i = 3; error
  //i = 3; error


  return 1;
}



