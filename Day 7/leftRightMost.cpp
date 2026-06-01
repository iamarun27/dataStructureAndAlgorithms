#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 2, 2, 3};
  int target;
  cout << "Enter the target : ";
  cin >> target;

  int start = 0, end = 5 - 1, mid;
  int leftIndex = -1, rightIndex = -1;
  // leftmost index
  while (start <= end)
  {
    mid = (start + end) / 2;

    if (arr[mid] == target)
    {
      leftIndex = mid;
      end = mid - 1;
    }

    else if (arr[mid] > target)
      end = mid - 1;
    else
      start = mid + 1;
  }

  //  rightmost

  start = 0, end = 5 - 1;

  while (start <= end)
  {
    mid = (start + end) / 2;
    if (arr[mid] == target)
    {
      rightIndex = mid;
      start = mid + 1;
    }
    else if (arr[mid] > target)
      end = mid - 1;
    else
      start = mid + 1;
  }

  cout << leftIndex << "   " << rightIndex;

  return 0;
}