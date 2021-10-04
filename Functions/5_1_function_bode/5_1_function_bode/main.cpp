//static const char __func__[] = "function-name";


#include "iostream"


int out(int i) {
  if (i == 1)    return 0;
  else {
    std::cout << __func__ << ' ';    return out(i - 1);
  }
}


int main() { out(1000); }
