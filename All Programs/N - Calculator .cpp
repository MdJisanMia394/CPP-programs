#include<iostream>
using namespace std;

int main(){
    int a,b;char ch;
    cin>>a>>ch>>b;
    if(ch=='+'){
        cout<<a+b<<endl;
    }
    else if(ch=='-'){
        cout<<a-b<<endl;

    }
    else if(ch=='*'){
        cout<<(long long int)a*b<<endl;
    }
    else {
        cout<<a/b<<endl;
    }





return 0;
}
