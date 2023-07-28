// Add some code
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
      int  gcd = __gcd(a,b);
      long long int  lcm = ((long long int)a*b)/gcd;
        cout<<"LCM = "<<lcm<<endl;
    }


    return 0;
}
