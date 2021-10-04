int f() { return 1; };


int i, z;


namespace { int j; }


namespace A {
  using ::f;
  using ::i;
  using ::j;
  int g() { return f() + z + i + j;   }
}

int main() {
  A::i = 2;
  //A::z = 3; - error
  return A::g();
}




