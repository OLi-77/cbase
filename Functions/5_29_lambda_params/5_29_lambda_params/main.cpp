
int main() {
  int x, y;
  auto i = [&x, y](int k) {
    x = 10;  k = 20;
    return x + y + k;
  }(x);

  //до С++14 включно можна використовувати auto у списку параметрів
  //auto l = [](auto first, auto second) { return first + second; };
  int (*l)(int, int ) = [](int first, int second) { return first + second; };
  auto f = [](int first, int second) { return first + second; };
  i = l(1, 2);
  i = f(1, 2);
}
