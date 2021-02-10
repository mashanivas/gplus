// Arrays example
#include <iostream>
using namespace std;

// Initialize array

int foo [] = {16, 2, 7, 41, 21566};
int n, result=0;

int main()
{

   for (n=0; n<5; ++n)
   {
      cout << foo[n] << endl ;
      result += foo[n];
   }
   cout << "The result of the total value of the array: " << result << endl;
   return 0;
}

