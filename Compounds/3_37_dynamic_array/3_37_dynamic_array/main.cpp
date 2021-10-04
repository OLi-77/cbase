#include <iostream>
#include <iostream>
const unsigned row = 10;
const unsigned col = 10;
int main(void) {
    float p[row][col]; 	//оголошення матриці
    float * p1[row]; 	//оголошення масиву вказівників
    float ** p2 = p1; 	//оголошення подвійного вказівника
    unsigned i, j; 	//оголошенні лічильників циклів
    // ініціалізація масиву елементів
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++)
            p[i][j] = float(i + j); // матриці
        p1[i] = &p[i][0]; 		// вказівників
    }
    // обчислення суми елементів масиву
    float Sum = 0,Sum1 = 0,Sum2 = 0;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++) {
            Sum += p[i][j];
            Sum1 += *( *(p1 + i) + j);
            Sum2 += *( *(p2 + i) + j);
        }
std::cout << "Сума елементів порахована через:"<<"\n"
     << " - ідентифікатор масиву: " << Sum << "\n"
     << " - подвійний вказівник: " << Sum2 << "\n"
     << " - масив вказівників: " << Sum1 << "\n";
}



