#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
  {
    for (int j = 4; j >= 0; j--)
    {
      cout << arr[j] << " ";
    }
    cout << endl;
  }
  return 0;
}