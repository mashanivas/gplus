#include <iostream>
using namespace std;

int addition (int A, int B)
{ return (A + B); }

int substraction (int A, int B)
{ return (A - B); }

int operation (int x, int y, int (*functocall)(int, int))
{
   int G;
   G = (*functocall)(x, y);
   return (G);

}

int main()
{
  int M, N;
  int (*minus) (int, int) = substraction;

  M = operation(7, 5, addition);
  N = operation(20, M, minus);
  cout << "\n\n";
  cout << N;
  cout << "\n\n";
  return (0);
}


