#include <iostream>
using namespace std;

int main()
{
  int arr[3][4];
  int key = 5;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] == key)
      {
        cout << "Found";
        return 0;
      }
    }
  }
  cout << "Not found";

  return 0;
}