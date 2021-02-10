// goto Loop example
#include <iostream>
using namespace std;

int main()

{

   int n=10;
mylabel:
   if (n != 1)
      cout << n << ",";
   else
      cout << n;
   n--;
   if (n > 0) goto mylabel;
   cout << endl;
   cout << "LIFT OFF!!" << endl;

}
