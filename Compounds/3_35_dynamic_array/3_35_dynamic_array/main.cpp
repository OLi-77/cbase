#include <iostream>
const unsigned int row = 2;
const unsigned int col = 3;
int main(void) {
    int **m;     				// оголошення вказівника
    m = new int * [row]; 		// створення матриці
    std::cout << "m: Address - 0x" << &m << " Value - 0x" << m
        << "\n Size:" << sizeof(m) << " Pointed memory size:" << row*sizeof(int*) <<'\n' ;
    for (unsigned i = 0; i < row; i++)  {
        m[i] = new int [col];        //        new int [col];         розрив у пам'яті
        std::cout << "m[" << i <<"]: Address - 0x" << &m[i]  << " Value - 0x" << m[i] << "\n Size:" <<
           sizeof( m[i] ) << " Pointed memory size:" << col*sizeof(int) << '\n';
        for (unsigned j = 0; j < col; j++) {
            m[i][j] = i + j;     	// ініціалізація масиву елементів
            std::cout << "m[" << i <<"][" << j <<"]: Address - 0x" <<  &m[i][j] << " Value - " <<
               m[i][j] << " Size:" << sizeof( m[i][j] ) << '\n';
        }
    }
}
