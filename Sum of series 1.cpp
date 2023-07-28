// Add some code
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int base, exp;
        cin>>base>>exp;
        int sum = 0;
        for(int i=0;i<=exp;i++){
            sum = sum + round(pow(base,i));
        }
        cout<<"Result = "<<sum<<endl;
    }

return 0;
}
