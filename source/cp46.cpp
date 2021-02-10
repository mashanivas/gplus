// Pointer as arguments
#include <iostream>
using namespace std;

void increment_all (int * start, int * stop)

{

   int * current;
   current = start;
   while (current != stop) {
         ++(*current); // Increment value pointed
         ++current;    // Increment pointer
   }
}

void print_all (const int * start, const int * stop)

{ 
    const int * current = start;
    while (current != stop) {
        cout << *current << endl;
        ++current; // Increment pointer
    }
}

int main()

{

   int numbers []  {10, 20, 30};
   cout << numbers << endl;
   cout << numbers+3 << endl;
   increment_all (numbers, numbers+3);
   print_all (numbers, numbers+3);
   for (int n=0; n<3; n++)
     cout << numbers[n] << endl;
   return 0;

}

