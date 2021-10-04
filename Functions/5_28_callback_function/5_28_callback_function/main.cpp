#include <iostream>
const unsigned sz = 7;
int callback_f(int *m, unsigned len, int(*comparator)(int, int)) {
  int r = m[0];
  for (unsigned i = 1; i < len; ++i) r = comparator(r, m[i]);
  return r;
}
int max(int i, int j) { return i < j ? j : i; }
int min(int i, int j) { return i > j ? j : i; }
int main() {
  int data[sz] = { 3, 2, 1, 0, -1, -2, -3 };
  std::cout << "Max is  " <<  callback_f (data, sz, max) << '\n';
  std::cout << "Min is  " <<  callback_f (data, sz, min) << '\n';
}
