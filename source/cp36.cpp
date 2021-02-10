#include <iostream>
using namespace std;

int x = 500;

int main()

{
  {
   int y;
   int x = 50;
   cout << x << endl;
   cout << y << endl;
  }
 cout << "The global variable is: " << x << endl; 
 return 0;
}
