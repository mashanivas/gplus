#include <iostream>
using namespace std;

int main()

{
   int n;

   do {
   cout << "Enter a number: " << endl;
   cin >> n;
      } while ((n == 0) || (n < 0));

   for (n > 0; n--;) {
        cout << n << endl;
   }
  
   cout << "Lift Off!" << endl;

}
