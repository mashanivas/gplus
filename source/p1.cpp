// More pointers
#include <iostream>
using namespace std;

int x = 500;
int y = 600;
double m = 56.0;

int main()
{
   int firstvalue = 10, secondvalue = 30;
   int * p1, * p2;
   p1 = &firstvalue;
   p2 = &secondvalue;
   *p1 = 100;
   *p2 = 300;
   cout << firstvalue << "\n";
   cout << secondvalue << "\n";
   *p2 = *p1;
   *p1 = *p2;
   p1 = p2;
   p2 = p1;
   *p1 = 500;
   cout << secondvalue << "\n\n";
   cout << firstvalue << "\n\n";
   cout << "----------------------------------";
   cout << "\n\n";
   cout << "GLOBAL Variables are: " << "\n\n";
   cout << x << "\n" << y  << "\n" << m << "\n\n"; 

}
