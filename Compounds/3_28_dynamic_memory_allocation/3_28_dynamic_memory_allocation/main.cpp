#include <memory>
#include <iostream>
int *i, *j;
int main() {
    i = new int[0];		// повертається ненульовий вказівник
    j = (int*) malloc(1); 	// в c+98 повертається нульовий вказівник
                    // в c++11 повертається ненульовий вказівник
    std::cout << (long)i << ' '<< (long)j;
}
