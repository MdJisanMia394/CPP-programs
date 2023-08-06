#include<iostream>
using namespace std;

int main(){
    int Fixed_Pass = 1999;
    int guess;
    cin>>guess;
    while(guess != Fixed_Pass){
        cout<<"Wrong\n";
        cin>>guess;
    }
    cout<<"Correct\n";






return 0;
}
