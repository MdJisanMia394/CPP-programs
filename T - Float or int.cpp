#include<iostream>
using namespace std;

int main(){
    double n;cin>>n;
    int N=n;
    double result = n-N;
    if(result == 0){
        cout<<"int "<<N<<endl;
    }
    else{
        cout<<"float"<<" "<<N<<" "<<result<<endl;
    }


return 0;
}
