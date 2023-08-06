#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int num1,num2,num3,num4,mul,result;

    num1= a%100;
    num2= b%100;
    num3= c%100;
    num4= d%100;

    mul = num1*num2*num3*num4;
    result=mul%100;
    if(result<10) cout<<0<<result<<endl;

    else cout<<result<<endl;

return 0;
}
