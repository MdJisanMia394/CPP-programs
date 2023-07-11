#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[1001];
    cin>>str;
    char original_string[strlen(str)];
    for(int i=0;i<strlen(str);i++){
        original_string[i] = str[i];
    }
    strrev(str);
   for(int i=0;i<strlen(str);i++){
    if(str[i]!=original_string[i]){
        cout<<"NO"<<endl;
        return false;
    }

   }
   cout<<"YES"<<endl;

return 0;
}
