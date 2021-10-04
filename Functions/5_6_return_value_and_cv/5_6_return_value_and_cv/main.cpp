volatile int F();
const int f();


volatile int F(){ // volatile є обов'язковим
  int a = 0;  a++;
  return a;
}


const int f() {  // const є обов'язковим
  int a = 0;  a++;
  return a; // оптимізація повернення
}

int i;
const int j = 1; // оптимізація розміщення


int main() {
  F();
  // j = F();  - заборонено
  i = F();//
  f();
  // j = f(); - заборонено
  i = f();
  const int z = f();
}



