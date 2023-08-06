#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;
    int reserved_number = n;
    int reversed_number = 0;
    int lastdigit;
    while(n != 0){
        lastdigit=n%10;
        n = n/10;
        reversed_number = lastdigit+(reversed_number*10);
    }
    cout<<reversed_number<<endl;

    if(reversed_number==reserved_number){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }








return 0;
}
