#include <iostream>
#include <fstream>
using namespace std;

int main()

{

   ofstream myfile ("example.txt");
   if (myfile.is_open())
   {
     myfile << "This is the first line.\n";
     myfile << "This is the second line.\n";
     myfile.close();
   } 
   else cout << "Unable to open file";
   return 0;

}
