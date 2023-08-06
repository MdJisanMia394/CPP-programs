#include<iostream>

using namespace std;

int get_sum(int len, int a[10]) { // array a is called by reference (pointers)
  int sum = 0;
  for (int i = 0; i < len; i++) {
    sum += a[i];
  }
  a[0] = 100; // this will modify the real value of a in the main function
  return sum;
}
int main() {
  int len = 5, a[5] = {
    0,
    1,
    2,
    3,
    4
  };
  int sum = get_sum(len, a);
  cout << sum << '\n';
  for (int i = 0; i < len; i++) {
    cout << a[i] << '\n';
  }
  return 0;
}
