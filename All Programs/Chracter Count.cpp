// Add some code
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        char str[1001];
        cin>>str;
        int length = strlen(str);
        for(int i=0;i<length;i++){
            int cnt=0;
            for(int j=0;j<length;j++){
                if(str[i]==str[j]){
                    cnt++;
                }
            }
            cout<<str[i]<<" = "<<cnt<<endl;
        }
        cout<<endl;
    }

    return 0;
}














