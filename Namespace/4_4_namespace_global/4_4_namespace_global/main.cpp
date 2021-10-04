int i;


namespace A {
  int i, c;
  void f() {
   i  = 10;
   ::i = 1;
   }
}
int main() {
  i++;
  A::i++;
  using namespace A;


  A::i++; c++;  f();// A
  ::i++;
  // i++; -error
}

