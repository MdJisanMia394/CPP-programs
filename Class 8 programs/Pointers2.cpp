#include<iostream>
using namespace std;

int main() {
  int *ptr; // declare the pointer ptr
  int num = 10;
  ptr = &num; // assing the address of num to ptr
  cout << "Address of num = " << &num << '\n';//address
  cout << "ptr is pointing at " << ptr << '\n';//address
  cout << "ptr is storing the value = " << *ptr << '\n';//value
  *ptr = 20; // assign 20 to the address where ptr is pointing at right now//20
  cout << "after the update ptr is storing the value = " << *ptr << '\n';//20
  cout << "Value of num = " << num << '\n';//20
  return 0;
}

