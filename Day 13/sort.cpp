#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  // string name = "Ahfeuh";
  // sort(name.begin(), name.end());
  // cout << name;

  // only characters can be sort on o(n) time compleity
  // 1.

  string s;
  cin >> s;
  int n = s.size();

  int count[26];
  for (int i = 0; i < 26; i++)
  {
    count[i] = 0;
  }

  for (int i = 0; i < n; i++)
  {
    int index = s[i] - 'a';
    count[index]++;
  }

  for (int i = 0; i < 26; i++)
  {
    for (int j = 0; j < count[i]; j++)
    {
      char c = 'a' + i;
      cout << c << " ";
    }
  }

  return 0;
}