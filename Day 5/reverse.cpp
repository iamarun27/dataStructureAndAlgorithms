#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {5, 4, 3, 2, 1};

  for (int i = 0; i < 5; i++)
  {
    for (int j = 4 - i; j >= 0; j--)
    {
      cout << arr[j] << " ";
    }
    cout << endl;
  }
  return 0;
}