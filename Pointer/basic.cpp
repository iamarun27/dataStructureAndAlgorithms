#include <iostream>
using namespace std;

// void fun(int *c, int *d)
// {
//   *c = (*c)*2;
//   *d = (*d)*2;

//   // cout<<c<<" "<<d<<endl;
// }


// void fun(int &c, int &d)
// {
//   c = c*2;
//   d = d*2;

//   // cout<<c<<" "<<d<<endl;
// }

int main()
{
  // int num = 30;
  // cout << num << endl;

  // int *p;
  // p = &num;

  // *p = 20;

  // cout << num;

  // int arr[5] = {1, 2, 3, 4, 5};

  //cout << *arr << endl;


  // int *p;
  // p = arr;
  // for(int i=0;i<5;i++)
  // {
  //   cout<<*p<<" ";
  //   p++;
  // }


  // int a=5,b=9;
  // fun(a,b);
  // cout<<a<<" "<<b;

  int arr[5] = {1,2,3,4,5};

  for(int i=0;i<5;i++)
  {
    cout<<arr<<" ";
  }

  return 0;
}