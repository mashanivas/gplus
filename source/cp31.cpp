// Inner block scopes
#include <iostream>
using namespace std;

int main()

{
  int x = 10;
  int y = 20;

  {
    int x; // inner block
    x = 50; // Sets value in inner block
    y =100; // Sets value to outer block
    cout << "Inner block" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
  }
  cout << "Outer block" << endl;
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
}
  



