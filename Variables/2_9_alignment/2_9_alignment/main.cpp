#include <memory>
#include <iostream>
using namespace std;


int main() {
  char i; void* pv = &i;
  size_t space = 10;
  size_t alg = alignof(int);


  cout << "Alignment of int: " << alg << endl;
  cout << "Is 'i' aligned: "
  << (size_t(&i) % alg == 0 ? "true" : "false");
  if (align(alg, sizeof(char), pv, space)) {
    char * p = reinterpret_cast< char *>(pv);
    cout << "\nMoved pointer "
    << (size_t(p) - size_t(&i))
    << " bytes" << " Space is " << space << endl;


    cout << "\nIs 'p' aligned: "
    << (size_t(p) % alg == 0 ? "true" : "false")
    << endl;
  }
  else
    cout << "\nCan't align 'i'" << endl;
}


