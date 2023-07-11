#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        char str[100001];
        cin>>str;
        int cnt=0;
        for(int i=0;i<strlen(str)-2;i++){
            if(str[i]!=str[i+1] && str[i]==str[i+2]){
                cnt++;
            }
        }
        if(cnt>0){
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Bad"<<endl;
        }
    }

return 0;
}
