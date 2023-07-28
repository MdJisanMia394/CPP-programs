// Add some code
#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        double num;
        cin>>num;
        int cnt = 0;
        while(num>=0){
            num /= 2;

            if(num<=1){
                break;
            }
            cnt++;
        }
        cout<<cnt+1<<" days"<<endl;
    }

   return 0;
}
