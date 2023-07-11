#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int num;
        cin>>num;int armstrong_number=0;
        int duplicate_num= num;
        while(duplicate_num>0){
            int last_digit = duplicate_num%10;
           duplicate_num  /= 10;
            armstrong_number=armstrong_number+(last_digit*last_digit*last_digit);
        }
//        cout<<armstrong_number<<endl;

        if(armstrong_number==num){
            cout<<""<<num<<" is an armstrong number!"<<endl;
        }
        else{
            cout<<""<<num<<" is not an armstrong number!"<<endl;
        }
    }

return 0;
}
