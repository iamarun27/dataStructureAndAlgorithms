#include <iostream>
using namespace std;

void add(int a, int b, int c, int d)
{
  cout << a + b + c + d;
}

void add(int a, int b)
{
  cout << a + b;
}

int main()
{
  add(2, 3, 4, 6);
  cout << endl;
  add(2, 9);

  return 0;
}