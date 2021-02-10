#include <iostream>
using namespace std;

double factorial (double a)
{
  if (a > 1)
     return (a * factorial (a - 1));
  else
    return 1;
}

int main()

{

  double x = 0;
 do {
  cout << "Enter a number for factorial: ";
  cin >> x;
  cout << x << "! = " << factorial(x) << endl;
    } while (x != 0);
  return 0;

}
   
