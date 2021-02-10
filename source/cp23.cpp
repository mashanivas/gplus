//Default values in functions
#include <iostream>
using namespace std;

int divide (int a, int b=2)

{
   int r;
   r = a/b;
   return r;

}

int main()
{
    cout << "Dividing function has one value: 12" << endl;
    cout << divide(12) << endl;
    cout << "Dividing function has two values: 20 and 4" << endl;
    cout << divide(20,4 ) << endl;
    return 0;
}
