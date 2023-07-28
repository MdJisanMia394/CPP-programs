#include<iostream>
using namespace std;

int main() {
  int *ptr; // declare the pointer ptr
  int a[5] = {0, 1, 2, 3, 4};
  cout << "Address of a[0] = " << &a[0] << '\n';
  ptr = a; // storing the address of the first element of a to ptr
  cout << "Address of ptr  = " << ptr << '\n';

  for (int i = 0; i < 5; i++) {
    cout << "Address of a[" << i << "] = " << &a[i] << '\n';
    cout << "Address of ptr  = " << (ptr + i) << '\n';
  }

  cout << "Printing all the values of the array a: \n";
  for (int i = 0; i < 5; i++) {
    cout << *(ptr + i) << '\n';
  }
  return 0;
}

