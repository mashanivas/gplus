#include <iostream>
using namespace std;

template <class Y>

Y sum (Y a, Y b)

{
   Y  result;
   result = a + b;
   return result;

}

int main()

{

   int x, y, z;
   double m, n, o;
   cout << "Enter value for x integer: " << endl;
   cin >> x;
   cout << "Enter value for y integer: " << endl;
   cin >> y;
   cout << "Enter value for y double: " << endl;
   cin >> m;
   cout << "Enter value for n double: " << endl;
   cin >> n;
   z = sum<int> (x, y);
   o = sum<double> (m, n);
   cout << z << endl;
   cout << o << endl;
   return 0;

}
  
