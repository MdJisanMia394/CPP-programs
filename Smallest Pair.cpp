#include<iostream>
#include<climits>
using namespace std;


int main(){


    int t;cin>>t;
    while(t--){
            int n;
        cin>>n;
    int arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }

    int minimum_sum=INT_MAX;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            minimum_sum=min(minimum_sum,arr[i]+arr[j]+j-i);
        }
    }
    cout<<minimum_sum<<endl;

    }




return 0;
}
