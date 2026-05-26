#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter the number : ";
  cin >> number;

  if (number % 3 == 0 && number % 5 == 0)
  {
    cout << "Perfect";
  }
  else
  {
    cout << "Not perfect";
  }
  return 0;
}