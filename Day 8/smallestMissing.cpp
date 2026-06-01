#include <iostream>
using namespace std;

int main()
{
  int arr[6] = {0, 1, 2, 3, 4, 6};

  // for (int i = 0; i < 6; i++)
  // {
  //   if (arr[i] != i)
  //     cout << i;
  // }

  // cout << 6;

  int start = 0;
  int end = 6 - 1;
  int mid;
  int index;

  while (start <= end)
  {
    mid = (start + end) / 2;

    if (mid < arr[mid])
    {
      index = mid;
      end = mid - 1;
    }
    else
    {
      index = mid + 1;
      start = mid + 1;
    }
  }

  cout << index;
  return 0;
}