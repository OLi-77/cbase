#include <iostream>
#include <malloc.h>
int main() {
    long* m = (long*)malloc(10*sizeof(long));    std::cout << _msize(m) / sizeof(m[0])<< '\n';
    m =  (long*)realloc(m, 14*sizeof(m[0]) );    std::cout << _msize(m) / sizeof(m[0])<< '\n';
    free (m);
    if ( ( m = new(std::nothrow) long[3]) != NULL ) {
        std::cout << _msize(m) / sizeof(m[0])<< '\n';
        m = (long*)realloc(m, sizeof(m[0]) );      std::cout << _msize(m) / sizeof(m[0])<< '\n';
    delete [] m;
}
