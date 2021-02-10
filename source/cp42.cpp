#include <iostream>
#include <string>
using namespace std;


int main()

{

   string question1 = "What is your name? ";
   string question2 = "Where do you live? ";
   string answer1;
   string answer2;
   cout << question1;
   getline (cin, answer1); 
   cout << question2;
   getline (cin, answer2); 
   cout << "Hello, " << answer1 ;
   cout << " from,  " << answer2 << endl;
   return 0;

}
