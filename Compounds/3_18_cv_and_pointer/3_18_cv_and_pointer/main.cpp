#include <iostream>
using namespace std;
const int ckg = 5;
int kg = 5;
int main() {
    int k = 5;
    const int *cp0 = &k;
    // *cp0 = 4 заборонена операція
    const int *cp1 = &kg;
    const int *cp2 = &ckg;
    int const *cp3 = &k;
    std::cout << *cp0;
    k = 6;
    std::cout << *cp0;
    volatile int *vp1 = &k;
    int volatile *vp2 = &k;
    const volatile int *cvp1 = &k;
}
