#include <iostream>
using namespace std;

void duplicate (int& a, int& b, int& c, int& d)
{
   a *= 2;
   b *= 3;
   c *= 4;
   d *= 5;

}

int main()

{

   int x=20, y=30, z=40, v=500;
   cout << "+++++++++++++++++++BEFORE++++++++++++++++++++++++++++++++++++++++++++++" << endl;
   cout << "The vaule of x y z and v are: " << endl;
   cout << x << endl;
   cout << y << endl;
   cout << z << endl;
   cout << v << endl;
   cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
   duplicate(x, y, z, v);
   cout << "+++++++++++++++++++AFTER+++++++++++++++++++++++++++++++++++++++++++++++" << endl;
   cout << "The vaule of x are: " << endl;
   cout << x << endl;
   cout << y << endl;
   cout << z << endl;
   cout << v << endl;
   cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
   return 0;

}
