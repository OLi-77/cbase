#include <functional>
#include <iostream>
using namespace std;
using namespace std::placeholders;
double f(int i, char c, double d) {
  return i + c + d;
}


namespace std {
 template<>
  struct is_bind_expression<
          double (*) (int,char,double)> :
          public true_type
         {};
       }


int main() {
        auto bn = bind(f,  _1, 'a', 1.2);
         std::cout <<
          is_bind_expression<decltype(bn)>::
            value;
}
