#include <iostream>
using namespace std;

class Rectangle {
   int height;
   int width;

   public:
      void set_values (int, int);
      int area () { return height * width ; }
};

void Rectangle::set_values (int x, int y) {
        height = x;
        width = y;
}

int main()

{

 Rectangle rect, rectb;
 rect.set_values(12, 30);
 rectb.set_values(24, 60);
 cout << "Area1: " << rect.area() << endl;
 cout << "Areab: " << rectb.area() << endl;
 cout << endl;
 return 0;

}  
