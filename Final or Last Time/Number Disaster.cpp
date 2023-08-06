#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        char arr[10];
        cin>>arr;
        int length = strlen(arr);
        while(length>=2 && arr[length-1]=='0'){
            arr[length-1]='\0';
            length--;
        }
        reverse(arr,arr+length);
        cout<<arr<<endl;
    }

    return 0;
}
