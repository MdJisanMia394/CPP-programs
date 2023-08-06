#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int even=0,odd=0,pos=0,neg=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0) even++;
        //modulo operator er sathe even ber korte - sign er sathe perform korte -0 ashe ja 0 er equivalent but - odd er sathe perform korte -1 ahbe ja 1 er equivalent na ,, so ei bishoye careful thakte hobe

        if(arr[i]>0) pos++;
        if(arr[i]<0) neg++;


    }
    cout<<"Even: "<<even<<endl<<"Odd: "<<n-even<<endl<<"Positive: "<<pos<<endl<<"Negative: "<<neg<<endl;





return 0;
}
