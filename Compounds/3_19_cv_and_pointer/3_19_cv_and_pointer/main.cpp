#include <iostream>
using namespace std;
const int i = 1; // глобальні константи
const int * const pi = &i;
int main() {
 const int j = 2; // локальні констатнти
 const int * const pj = &j;
 cout << "1\n\tj - " << j <<
   "\t*pj - " << *pj << endl <<
   "\ti - " << i << "\t*pi - " <<
    *pi << endl;
 *(int*)&j = 22;
 // *(int*)&i = 11; - run-time помилка
 cout << "2\n\tj - " << j <<
   "\t*pj - " << *pj << endl <<
   "\ti - " << i << "\t*pi - " <<
    *pi << endl;
 *(int*)pj = 222;
 // *(int*)pi = 111; - run-time помилка
 cout << "3\n\tj - " << j <<
   "\t*pj - " << *pj << endl <<
   "\ti - " << i << "\t*pi - " <<
    *pi << endl;
}
