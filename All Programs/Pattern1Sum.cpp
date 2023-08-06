#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int n;cin>>n;
    for(int row =1;row<=n;row++){
        int sum=0;
        for(int col=1;col<=row;col++){
            sum=sum+col;
            cout<<col;
            if(col<row){
                cout<<"+";
            }
            else{
                cout<<"=";
            }
        }
        cout<<sum<<endl;
    }

return 0;
}
