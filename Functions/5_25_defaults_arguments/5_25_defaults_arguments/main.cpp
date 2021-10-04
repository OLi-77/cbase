int f(int, int);
int f(int, int = 8);


void g(int a = f(1)) {  }


int main() {
  g();
}


int f(int a, int c) { return 1; }
