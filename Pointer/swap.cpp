#include <iostream>
using namespace std;

void swapping(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

  // cout<<a<<" "<<b<<endl;
}

int main()
{
  int first = 10;
  int second = 20;
  swapping(&first, &second);
  cout << first << " " << second;

  return 0;
}