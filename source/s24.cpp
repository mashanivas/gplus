#include <iostream>
using namespace std;

template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}

int main ()
{
float a;
float b;
cin >> a;
cin >> b;
  if (are_equal(a,b))
    cout << "a and b are equal\n";
  else
    cout << "a and b are not equal\n";
  return 0;
}
