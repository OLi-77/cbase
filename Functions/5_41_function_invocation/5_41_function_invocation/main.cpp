#include <type_traits>

#include <iostream>
using namespace std;

auto f(char) -> int(*)() {  return nullptr; }

int main() {
    cout << is_invocable<int()>::value << is_invocable_r<int, int()>::value <<
   is_invocable_r<void, void(int), int>::value <<
   is_invocable_r<int(*)(), decltype(f), char>::value;
}



