#include<iostream>
using namespace std;

int main(){
    int a,b;char ch;
    cin>>a>>ch>>b;
    if(ch=='>'){
        if(a>b)cout<<"Right\n";
        else cout<<"Wrong\n";
    }
    else if(ch=='<'){
        if(a<b)cout<<"Right\n";
        else cout<<"Wrong\n";
    }
    else{
        if(a==b)cout<<"Right\n";
        else cout<<"Wrong\n";

    }




return 0;
}
