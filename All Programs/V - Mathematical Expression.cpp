#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
    int a,b,c;char s,q;
    cin>>a>>s>>b>>q>>c;
    if(s=='+'){
        if(a+b==c)cout<<"Yes\n";
        else cout<<a+b<<endl;
    }
    else if(s=='-'){
        if(a-b==c)cout<<"Yes\n";
        else cout<<a-b<<endl;
    }
    else{
        if(a*b==c)cout<<"Yes\n";
        else cout<<a*b<<endl;
    }
    }



return 0;
}
