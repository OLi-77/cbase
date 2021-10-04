struct A {
   int i,j;
   char c;
} a;


int main() {
    a.i = 100;
    A a1;     a1.j = a.i;
    return 0;
}


