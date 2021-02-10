#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()

{

  int x;
  string mystream;

  cout << "Enter the value of x: ";
  getline (cin, mystream);
  stringstream(mystream) >> x;

  if (x > 0)
     cout << "x is positive" << endl;
  else if (x == 0)
     cout << "x is zero" << endl;
  else
     cout << "x is negative" << endl;
  return 0;

}

  
