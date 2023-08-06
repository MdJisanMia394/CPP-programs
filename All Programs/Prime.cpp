#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    if(n==1) cout<<"NO\n";
    else{
        int C=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                C++;
            }
        }
        if(C>2)cout<<"NO\n";

        else cout<<"YES\n";
    }






return 0;
}
