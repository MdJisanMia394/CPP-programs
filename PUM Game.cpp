#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int col=1;col<=4*n;col++){
        if(col%4==0){
            cout<<"PUM"<<endl;
        }
        else{
            cout<<col<<" ";
        }
    }





return 0;
}
