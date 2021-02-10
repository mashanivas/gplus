#include <iostream>
#include <string>
using namespace std;

int main()

{

   string str {"My string"};
 
   for (char c: str)
   {
     cout << "[" << c << "]";
   }
   cout << ".\n";

}
