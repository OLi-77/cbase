#include <functional>
using namespace std;
using namespace std::placeholders;
double f(int i, char c, double d) {
  return i + c + d;
}


int main() {
  auto bn = bind(f,  _1, 'a', 1.2);	// зв'язування з об'єктом bn
  double d = bn(7);				// виклик f(7,'c',1.2)
}
