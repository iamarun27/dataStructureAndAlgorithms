#include <iostream>
using namespace std;

int main()
{
  int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  // first row se diagonally jana h first column
  // last col = diagonally last row
  int col = 0;
  while (col < 3)
  {
    int i = 0, j = col;
    while (j >= 0)
    {
      cout << arr[j];
      i++, j--;
    }
    col++;
  }

  int row = 0;
  while (row < 3)
  {
    int i = row, j = 3;
    while (i < 3)
    {
      cout << arr[i][j];
      i++, j--;
    }
    row++;
  }
}