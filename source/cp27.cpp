#include <iostream>
using namespace std;

int operation (int a, int b)
{
   return (a*b);
}

 double operation (double a, double b)
{
   return (a*b);
}

int main() 

{

  int x=5, y=10;
  double m=4555.6, n=5444.56;

  cout << operation (x, y) << endl;
  cout << operation (m, n) << endl;
  return 0;

}

