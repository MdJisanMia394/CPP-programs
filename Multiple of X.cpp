// Add some code
#include<iostream>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int n1, N;
        cin>>n1>>N;
        if(n1>N){
            cout<<"Invalid!"<<'\n';
        }
        else{
        for(int i=n1;i<=N;i += n1){
           cout<<i<<'\n';
        }

    }
    cout<<'\n';
    }
    return 0;
}
