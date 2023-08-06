#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n+1][n+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                if(j==0){
                    arr[i][j]=1;
                }
                else if(i==0){
                    arr[i][j]=0;
                }
                else{
                    arr[i][j]=arr[i-1][j-1] + arr[i-1][j];
                }
            }
        }

    for(int i=0;i<n+1;i++){
        for(int j= 0;j<=i;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }

   cout<<'\n';
  }
    return 0;
}
