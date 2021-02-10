#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area () {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  int x1, x2, x3, x4;
  Rectangle rect, rectb;
  cout << "Enter sides for rectangle1 - side1" << "\n";
  cin >> x1;
  cout << "Enter sides for rectangle1 - side2" << "\n";
  cin >> x2;
  cout << "Enter sides for rectangle2 - side1" << "\n";
  cin >> x3;
  cout << "Enter sides for rectangle2 - side2" << "\n";
  cin >> x4;
  rect.set_values (x1,x2);
  rectb.set_values (x3,x4);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}
