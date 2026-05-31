#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int output_array[5];

  for (int i = 0; i < 5; i++)
  {
    output_array[i] = arr[i] * 5;
  }

  for (int i = 0; i < 5; i++)
  {
    cout << output_array[i] << " ";
  }
  return 0;
}