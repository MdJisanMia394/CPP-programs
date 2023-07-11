#include<iostream>
using namespace std;

int main(){

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    unsigned long long int mul = (long long int)a*b*c*d;
    cout<<mul<<endl;
    int result=mul%100;
    cout<<result<<endl;



return 0;
}
