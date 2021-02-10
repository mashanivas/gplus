#include <iostream>
using namespace std;

int operate (int a, int b)
{
  return (a*b);
}

double operate (double a, double b)
{
  return (a/b);
}

int main ()
{
  int x,y;
  double n,m;
  cin >> x;
  cin >> y;
  cin >> n;
  cin >> m;
  cout << operate (x,y) << '\n';
  cout << operate (n,m) << '\n';
  return 0;
}
