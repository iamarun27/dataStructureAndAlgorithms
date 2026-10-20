#include <iostream>
using namespace std;

void print(int n)
{
  // base case
  if (n == 0)
  {
    cout << "Happy birthDay";
    return;
  }
  cout << n << " days left for bday";
  cout << endl;
  print(n - 1);
}

int main()
{
  // iterative approach

  // for (int i = 5; i > 0; i--)
  // {
  //   cout << i << " days left for bday.";
  //   cout << endl;
  // }
  // cout << "Happy birth day";

  print(5);

  return 0;
}