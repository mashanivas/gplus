#include <iostream>
using namespace std;


int main()

{
    int firstvalue, secondvalue;
    int * mypointer1, * mypointer2;

    mypointer1 = &firstvalue;
   *mypointer1 = 10;
    mypointer2 = &secondvalue;
   *mypointer2 = 20;
    cout << "The first value is " << firstvalue << endl;
    cout << "The second value is " << secondvalue << endl;
    *mypointer1 = *mypointer2;
    cout << "The vaule of the first value now is: " << secondvalue << endl;
    return 0;

}
