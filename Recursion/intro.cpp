#include <iostream>
using namespace std;

// void fun3(int n)
// {
//   // base case
//   if (n == 0)
//   {
//     cout << "Happy birthdat\n";
//     return;
//   }

//   cout << n << "  days left for birthday";
//   fun3(n - 1);
// }

void print(int n)
{

  if (n == 2)
  {
    cout << 2 << endl;
    return;
  }
  cout << n << endl;
  print(n - 2);
}

int main()
{
  // int n = 5;
  //  iterative approach

  // for (int i = n; i > 0; i--)
  // {
  //   cout << i << " days left for birthday" << endl;
  // }
  // cout << "Happy Birthday";

  // fun3(8);

  // print(5);

  print(10);

  return 0;
}