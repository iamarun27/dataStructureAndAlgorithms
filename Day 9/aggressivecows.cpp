#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 4, 8, 9};
  int k = 3; // 3

  // min of max
  int start = arr[0];
  int end = arr[5 - 1];
  int ans = 0;

  while (start <= end)
  {
    int mid = (start + end) / 2;
    int count = 1;
    int lastPos = arr[0];
    for (int i = 0; i < 5; i++)
    {
      if (arr[i] - lastPos >= mid)
      {
        count++;
        lastPos = arr[i];
      }
      if (count == k)
        break;
    }
    if (count == k)
    {
      ans = mid;
      start = mid + 1;
    }
    else
      end = mid - 1;
  }
  cout << ans;

  return 0;
}