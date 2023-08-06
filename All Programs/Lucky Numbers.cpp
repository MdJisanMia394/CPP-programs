#include<iostream>
using namespace std;
bool is_lucky(int num)
{
    int last_digit;
  while(num>0){
     last_digit = num % 10;
     num /= 10;
     if(!(last_digit==4 || last_digit==7)){
        return false;
     }
  }
  return true;
}
int main(){

    int a,b;
    cin>>a>>b;
    bool found = false;
    for(int i=a;i<=b;i++){
        if(is_lucky(i)){
            cout<<i<<' ';
            found = true;
        }
    }
    if(!found){
        cout<<-1<<endl;
    }
return 0;
}
