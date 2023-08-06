#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    bool not_exist = true;
    for(int i=a;i<=b;i++){
        int num = i;
        bool lucky_number = true;

        while(num!=0){
            int last_digit = num % 10;
            num /= 10;
            if(last_digit != 4 && last_digit != 7){
                lucky_number = false;
                break;
            }

        }
        if(lucky_number){
            cout<<i<<' ';
            not_exist = false;
        }

    }
    if(not_exist){
        cout<<-1<<endl;
    }


return 0;
}
