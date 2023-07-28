#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        char num[10];
        cin>>num;
        int length = strlen(num);
        while(num[length-1]=='0'){
                num[length-1]='\0';
            length--;


        }
        reverse(num,num+length);
        cout<<num<<endl;
    }


  return 0;
}

