#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n+row-1;col++){
            if(col<=n-row){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int row=1;row<=n-1;row++){
        for(int col=1;col<=n*2-1-row;col++){
            if(col<=row){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
  return 0;
}
