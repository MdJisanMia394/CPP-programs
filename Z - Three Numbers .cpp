#include<iostream>
using namespace std;

int main(){
    int k,s;
    cin>>k>>s;
    int C=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            for(int m=0;m<=k;m++){
                if(i+j+m==s){
                    C++;
                }
            }
        }
    }
    cout<<C<<'\n';




return 0;
}

