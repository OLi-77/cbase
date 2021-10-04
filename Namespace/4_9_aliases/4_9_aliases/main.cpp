#include <iostream>
namespace Aaa {
  int i;
}


namespace A = Aaa;


namespace B {
  using Aaa::i;
}


int main() {
  std::cin >> Aaa::i;
  std::cout << B::i << A::i;
}
