#include <iostream>
using namespace std;

int main()
{
  int num1;
  int num2;

  cout << "Enter first number : ";
  cin >> num1;
  cout << "\nEnter second number : ";
  cin >> num2;

  int sum;
  sum = num1 + num2;

  cout << "Addition of " << num1 << " and " << num2 << " is " << sum;

  return 0;
}