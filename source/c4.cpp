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

 Rectangle rect;
 rect.set_values(12, 30);
 cout << "Area: " << rect.area();
 cout << "\n\n";
 return 0;

}  
