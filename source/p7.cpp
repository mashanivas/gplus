#include <iostream>
using namespace std;

int addition (int a, int b)
{ return (a + b); }

int substraction (int a, int b)
{ return (a - b); }

int operation (int x, int y, int (*fun)(int, int))
{
   int g;
   g = (*fun)(x, y);
   return (g);

}

int main()
{
  int m, n;
  int (*minus) (int, int) = substraction;

  m = operation(7, 5, addition);
  n = operation(20, m, minus);
  cout << "\n\n";
  cout << n;
  cout << "\n\n";
  return (0);
}


