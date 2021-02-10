#include <iostream>
using namespace std;

int main ()
{
  int firstvalue, secondvalue;
  int thirdvalue, fourthvalue;
  int * mypointer;

  mypointer = &firstvalue;
  *mypointer = 10;
  mypointer = &secondvalue;
  *mypointer = 20;
  mypointer = &thirdvalue;
  *mypointer = 1001;
  mypointer = &fourthvalue;
  *mypointer = 4001;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  cout << "thirdvalue is " << thirdvalue << '\n';
  cout << "fourthvalue is " << fourthvalue << '\n';
  return 0;
}
