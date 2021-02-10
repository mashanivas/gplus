// Pointer Arithmetic
#include <iostream>
using namespace std;

int main()
{
   int numbers[5];
   int * p;
   p = numbers; *p = 10;
   p++; *p = 100;
   p = &numbers[2]; *p = 500;
   p = numbers + 3; *p =1000;
   p = numbers; *(p+4) = 5555;
   cout << "-----------------------------" << "\n\n";
   cout << " THE VALUE OF ARRAYS ARE: " << "\n\n";
   cout << "-----------------------------" << "\n\n";
   for (int n=0; n<5; n++)
     cout << numbers[n] << ",";
     cout << "\n\n\n";
//   return 0;
}
