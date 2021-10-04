int f(int, int);
int f(int, int = 8);


void h(int a = ([] { return 1; })() ) { }


int main() {
  h();
}


int f(int a, int c) { return 1; }
