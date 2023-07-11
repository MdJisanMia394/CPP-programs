// Add some code
#include<iostream>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int num;
        cin>>num;
        int first_digit = num/10000;
        int last_digit = num%10;
        cout<<"Sum = "<<first_digit+last_digit<<endl;
    }

    return 0;
}
