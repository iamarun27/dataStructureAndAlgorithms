#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;

  int sum = 0;
  while (num)
  {
    int digit = num % 10;
    sum = sum * 10 + digit;
    num /= 10;
  }
  cout << sum;

  return 0;  
}