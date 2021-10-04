#include <iostream>
#include <type_traits>


using namespace std;
class A {};


int main() {

    cout <<  boolalpha;
    cout << __LINE__ << ": " << is_fundamental<A>::value << '\n';
    cout << __LINE__ << ": " << is_fundamental<int>::value << '\n';
    cout << __LINE__ << ": " << is_fundamental<int&>::value << '\n';
    cout << __LINE__ << ": " << is_fundamental<int*>::value << '\n';
    cout << __LINE__ << ": " << is_fundamental<float>::value << '\n';
    cout << __LINE__ << ": " << is_fundamental<float&>::value << '\n';
    cout << __LINE__ << ": " << is_fundamental<float*>::value << '\n';
    return 0;
   }
