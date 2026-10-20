#include <iostream>
using namespace std;

class Car
{

public:
  int cost;
  int mileage;

  // public:
  //  Car(int cost, int mileage)
  //  {
  //    this->cost = cost;
  //    this->mileage = mileage;
  //    cout << "Hello from constructor\n";
  //  };

  // void print()
  // {
  //   cout << cost << "\n"
  //        << mileage;
  // };

  Car()
  {
    cout << "Constructor executed \n";
  };

  ~Car()
  {
    cout << "Destructor executed\n";
  };
};

int main()
{
  // Car obj(20, 10);
  // obj.print();

  // Car *p = new Car;
  // p->cost = 20;
  // p->mileage = 70;

  // cout << p->cost << endl;
  // cout << p->mileage << endl;

  // Car obj;

  Car *p = new Car;
  delete p;

  return 0;
}