#include<iostream>
#include<string.h>
using namespace std;

int main() {
  char str1[100];
  cin.getline(str1,100);
  int Length = strlen(str1);
  char str2[Length-1];
  for(int i=0;i<Length-1;i++){
    str2[i]=str1[i+1];
  }
  str2[Length-1] = '\0';
  cout<<str2<<endl;
  return 0;
}
