#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 5, 4, 3};

  int start = 0;
  int end = 5 - 1;

  while (start <= end)
  {
    int mid = (start + end) / 2;

    if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
    {
      cout << mid;
      return 0;
    }

    else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
    {
      start = mid + 1;
    }
    else
      end = mid - 1;
  }

  cout << -1;

  return 0;
}