#include<iostream>
using namespace std;

int main(){
    int n=9;
    int arr[n]={1,3,2,4,6,5,9,7,8};
    for(int i=0;i<n;i++){
        int minInx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minInx]){
                swap(arr[j],arr[minInx]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }








return 0;
}
