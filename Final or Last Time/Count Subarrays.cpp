#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                bool is_non_decreasing = true;
                for(int k=i;k<j;k++){
                    if(arr[k]>arr[k+1]){
                        is_non_decreasing = false;
                    }
                }
                if(is_non_decreasing){
                    cnt++;
                }
            }
        }
        cout<<cnt<<'\n';
    }
return 0;
}
