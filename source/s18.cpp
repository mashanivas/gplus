#include <iostream>
using namespace std;

void duplicate (int& a, int& b, int& c)
{
  a*=2;
  b*=2;
  c*=2;
}

int main ()
{
  int x, y, z;
  cin >> x;
  cin >> y;
  cin >> z;
  duplicate (x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z << "\n\n";
  return 0;
}
