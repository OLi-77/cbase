#include <functional>
using namespace std;
using namespace std::placeholders;


int main() {
  auto f = [](int i, char c, double d) {
    return i + (int)c + (int)d;
  };
  auto b = bind(f, _1, 'a', 1.2);
  b(7);
  auto b2 = bind([](int) { return 1; }, _1);
  b2(7);
}


