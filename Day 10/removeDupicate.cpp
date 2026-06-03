#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 2, 3, 4};
  int note = 0;
  int index = 0;

  for (int i = 0; i < 5; i++)
  {
    if (note != arr[i])
    {
      arr[index] = arr[i];
      note = arr[i];
      index++;
    }
  }
  cout << index;

  // for (int i = 0; i < 5; i++)
  // {
  //   cout << arr[i] << " ";
  // }

  return 0;
}