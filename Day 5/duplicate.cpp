#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 2, 3, 4};

  int count[5] = {0};

  for (int i = 0; i < 5; i++)
  {
    // count[arr[i]]++;
    int index = arr[i];
    count[index]++;
  }

  for (int i = 0; i < 5; i++)
  {
    if (count[i] > 1)
    {
      cout << i;
    }
  }
  return 0;
}