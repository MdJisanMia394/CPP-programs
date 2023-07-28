// Add some code
#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0){
            cout<<1<<'\n';
        }
        else{
            for(int i=n;i>=2;i--){
            cout<<"2^"<<i<<" + ";
        }
        cout<<"2 + 1"<<endl;
        }

    }
  return 0;
}
