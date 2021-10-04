const int ckg = 5;
int kg = 5;


int main() {
    int k = 5;
    const int * const cp0 = &k;
    // cp0 = &kg заборонені операції
    // *cp0 = 6;
     volatile const int * const volatile vp1 = &kg;
}
