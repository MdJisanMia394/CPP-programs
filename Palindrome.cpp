// Add some code
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char str[1001];
        cin>>str;
        int length = strlen(str);
        char original_string[length];
       for(int i=0;i<length;i++){
        original_string[i]=str[i];
       }
       original_string[length]='\0';
        reverse(str,str+length);
        //cout<<original_string<<endl<<str<<endl;
        int cnt=0;
        for(int i=0;i<length;i++){
            if(original_string[i] == str[i]){
           cnt++;
            }
        }
      if(cnt==length){
        cout<<"Yes! It is palindrome!"<<endl;
      }
      else{
        cout<<"Sorry! It is not palindrome!"<<endl;
      }

    }

   return 0;
}
