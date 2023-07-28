// Add some code
#include<iostream>
#include<string.h>
using namespace std;

int main(){
   int t;cin>>t;
    cin.ignore();
    while(t--){
        char arr[1000001];
        cin.getline(arr,10000001);

        int length = strlen(arr);
        int i=0;
        while(arr[i]==' '){
           i++;
        }
        int cnt=1;
        while(i+1<length){
            if(arr[i]==' ' && arr[i+1]!=' '){
                cnt++;
            }
            i++;
        }
    cout<<cnt<<endl;

    }



    return 0;
}
