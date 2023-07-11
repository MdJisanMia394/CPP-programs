#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   int siz = sizeof(n);int a; int arr[siz];
   for(int i=0;i<siz;i++){
    a = n%10;
    n=n/10;
    cout<<a<<endl;
   }






return 0;
}
