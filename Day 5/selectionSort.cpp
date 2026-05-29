#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {5, 4, 3, 2, 8};
  for (int i = 0; i < 5 - 1; i++)
  {
    int index = i; // min value
    for (int j = i; j <= 5 - 1; j++)
    {
      if (arr[index] > arr[j])
        index = j;
    }

    // swap
    int temp = arr[index];
    arr[index] = arr[i];
    arr[i] = temp;
  }

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}