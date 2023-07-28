// Add some code
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        for(int row =1;row<=n;row++){
            for(int col=1;col<=row;col++){
                cout<<p;
                if(col>=1 && col<row){
                    cout<<' ';
                }
            }
            cout<<endl;
        }
        for(int row=1;row<n;row++){
            for(int col=1;col<=n-row;col++){
                cout<<p;
                if(col>=1 && col<n-row){
                    cout<<' ';
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
