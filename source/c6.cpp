#include <iostream>
using namespace std;

class Rectangle {
   float height;
   float width;

   public:
      Rectangle (float, float);
      float area () { return height * width ; }
};

Rectangle::Rectangle (float a, float b) {
        height = a;
        width = b;
}

int main()

{

 Rectangle rect (3099.555, 4000.8880);
 Rectangle rectb (3099.765, 4087666.345);
 cout << "Area1: " << rect.area() << endl;
 cout << "Areab: " << rectb.area() << endl;
 cout << endl;
 return 0;

}  
