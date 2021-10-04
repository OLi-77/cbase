void f(const int);


void f(int a) {
   // a++; - контроль коду
}


int i;
const int j = 1; 	// оптимізація розміщення


int main() {
  f(i); 			// оптимізація передавання значення
  f(j);
  return 0;
}

