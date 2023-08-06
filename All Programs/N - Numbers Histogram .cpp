#include<iostream>
using namespace std;

int main(){

    char ch;int n;
    cin>>ch;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int row=1;row<=n;row++){
        for(int col=1;col<=arr[row-1];col++){
            cout<<ch;
        }
        cout<<endl;
    }






return 0;
}
