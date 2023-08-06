#include<iostream>
using namespace std;

int main(){
    int a,b,c;cin>>a>>b>>c;
    int Max=0,Min=0,Mid=0;
    if(a>=b && a>=c){
        Max=a;
        if(b>=c){
            Min=c;
            Mid=b;
        }
        else{
            Min=b;
            Mid=c;
        }
    }
    else if(b>=a && b>=c){
        Max=b;
        if(a>=c){
            Min=c;
            Mid=a;
        }
        else{
            Min=a;
            Mid=c;
        }
    }
    else if(c>=a && c>=b){
        Max=c;
        if(a>=b){
            Min=b;
            Mid=a;
        }
        else{
            Min=a;
            Mid=b;
        }
    }
    cout<<Min<<endl<<Mid<<endl<<Max<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;



return 0;
}
