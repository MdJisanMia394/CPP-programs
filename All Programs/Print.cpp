#include<iostream>
using namespace std;

void Print(int x){

    for(int i=1;i<=x;i++){
        cout<<i;
        if(i>=1 && i<x){
            cout<<' ';
        }
    }




}
int main(){

    int n;cin>>n;

    Print(n);





return 0;
}
