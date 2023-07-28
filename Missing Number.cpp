#include<iostream>
using namespace std;

int main(){
   int t;cin>>t;
    while(t--){
        int n;cin>>n;
        bool is_present[n+1];
        for(int i=1;i<=n;i++){
            is_present[i]=false;
        }

        for(int i=1;i<n;i++){
            int x;cin>>x;
            is_present[x]=true;
        }
        for(int i=1;i<=n;i++){
            if(is_present[i]==false){
                cout<<i<<endl;
            }
        }


    }

 return 0;
}
