#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  string name;
  cout << "Enter string for sort : ";
  getline(cin, name);

  vector<int> alpha(26, 0);

  for (int i = 0; i < name.size(); i++)
  {
    int index = name[i] - 'a';
    alpha[index]++;
  }

  string ans;

  for (int i = 0; i < 26; i++)
  {
    char c = 'a' + i;
    while (alpha[i])
    {
      ans += c;
      alpha[i]--;
    }
  }

  cout << ans;

  return 0;
}