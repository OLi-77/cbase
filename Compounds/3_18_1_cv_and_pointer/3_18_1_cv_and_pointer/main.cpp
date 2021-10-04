const int ckg = 5;
int kg = 5;
int main() {
    int k = 5;
    int * const cp0 = &k;
    // cp0 = &kg заборонена операція
    *cp0 = 6;
    // volatile int * const vp1 = &ckg; - fail
    volatile int * const vp1 = &kg;
    // int  * const volatile vp2 = &ckg; - fail
    int  * const volatile vp2 = &kg;
}
