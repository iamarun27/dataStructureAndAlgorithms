#include <iostream>
using namespace std;

class Student
{
public:
  int roll;
  string name;
  int fee;
};

int main()
{
  Student obj;
  obj.roll = 24;
  obj.name = "Arun";
  obj.fee = 24000;

  cout<<obj.roll<<" ";
  cout<<obj.name<<" ";
  cout<<obj.fee<<" ";

  return 0;
}