#include <iostream>
using namespace std;

int divide (int a, int b=2)
{
  int r;
  r=a/b;
  return (r);
}

int main ()
{
  int x1;
  int x2;
  cin >> x1;
  cout << "\n";
  cin >> x2;
  cout << "\n";
  cout << divide (x1) << '\n';
  cout << divide (x1,x2) << '\n';
  return 0;
}
