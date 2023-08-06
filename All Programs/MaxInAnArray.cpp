#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int Max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>Max){
            Max= a[i];
        }
    }
    cout<<Max<<endl;

  return 0;
}
