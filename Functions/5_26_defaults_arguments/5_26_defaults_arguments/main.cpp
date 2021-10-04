int f(int a, int c = 8) { return 1; }


void g(int a = f(1)) {
  int z = 0;
  // int f(int = z, int = 8); - error
}


int(*p) (int, int) = f;
// int(*p1) (int) = f; - error


int main() {  g();  }

