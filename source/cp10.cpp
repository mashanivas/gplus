#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()

{

   string mystring;
   float price = 0;
   int quantity = 0;

   cout << "Price: ";
   getline (cin, mystring);
   stringstream(mystring) >> price;
   cout << "Quantity: ";
   getline (cin,mystring );
   stringstream(mystring) >> quantity;
   cout << "Total price is: " << price * quantity << endl;
   return 0;

}
