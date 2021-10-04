#include <iostream>
const unsigned row = 2;
const unsigned col = 3;
int& at( int* m, unsigned i, unsigned j ) {    return m[ i*col + j ];  }
int main() {
    int* m = new int[col * row];
    for (unsigned i = 0; i < row; i++)
        for (unsigned j = 0; j < col; j++)
            at(m, i, j) = i * col + j;   // ініціалізація елементів
     return 0;
}
