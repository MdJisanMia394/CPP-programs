#include<iostream>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int maximum = -1e6;
                for(int k=i;k<=j;k++){
                    maximum = max(maximum,arr[k]);
                }
                cout<<maximum<<' ';
            }
        }
        cout<<'\n';
    }

return 0;
}
