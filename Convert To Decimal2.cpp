#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int last,Count =0;
        while(n>0){
            last = n%2;
            n = n/2;
            if(last==1){
                Count++;
            }
        }
        int decimal=0;
        for(int i=0;i<Count;i++){
            decimal = decimal+pow(2,i);
        }
        cout<<decimal<<endl;
    }

return 0;
}
