#include <iostream>
using namespace std;

int main()
{
  int arr[6] = {2, 4, 11, 17, 25, 29};
  int target = 40;

  // for (int i = 0; i < 7 - 1; i++)
  // {
  //   for (int j = i + 1; j < 7; j++)
  //   {
  //     if (arr[i] + arr[j] == target)
  //     {
  //       cout << "Yes";
  //     }
  //   }
  // }

  // binary search

  // x+y = 40
  // 2+y = 40
  // y = 38

  // for(int i=0;i<7;i++)
  // {
  //   int find = target - arr[i];
  //   int start = i+1;
  //   int end = 7-1;
  //   while(start<=end)
  //   {
  //     // find ... write logic
  //   }

  //   TC => nlog(n);

  // }

  // two pointer approach

  // value decrease => right side
  // value increase => left side

  // first pointer => moving direction
  // second pointer => moving direction

  // two x+y = sum => increase/decrease

  // right side => increase
  // left side => decrease

  int first = 0;
  int last = 7 - 1;
  int sum = target;

  while (first < last)
  {
    if (arr[first] + arr[last] == sum)
    {
      cout << "Found";
      break;
      
    }
    else if (arr[first] + arr[last] < sum)
      first++;
    else
      last--;
  }

  // time complexity : o(n);

  return 0;
}