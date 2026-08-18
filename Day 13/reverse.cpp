#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
  string str;
  getline(cin, str);
  cout << str << endl;
  int s = 0, e = str.size() - 1;
  while (s < e)
  {
    char temp = str[s];
    str[s] = str[e];
    str[e] = temp;
    s++, e--;
  }

  cout << str;

  return 0;
}