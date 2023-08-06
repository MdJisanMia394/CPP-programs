#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        char arr[10000000];
        cin.getline(arr,10000000);
        int length = strlen(arr);
        int i=0;
        while(arr[i]==' '){
            i++;
        }
        int cnt = 1;
        while(i<length){
           if(arr[i]==' ' && arr[i+1]!=' '){
            cnt++;
        }i++;


    }
     cout<<cnt<<'\n';
    }
return 0;
}
