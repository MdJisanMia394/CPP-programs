#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;
   long long int fib[n+1];
    fib[1]=0;
    fib[2]=1;
    for(int i=3;i<=n+1;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

    cout<<fib[n]<<endl;

return 0;
}
