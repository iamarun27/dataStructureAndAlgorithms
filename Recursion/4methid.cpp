#include <iostream>
using namespace std;

// void print(int num,int N)
// {
//   // base case
//   if (num == N)
//   {
//     cout << num << endl;
//     return;
//   }

//   cout << num << endl;
//   print(num + 1,N);
// }

void printEven(int num, int N)
{

  if (num == N)
  {
    cout << num << endl;
    return;
  }
  cout << num << endl;
  printEven(num + 2, N);
}

int main()
{

  int N;
  cout << "Enter the number : ";
  cin >> N;

  if (N % 2 == 1)
    N--;

  printEven(2, N);

  return 0;
}