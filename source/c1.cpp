#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  int x1, x2;
  cout << "Enter sides for rectangle - side1" << "\n";
  cin >> x1;
  cout << "Enter sides for rectangle - side1" << "\n";
  cin >> x2;
  Rectangle rect;
  rect.set_values (x1,x2);
  cout <<"----------------------------------";
  cout << "THE AREA IS AS FOLLOWS:";
  cout <<"----------------------------------";
  cout <<"\n\n";
  cout << "AREA: " << rect.area();
  cout << "\n\n";
  return 0;
}
