// Add some code
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        char str[1001];
        cin>>str;
        int length = strlen(str);
        int Count[26];
        for(char c='a';c<='z';c++){
            int cnt=0;
            for(int i=0;i<length;i++){
                if(str[i]==c){
                    cnt++;
                }
            }
            Count[c-'a']=cnt;
        }
        bool is_printed[26];
        for(int i=0;i<26;i++){
            is_printed[i]=false;
        }
       for(int i=0;i<length;i++){
           if(!is_printed[str[i]-'a']){
                cout<<str[i]<<" = "<<Count[str[i]-'a']<<endl;
           }
           is_printed[str[i]-'a']=true;

       }
      if(t>0)  cout<<endl;
    }

    return 0;
}















