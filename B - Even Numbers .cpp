#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;
    int C=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<endl;
            C++;
        }

    }
    if(C<1){
       cout<<-1<<endl;
    }


return 0;
}
