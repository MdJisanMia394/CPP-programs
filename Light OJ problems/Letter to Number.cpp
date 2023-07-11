// Add some code
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        char arr[101];
        cin>>arr;
        int length = strlen(arr);
        int new_arr[length+1];
        for(int i=0;i<length;i++){
            new_arr[i]=arr[i]-64;
        }
        for(int i=0;i<length;i++){
            cout<<new_arr[i];
        }
        cout<<endl;
    }

    return 0;
}
