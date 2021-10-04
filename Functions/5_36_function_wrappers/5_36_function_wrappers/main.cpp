#include <functional>
#include <iostream>
using namespace std;


function<int()> f() {
  int x = 0;
  return [=]() mutable { return ++x; };
}

int main() {
  auto fun = f();
  for (int i = 0; i < 5; ++i) {
    cout << fun() << endl;
  }
}
