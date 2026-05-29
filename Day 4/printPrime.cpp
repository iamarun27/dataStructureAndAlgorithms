#include <iostream>
using namespace std;

void Prime(int num)
{
  if (num < 2)
  {

    return;
  }

  for (int i = 2; i < num - 1; i++)
  {
    if (num % i == 0)
    {

      return;
    }
  }
  cout << num << " ";
  return;
}

int main()
{
  int arr[5] = {2, 3, 5, 7, 9};
  for (int i = 0; i < 5; i++)
  {
    Prime(arr[i]);
  }

  return 0;
}