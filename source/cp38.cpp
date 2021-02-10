#include <iostream>
using namespace std;

#define HEIGHT 3
#define WIDTH  5
int jimmy [HEIGHT][WIDTH];
int n, m;

int main()

{
   for (n=0; n<3; ++n)
     for (m=0; m<0; ++m)
     {
       jimmy [n][m] = (n+1)*(m+1);
     }
}

