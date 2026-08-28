#include <iostream>
using namespace std;

// void fun(int a[][4], int row,int col)
// {
//   int count = 1;
//   for (int i = 0; i < row; i++)
//   {
//     for (int j = 0; j < col; j++)
//     {
//       a[i][j] = count++;
//     }
//   }
// }

int main()
{
  // int arr[3][4];

  // fun(arr, 3,4);

  //  for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 4; j++)
  //   {
  //     ;cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  int *p = new int;
  *p = 10;
  cout << *p << endl;
  cout << p;
  return 0;
}