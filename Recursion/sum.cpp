#include <iostream>
using namespace std;

int sum(int n)
{

  // base case

  if (n == 1)
    return 1;
  return n * n + sum(n - 1) * sum(n - 1);
}

int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;

  cout << sum(n);

  return 0;
}