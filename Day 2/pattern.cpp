#include <iostream>
using namespace std;

int main()
{
  // int count = 1;
  // for (int i = 1; i <= 5; i++)
  // {
  //   for (int j = 1; j <= 5; j++)
  //   {
  //     // cout <<"1 ";
  //     // cout << j;
  //     // cout << 5 - j + 1 << " ";
  //     cout << count << " ";
  //     count++;
  //   }
  //   cout << endl;
  // }

  // for (int i = 1; i <= 5; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     // cout<<"* ";
  //     //cout << j;
  //   }
  //   cout << endl;
  // }

  // print alphabets

  // for (int i = 1; i <= 5; i++)
  // {
  //   char c = 'A' + i - 1;
  //   for (int j = 1; j <= 5; j++)
  //   {
  //     cout << c << " ";
  //   }
  //   cout << endl;
  // }

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      char c = 'a' + j - 1;
      cout << c << " ";
    }
    cout << endl;
  }

  return 0;
}