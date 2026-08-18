#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
  // vector<int> v;
  // v.push_back(70);
  // v.push_back(20);
  // v.push_back(30);

  // int n = v.size();

  // sort(v.begin(), v.end(), greater<int>());

  // for (int i = 0; i < n; i++)
  // {
  //   cout << v[i] << " ";
  // }

  // cout << endl;
  // cout << v.capacity();

  // vector<int> v(5, 23);
  // for (auto x : v)
  //   cout << x << " ";

  // 2-D vector

  vector<vector<int>> v(4, vector<int>(3, 5));
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << v[i][j] << " ";
    }
  }

  return 0;
}