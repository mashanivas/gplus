#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()

{

   string mystring;
   int n;
   cout << "Enter a number: ";
   getline (cin, mystring);
   stringstream(mystring) >> n;
   
switch (n) {
           case 1:
           case 2:
           case 3:
           case 4:
           case 5:
           case 6:
           case 7:
           case 8:
           case 9:
                cout << "The number entered is between 1 and 10 " << endl;
                break;
          default:
                cout << "The number entered is not between 1 & 10" << endl;
        }
}
