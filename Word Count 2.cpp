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
        cin.getline(str,10001);
        int length = strlen(str);
        int cnt=0;
        for(int i=0;i<length;i++){
            if(str[i]==' '){
                cnt++;
            }
        }
        cout<<"Count = "<<cnt+1<<endl;
    }

    return 0;
}

