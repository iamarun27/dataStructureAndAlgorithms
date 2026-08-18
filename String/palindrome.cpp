#include <iostream>
using namespace std;

int main()
{
  string s = "namn";
  int start = 0;
  int end = s.size() - 1;

  while (start <= end)
  {
    if (s[start] != s[end])
    {
      cout << "Not a palindrome";
      return 0;
    }
    start++;
    end--;
  }
  cout << "Palindrome";

  return 0;
}