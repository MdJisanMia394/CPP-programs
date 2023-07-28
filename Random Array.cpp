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
            bool is_ascending = true;
            for(int i=0;i<n;i++){
                if(arr[i]>arr[i+1]){
                   is_ascending=false;
                }
            }

         bool is_descending = true;
            for(int i=0;i<n;i++){
                if(arr[i]<arr[i+1]){
                   is_descending=false;
                }
            }

        if(is_ascending || is_descending){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

 return 0;
}
