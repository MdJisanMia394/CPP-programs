// Add some code
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        char arr[51];
        cin>>arr;
        int length = strlen(arr);
        for(int i=0;i<length;i++){
            if(arr[i]=='L'){
                arr[i]=arr[i-1];
            }
            else if(arr[i]=='R'){
                arr[i]= arr[i+1];
            }
        }
        cout<<arr<<endl;
    }

       return 0;
}
