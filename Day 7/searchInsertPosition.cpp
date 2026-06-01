#include <iostream>
using namespace std;

int main()
{
  int arr[4] = {1, 3, 5, 6};
  int target;
  cout << "Enter the target : ";
  cin >> target;

  int start = 0, end = 4 - 1, index;

  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] == target)
      cout << mid;
    else if (arr[mid] < target)
    {
      start = mid + 1;
      index = mid + 1;
    }
    else
    {
      end = mid - 1;
      index = mid;
    }
  }

  cout << index;

  return 0;
}