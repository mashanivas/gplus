
#include <iostream>
using namespace std;

class Dummy {
  public:
    static int n;
    Dummy () { n++; };
};

int Dummy::n=0;

int main () {
  Dummy a;
  Dummy b[33];
  cout << a.n << '\n';
  Dummy * c = new Dummy;
  cout << Dummy::n << '\n';
  Dummy * e = new Dummy;
  cout << Dummy::n << '\n';
  Dummy * f = new Dummy;
  cout << Dummy::n << '\n';
  delete c;
  delete e;
  delete f;
  return 0;
}
