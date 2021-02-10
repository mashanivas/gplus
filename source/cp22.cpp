#include <iostream>
using namespace std;

void duplicate (int& a, int& b, int& c)
{

    a *= 2;
    b *= 3;
    c *= 7;

}

int main()

{

   int x=3, y=5, z=10;
   cout << "===================================================" << endl;
   cout << "Value of x, y, and z before duplication is as here: " << endl;
   cout << "---------------------------------------------------" << endl;
   cout << "x = " << x << ";  y = " << y << ";  z = " << z << endl;
   cout << "===================================================" << endl;
   duplicate (x, y, z);
//   cout << "===================================================" << endl;
   cout << "Value of x, y, and z after duplication is as here: " << endl;
   cout << "---------------------------------------------------" << endl;
   cout << "x = " << x << ";  y = " << y << ";  z = " << z << endl;
   cout << "===================================================" << endl;
   return 0;
}
