#include <iostream>
using namespace std;

void print(int arr[], int index, int n)
{
  if (index == n)
    return;
    print(arr, index + 1, n);
  cout << arr[index] << " ";
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};

  print(arr, 0, 5);

  return 0;
}