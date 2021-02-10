#include <iostream>
using namespace std;

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

int main ()
{
  int z;
  int x1;
  int x2;
  cin >> x1;
  cin >> x2;
  z = addition (x1,x2);
  cout << "The result is " << z << "\n\n";
}
