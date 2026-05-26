#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter the number : ";
  cin >> number;

  if (number < 2)
  {
    cout << "Not prime";
    return 0;
  }

  for (int i = 2; i < number; i++)
  {
    if (number % 2 == 0)
    {
      cout << "Not prime";
      return 0;
    }
  }
  cout << "Prime number";

  return 0;
}