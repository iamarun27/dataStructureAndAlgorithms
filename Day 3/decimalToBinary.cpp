#include <iostream>
using namespace std;

int main()
{
  int number;

  cout << "Enter decimal number : ";
  cin >> number;

  int sum = 0;
  int mul = 1;
  while (number)
  {
    int digit = number % 2;
    sum = sum + digit * mul;
    number /= 2;
    mul *= 10;
  }
  cout << sum;

  return 0;
}