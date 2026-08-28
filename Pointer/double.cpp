#include <iostream>
using namespace std;

// void dob(int *p, int size)
// {
//   for (int i = 0; i < 5; i++)
//     p[i] = 2 * p[i];
// }

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  // dob(arr, 5);

  // for (int i = 0; i < 5; i++)
  // {
  //   cout << arr[i] << " ";
  // }

  cout << arr << endl;
  cout << &arr << endl;
  cout << &arr[0] << endl;
  cout << &arr[1] << endl;
  cout << &arr[2] << endl;
  cout << &arr[3] << endl;
  cout << &arr[4] << endl;

  return 0;
}