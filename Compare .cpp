#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char a[25],b[25];
    cin>>a>>b;
    int len_a = strlen(a);
    int len_b = strlen(b);
    int length = min(len_a, len_b);
    for(int i=0;i<length;i++){
        if(a[i]<b[i]){
            cout<<a<<endl;
            return 0;
        }
        else if(b[i]<a[i]){
            cout<<b<<endl;
            return 0;
        }
    }
    if(len_a<len_b){
        cout<<a<<endl;
    }
    else {
        cout<<b<<endl;
    }


return 0;
}
