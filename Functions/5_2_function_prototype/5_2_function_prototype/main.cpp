int f(char);// короткий прототип - оголошення функції
// int f(char a); повний прототип




int g(char) { // протип не обов'язковий
    return 1;
}
int main() {
  int i = f('c');
  g('c');
}




int f(char a) { // реалізація функція
  a++; return a;
}
