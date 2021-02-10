#include <iostream>
using namespace std;

class Rectangle {
   float height;
   float width;

   public:
      Rectangle ();
      Rectangle (float, float);
      float area (void) { return height * width ; }
};

Rectangle::Rectangle () {
        height = 500.34;
        width = 34.55;
}
Rectangle::Rectangle (float a, float b) {
        height = a;
        width = b;
}

int main()

{

 Rectangle rect (3099.555, 4000.8880);
 Rectangle rectb;
 cout << "Area1: " << rect.area() << endl;
 cout << "Areab: " << rectb.area() << endl;
 cout << endl;
 return 0;

}  
