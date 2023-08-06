#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;long long int fact=1;
        if(n==0) cout<<1<<endl;
        else{
        for(int i=n;i>=1;i--){
            fact *= i;
        }
        cout<<fact<<endl;
    }
    }
return 0;
}
