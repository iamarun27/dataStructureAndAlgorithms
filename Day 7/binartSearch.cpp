#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {33, 55, 66, 77, 99};
  int start = 0;
  int end = 5 - 1;
  int mid;
  int target;
  cout << "\nEnter the target : ";
  cin >> target;

  while (start <= end)
  {
    mid = (start + end) / 2;
    if (arr[mid] == target)
    {
      cout << mid;
      return 0;
    }

    else if (arr[mid] < target)

    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  cout << -1;

  return 0;
}