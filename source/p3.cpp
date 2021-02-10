#include <iostream>
using namespace std;

void increment_all (int* start, int* stop)
{
  int * current = start;
  while (current != stop) {
    ++(*current);  // increment value pointed
    ++current;     // increment pointer
  }
}

void print_all (const int* start, const int* stop)
{
  const int * current = start;
  while (current != stop) {
    cout << *current << '\n';
    ++current;     // increment pointer
  }
}

int main ()
{
  int x1, x2, x3;
  cin >> x1;
  cin >> x2;
  cin >> x3;
  int numbers[] = {x1,x2,x3};
  increment_all (numbers,numbers+3);
  print_all (numbers,numbers+3);
  return 0;
}
