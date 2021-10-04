#include <iostream>
void f(int) {}
struct A {};
struct B : A {};
int main(void) {
int i = 1;
// посилання на об'єкт i
int& ref1 = i;
// посилання на константу
const int& c_ref(i);
// посилання на volatile змінну
volatile int& v_ref(i);
// ще одне посилання на об'єкт i
int& ref2 = ref1;
// недопустиме посилання
//int& ref3 = c_ref;
// треба зняти const
int& ref3 =
   const_cast<int&>(c_ref);
// посилання на функцію
void (&f_ref)(int) = f;
// посилання на масив
int m[3];
int (&m_ref)[3] = m;
// посилання на динамічну змінну
int& ref4 = *new int;
// посилання на динамічний масив
int* p = new int[5];
int* (&ref5) = (p);
// посилання на частину об'єкта
B b;
A& base_ref = b;
}
