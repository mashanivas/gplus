#include <iostream>
using namespace std;

class Rectangle {
      double height;
      double width;

   public:
      Rectangle(double h, double w) : height(h), width(w) {}
      double area(void) {return height * width; }

};

int main() 

{

   Rectangle obj (3, 4);
   Rectangle * foo, * baz, * caz;
   foo = &obj;
   baz = new Rectangle (23, 34.0);
   caz = new Rectangle[2] { {34333.4444, 5455.43215}, {21123.555, 44777.445324} };
   cout << "Obj's area: " << obj.area() << endl;
   cout << "Foo's area: " << foo->area() << endl;
   cout << "baz's area: " << baz->area() << endl;
   cout << "Caz[0]'s area: " << caz[0].area() << endl;
   cout << "Caz[1]'s area: " << caz[1].area() << endl;
   delete baz;
   delete [] caz;
   return 0;

}

