#include <iostream>
using namespace std;

class Circle {
      double radius;
    public:
      Circle(double r) {radius = r; }
      double circum() {return 2*radius*3.14159265;}
};

int main()
{
  Circle mar1 (43.56);
  Circle mar2 = 40.44;
  Circle mar3 {4443.56};
  Circle mar4 = {43.56};
 cout << "Mar1 circumference: " << mar1.circum() << endl;
 cout << "Mar2 circumference: " << mar2.circum() << endl;
 cout << "Mar3 circumference: " << mar3.circum() << endl;
 cout << "Mar4 circumference: " << mar4.circum() << endl;
 return 0;
}
