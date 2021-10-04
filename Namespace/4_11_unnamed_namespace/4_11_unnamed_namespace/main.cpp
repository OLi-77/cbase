namespace {
  int i;
  namespace A { int j; };
}


int main() {
  A::j = 1;
  i = 2;
  using namespace A;
  j = 3;
  i = 4;
  return 1;
}
