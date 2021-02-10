#include <iostream>
using namespace std;

int foo [] = {34, 2000, 790007, 44440, 99912071};
int n, result=0;

int main ()
{
  for ( n=0 ; n<5 ; ++n )
  {
    result += foo[n];
  }
  cout << result << "\n";
  return 0;
}
