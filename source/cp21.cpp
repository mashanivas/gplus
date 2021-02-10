//Function example
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int addition (int a, int b)
{
    int r;
    r = a + b;
    return r;

}

int  prompt ()
{
   string mystring;
   int x;
   cout << "Enter the first number: ";
   getline (cin, mystring);
   stringstream(mystring) >> x;
   return x;
}

int main()

{
   int z;
   int m,n;
   m = prompt();
   n = prompt();
   z = addition(m, n);
   cout << " The result is: " << z << endl;

}
