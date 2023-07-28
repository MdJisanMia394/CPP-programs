#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        char a[200],b[200];
        cin>>a>>b;
        int len_a=strlen(a);
        int len_b=strlen(b);
        int sub_string_count=0;
        for(int start=0;start+len_b-1<len_a;start++){
            bool is_equal=true;

            for(int i=0;i<len_b;i++){
                if(a[start+i] != b[i]){
                    is_equal=false;
                }
            }
        if(is_equal){
            sub_string_count++;
        }

        }
        cout<<sub_string_count<<endl;

    }
 return 0;
}
