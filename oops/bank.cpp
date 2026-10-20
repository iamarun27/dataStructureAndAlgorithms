#include <iostream>
using namespace std;

class Bank
{

  int balance;
  string name;

public:
  void SetValue(int amount, string person)
  {
    balance = amount;
    name = person;
  };

  void check_balance()
  {
    cout << balance << " ";
    cout << name << " ";
  };

  void withdraw()
  {
    balance -= 100;
    cout << "100 Rs debited" << " ";
  };
};

int main()
{
  Bank b;
  b.SetValue(1000, "Aman");
  b.check_balance();
  b.withdraw();
  b.check_balance();

  return 0;
}