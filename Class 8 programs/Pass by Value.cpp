#include<iostream>
using namespace std;

void swap_them(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
}
int main() {
  int a = 10, b = 20;
  swap_them(a, b);
  cout << a << ' ' << b << '\n';
  return 0;
}

