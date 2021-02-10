#include <iostream>
using namespace std;

template <class T, int N>

T fixed_multiply (T val)

{

   return val * N;

}

void  prompt (int& a, int& b)

{
   cout << "Enter the first number" << endl;
   cin >> a;
   cout << "Enter the second number" << endl;
   cin >> b;
   cout << "The numbers entered are: " << endl;
   cout << "++++++++++THE OUTPUT OF FIRST FUNTION++++++++++++++++++++++++++++++++++" << endl;
   cout << a << endl;
   cout << b << endl;
   cout << "++++++++++++++++++++++++++++++++++++++++++++" << endl;
}

int main()

{
   int x, y;
   prompt(x, y);
   cout << "++++++++++THE OUTPUT OF SECOND FUNTION++++++++++++++++++++++++++++++++++" << endl;
   std::cout << fixed_multiply<int, 3>(10) << endl;
   std::cout << fixed_multiply<int, 3>(20) << endl;
   cout << "++++++++++++++++++++++++++++++++++++++++++++" << endl;
   return 0;

}
