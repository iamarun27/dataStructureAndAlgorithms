#include <iostream>
using namespace std;

void lower(string &str, int index)
{
  if (index == -1)
    return;

  str[index] = 'A' + str[index] - 'a';
  lower(str, index - 1);
}

int main()
{
  string str = "arun";
  lower(str, 3);
  cout << str;

  return 0;
}