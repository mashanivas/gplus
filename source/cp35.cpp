#include <iostream>
using namespace std;

namespace first

{
   int x = 10;

}

namespace second

{
 
   double x = 3.1415;

}

int main()

{

   {
     using namespace first;
     cout << x << endl;
   }

   {
     using namespace second;
     cout << x << endl;
   }
   return 0;
}
