#include<iostream>
using namespace std;

int main(){


    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int row=1;row<=n;row++){
            for(int col=1;col<=n;col++){
                cout<<"*";
            }
            cout<<endl;
        }
       if(t>0){
        cout<<endl;
       }
    }
return 0;
}
