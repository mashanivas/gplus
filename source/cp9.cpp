#include <iostream>
#include <string>
using namespace std;


int main()

{

   string mystring;
   cout << "What is your name: ";
   getline (cin, mystring);
   cout << "Hello  " << mystring << ".\n";
   cout << "What is your favorite team : ";
   getline (cin, mystring);
   cout << "Your favorite team is : " << mystring << ".\n";
   cout << "I like " << mystring << " too!" << ".\n";
   return 0;

}
