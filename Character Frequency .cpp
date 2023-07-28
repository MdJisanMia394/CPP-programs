// Add some code
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        char str[10001];
        char ch;
        cin.getline(str,10001);
        cin>>ch;
        cin.ignore();
        int length = strlen(str);
        int cnt=0;
        for(int i=0;i<length;i++){
            if(str[i]==ch){
                cnt++;
            }
        }
        if(cnt==0){
            cout<<"'"<<ch<<"' is not present"<<endl;
        }
        else{
             cout<<"Occurrence of '"<<ch<<"' in '"<<str<<"' = "<<cnt<<endl;
        }

    }


    return 0;
}
