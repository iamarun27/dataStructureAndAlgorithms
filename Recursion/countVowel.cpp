#include <iostream>
using namespace std;

int count(string str, int i)
{

  // base
  if (i == -1)
    return 0;
  // vowel hoga

  if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    return 1 + count(str, i - 1);

  else
    return count(str, i - 1);

  // nhi hoga
}

int main()
{
  string str = "arun";
  cout << count(str, 3) << endl;

  return 0;
}