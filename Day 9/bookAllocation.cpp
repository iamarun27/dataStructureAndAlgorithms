#include <iostream>
using namespace std;

int main()
{
  int arr[4] = {10, 20, 10, 30};

  // start = max(array);
  // end = sum of array
  // while(start<=end)
  // {
  //   mid;
  //   sum = 0, count=1;
  //   for(i=0;i<n;i++)
  //   {
  //     sum+=arr[i];
  //     if sum>mid
  //     {
  //       count++;
  //       sum = arr[i];

  //     }
  //   }
  //   if count<=m
  //   {
  //     end = mid-1;
  //   }
  //   else
  //   start = mid+1;
  // }

  int start = arr[0], end = 0;
  for (int i = 0; i < 4; i++)
  {
    end += arr[i];
    if (start < arr[i])
      start = arr[i];
  }

  int ans;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    int sum = 0, count = 1;
    for (int i = 0; i < 4; i++)
    {
      sum += arr[i];
      if (sum > mid)
      {
        count++;
        sum = arr[i];
      }
      if (count <= 3)
      {
        end = mid - 1;
        ans = mid;
      }
      else
        start = mid + 1;
    }
    cout << ans;
  }

  return 0;
}