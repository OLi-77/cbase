typedef struct A  {
   int i,j;
   char c;
} a;

int main() {
    // a.i = 100;	// заборонена дія
    a a1;   a1.j = 5;
    return 0;
}
