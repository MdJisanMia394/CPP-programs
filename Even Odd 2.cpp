
// Add some code
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
       char arr[101];
        cin>>arr;
        int len = strlen(arr);
        int length = len-1;
        if(arr[length]=='0' || arr[length]=='2' || arr[length]=='4' || arr[length]=='6' || arr[length]=='8'){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }


    }
    return 0;
}
