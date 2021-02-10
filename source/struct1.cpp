#include <iostream>
using namespace std;

struct product {
       int weight;
       int price;
} apples, banana, melon;

product pears;
product strawberry, orange;

int main()

{
   apples.weight = 35;
   apples.price = 1;
   banana.weight = 12;
   banana.price = 2;
   orange.weight = 1;
   orange.price = 4;

   cout << apples.weight << endl;
   cout << orange.weight << endl;
   return 0;
}
