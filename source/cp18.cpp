#include <iostream>
using namespace std;

int main()

{

   for (int n=10; n>0; --n)
   {
     if (n == 5) 
     
     {
        cout << "Skipped...." << n << " as it is programmed to skip" << endl;
        continue;
     }

      cout << n << endl;

   }
}
