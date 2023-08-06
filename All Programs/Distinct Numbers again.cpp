#include<bits/stdc++.h>
using namespace std;
int n;
bool arr[2005];
int main(){
    cin>>n;
    for(int i=0;i<2005;i++){
        arr[i]=false;
    }
    for(int i=0;i<n;i++){
      int x;cin>>x;
      arr[x+1000]= true;
    }
    int cnt = 0;
    for(int i=0;i<2005;i++){
        if(arr[i]){
           cnt++;
        }
    }
    cout<<cnt<<endl;


return 0;
}
