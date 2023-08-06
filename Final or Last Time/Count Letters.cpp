#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[10000001];
    cin>>arr;
    int length = strlen(arr);
    int Count[26];
    for(int i=0;i<26;i++){
        Count[i]=0;
    }

    for(int i=0;i<length;i++){
        Count[arr[i]-'a']++;
    }
    for(char c='a';c<='z';c++){
        if(Count[c-'a']>0){
            cout<<c<<" : "<<Count[c-'a']<<endl;
        }
    }

return 0;
}
