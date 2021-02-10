#include <iostream>
using namespace std;

int main()

{
    int n, m;
    int * p;
    p = &n;
    *p = 45;
   cout << p << " " << n <<  endl;
   ++(*p) = 50;
   cout << p << " " << n << endl;
   *(p++) = 60;
   cout << p << " " << n << endl;
   *(++p);
   cout << p << " "  << m << endl;
//   (*p)++;
   cout << p << " " << n << endl;
   return 0;

}
