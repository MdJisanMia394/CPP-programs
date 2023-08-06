#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int year,month,day;
    year = n/365;
    month = (n%365)/30;
    day = (n%365)%30;

    cout<<year<<" years\n";
    cout<<month<<" months\n";
    cout<<day<<" days\n";



return 0;
}
