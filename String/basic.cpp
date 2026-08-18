#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  // string s = "Arun Kumar";

  // cout << s.size();

  // string s;
  // getline(cin, s);

  // string s = "Arun is a \"good\" boy";

  // cout << s;

  string s1 = "Arun";
  string s2 = "Kumar";

  s1.pop_back();

  cout << s1 + " " + s2;
  cout << endl;

  string str = "Arun";
  // sort(str.begin(), str.end());

  str.push_back('K');

  cout << str;

  return 0;
}