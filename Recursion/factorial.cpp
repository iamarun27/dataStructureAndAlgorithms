#include <iostream>
using namespace std;

int factorial(int n)
{

  // base case
  if (n == 1 ||  n==0)
    return 1;
  return n * factorial(n - 1);
}

int main()
{
  int number;
  cout << "Enter the number :";
  cin >> number;

  // int fact = 1;

  // for (int i = 1; i <= number; i++)
  // {
  //   fact = fact * i;
  // }

  // cout << fact;

  cout << factorial(number);
  return 0;
}