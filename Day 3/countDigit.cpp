#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;

  // int digit = 0;
  // while (num > 0)
  // {
  //   num /= 10;
  //   digit++;
  // }
  // cout << digit;

  int digit = 1;
  int num = 10;
  for (int i = 1; i > 0; i++)
  {
    if (n / num == 0)
    {
      cout << digit;
      return 0;
    }
    num *= 10;
    digit++;
  }

  return 0;
}