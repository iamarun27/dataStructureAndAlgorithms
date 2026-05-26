#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "Enter the year to check : ";
  cin >> year;

  if (year % 400 == 0)
  {
    cout << "Leap year";
  }
  else if (year % 4 == 0 && year % 100 != 0)
  {
    cout << "Leap year";
  }
  else
  {
    cout << "Not leap year";
  }

  return 0;
}