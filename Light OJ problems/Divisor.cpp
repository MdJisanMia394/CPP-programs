#include<iostream>
using namespace std;

int main(){
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int n;cin>>n;cout<<"Case "<<t<<": ";
        for(int i=1;i<n;i++){

            if(n%i==0){
                cout<<i<<' ';
            }
        }
        cout<<n<<endl;
    }


return 0;
}
