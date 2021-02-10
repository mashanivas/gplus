#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <class T, class U>

bool are_equal (T a, U b)

{
   return (a==b);

}

int main()

{
   //double x, y;
   //cout << "Enter value for x and y" << endl;
   //cin >> x;
   //cin >> y;
   string mystring1;
   string mystring2;
   cout << "Enter a value for x" << endl;
   getline (cin, mystring1);
   cout << "Enter a value for y" << endl;
   getline (cin, mystring2);
   if (are_equal(mystring1,mystring2))
      cout << "x and y are equal" << endl;
   else
      cout << "x and y are not equal" << endl;
   return 0;

}
