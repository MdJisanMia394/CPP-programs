// Add some code
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        char str[1001];
        cin>>str;
        reverse(str,str+strlen(str));
        cout<<str<<endl;
    }


    return 0;
}
