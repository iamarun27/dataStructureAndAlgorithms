#include <iostream>
using namespace std;
int main()
{
  int arr[7] = {2, 4, 5, 10, 11, 13, 17};
  int s = 19;

  for (int i = 0; i < 7; i++)
  {
    int sum = 0;
    for (int j = i; j < 7; j++)
    {
      sum += arr[j];
      if (sum == s)
      {
        cout << "Yes";
      }
    }
  }

  return 0;
}