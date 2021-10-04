#include <iostream>
#include <malloc.h>
using namespace std;
int main() {
    int* m = new ( std::nothrow ) int[10];
    if (!m) exit(0);
    delete [] m;
    m = (int*)malloc( 10*sizeof(int) );
    if (!m) exit(0);

    free(m);
    if ( (m = (int*)calloc ( 10, sizeof(int) ) )
          == NULL )
        exit(1);
    free (m);
    volatile char *m1 = new volatile char[20];
    if (!m1) exit(0);
    delete m1;
    return 0;
}
