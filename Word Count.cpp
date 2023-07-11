#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int t;cin>>t;
    cin.ignore();
    while(t--){
        char str[10001];
        cin.getline(str,10001);
        int length = strlen(str);
        int space_count =0;
        for(int i=0;i<length;i++){
            if(str[i]==' '){
                space_count++;
            }
        }
        cout<<"Count = "<<space_count+1<<endl;
    }

    return 0;
}
