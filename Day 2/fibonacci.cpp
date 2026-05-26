#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;

  int first_number = 0;
  int second_number = 1;
  int current_number;

  if (n == 1)
  {
    cout << 0;
    return 0;
  }
  if (n == 2)
  {
    cout << 1;
    return 0;
  }

  for (int i = 3; i <= n; i++)
  {
    current_number = first_number + second_number;
    first_number = second_number;
    second_number = current_number;
  }
  cout << current_number;

  return 0;
}