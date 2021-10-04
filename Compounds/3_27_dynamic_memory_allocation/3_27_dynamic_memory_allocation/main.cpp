#include <iostream>
using namespace std;
struct STRC {
  STRC(){ cout << "Created " << endl; }
  ~STRC(){ cout << "Killed " << endl; }
};
int main(void) {
  // The form #1 of new & delete
  try {
      STRC* p1 = new STRC;
      cout << "#1 form. STRC - " << p1 << endl;
      delete p1;
  }
  catch(std::bad_alloc)
   {cout << "Mem operation is failed " << endl; }
    // The form #3 of new & delete
    STRC* p2 = new( nothrow ) STRC;
    if (p2) {
      cout << "#3 form. STRC - " << p2 << endl;
      delete p2;
    }


    // The form #5 of new & delete
    char x[sizeof( STRC )];
    STRC* p3 = new( &x[0] ) STRC;
    cout << "#5 form. STRC - " << p3 << endl;
    cout << "The address of x[0] is : " <<
        ( void* )&x[0] << endl;
    p3->~STRC();
    // The form #2 of new[] & delete[]
      try {
        STRC* p4 = new STRC[2];
        cout <<"#2 form. STRC massive - "<<p4<< endl;
        delete[ ] p4;
      }
      catch(std::bad_alloc)
       {cout << "Mem operation is failed " << endl; }


      // The form #4 of new[] & delete[]
      STRC* p6 = new( nothrow ) STRC[2];
      if (p3) {
        cout <<"#4 form. STRC massive - "<<p6<< endl;
          delete[ ] p6;
      }
      // The form #6 of new[] & delete []
      char xm[ 2 * sizeof( STRC ) ];
      //char xm[sizeof( STRC )];
      STRC* p5 = new( &xm[0] ) STRC[2];
      cout << "#6 form. Massive - " << p5 << endl;
      cout << "The address of xm[0] is : " <<
        ( void* )&xm[0] << endl;
      p5[1].~STRC();
      p5[0].~STRC();
    }



