// Add some code
#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        if(isupper(ch)){
            cout<<"Uppercase Character"<<endl;
        }
        else if(islower(ch)){
            cout<<"Lowercase Character"<<endl;
        }
        else if(isdigit(ch)){
            cout<<"Numerical Digit"<<endl;
        }
        else{
            cout<<"Special Characters"<<endl;
        }
    }


   return 0;
}
