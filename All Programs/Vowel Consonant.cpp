// Add some code
#include<iostream>
#include<climits>
#include<string.h>
using namespace std;

int main(){

    int t;cin>>t;
    cin.ignore();
    while(t--){
        char str[1000];
        cin.getline(str,1000);
        int length = strlen(str);
        for(int i=0;i<length;i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                cout<<str[i];
            }

        }
         cout<<endl;
         for(int i=0;i<length;i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]==' '){
                    continue;

            }
            cout<<str[i];

        }
        cout<<endl;
    }
   return 0;
}
