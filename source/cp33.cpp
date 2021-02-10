#include <iostream>
using namespace std;

namespace first
{
   int x = 10;
   int y = 20;

}

namespace second

{

  double x = 34.222;
  double y = 43.222;

}

int main()

{

   using first::x;
   using second::y;
   cout << "x is: " << x << endl;
   cout << "y is: " << y << endl;
   cout << first::y << endl;
   cout << second::x << endl;
   return 0;

}
