#include<iostream>
#include<cmath>
using namespace std;

int main(){

    long long int a,c;long long int b,d;
    cin>>a>>b>>c>>d;
    double res1=pow((double)a,b);
    double res2 = pow((double)c,d);
    if(res1>res2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



return 0;
}
