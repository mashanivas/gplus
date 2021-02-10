#include <iostream>
#include <string>
using namespace std;

int main()

{

  string mystr;

  do  {
      cout << "Enter a string: " << endl;
      getline (cin, mystr);
      cout << "You entered: " << mystr << endl;
      } while (mystr != "goodbye");

}
