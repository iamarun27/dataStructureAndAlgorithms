#include <iostream>
using namespace std;

int main()
{
  // cout << "Hello world!!";

  int age = 18;
  cout << sizeof(age);

  cout << endl;

  char ch = 'a';
  cout << sizeof(ch);

  cout << endl;

  float num = 3.14;
  cout << sizeof(num);

  cout << endl;

  double dbl = 3.15458545;
  cout << sizeof(dbl);

  cout << endl;

  bool var = 0;
  cout << sizeof(var);

  cout << endl;

  char c = 65;
  cout << c;

  cout << endl;

  int num1 = 98;
  int num2 = 88;

  if (num1 > num2)
    cout << num1;
  else
    cout << num2;

  cout << "\nEven/odd\n";

  if (num1 % 2 == 0)
    cout << "Even numbr";
  else
    cout << "Odd number";

  return 0;
}