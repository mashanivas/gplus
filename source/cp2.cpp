// Operating with variables
#include <iostream>
using namespace std;

int main()
{
   // Declaring variables
   long double  a(0), b{10};
   decltype(a) result;

   // Process
   cout << "Enter the value for a: " << endl;
   cin >> a;
   cin >> b;
   cout << "Enter the value for b: " << endl;
   // a = 5;
   // b = 10;
   a = a + 1;
   result = a - b;

   // Print out the result
   cout << "The result is: " << result << endl;


  // Terminate program
  return 0;
}
