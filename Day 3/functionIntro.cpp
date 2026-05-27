#include <iostream>
using namespace std;

void evenOdd(int n)
{
  if (n % 2 == 0)
    cout << "Even number";
  else
    cout << "Odd number";
}

void table(int n)
{
  for (int i = 1; i <= 10; i++)
  {
    cout << n * i << " ";
  }
}

void factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  cout << fact;
}

int main()
{
  int number;
  cout << "Enter the number : ";
  cin >> number;

  evenOdd(number);
  cout << endl;
  table(number);
  cout << endl;
  factorial(number);
  return 0;
}