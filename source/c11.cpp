#include <iostream>
using namespace std;

class Circle {
     double radius;

  public:
     Circle(double r) : radius(r) {}
     double area() {return radius*radius*3.14;}
};

class Cylinder {
      Circle base;
      double height;

   public:
      Cylinder(double r, double h) : base(r), height(h) {}
      double volume() {return base.area() * height;}
};

int main()

{
  double x1, x2;
  cin >> x1;
  cin >> x2;
  cout << endl;
  Cylinder cyl (x1, x2);

  cout << "Clynders volume is: " << cyl.volume() << endl;
  return 0;

}
