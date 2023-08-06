// Add some code
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){

        int n1,n2;
        cin>>n1;
        int arr1[n1];
        for(int i=0;i<n1;i++){
            cin>>arr1[i];
        }
        cin>>n2;
        int arr2[n2];
        for(int i=0;i<n2;i++){
            cin>>arr2[i];
        }
        int n = n1+n2;
        int arr3[n];
        for(int i=0;i<n1;i++){
            arr3[i]=arr1[i];
        }
        for(int i=0;i<n;i++){
            arr3[i+n1]=arr2[i];
        }
        sort(arr3,arr3+n);
        for(int i=0;i<n;i++){
            cout<<arr3[i]<<' ';
        }
        cout<<endl;
    }
   return 0;
}
