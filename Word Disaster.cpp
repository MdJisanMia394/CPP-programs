// Add some code
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;cin.ignore();
    while(t--){
        char arr[1001];
        cin.getline(arr,1001);
        int length = strlen(arr);
       int i=0;
       while(i<length){
            if(arr[i] != ' '){
              int  word_start = i;
              while(i<length && arr[i] != ' '){
                i++;
              }
              int word_end = i-1;
              for(int j=word_end;j>=word_start;j--){
                cout<<arr[j];
              }

            }
            else{
                cout<<' ';
                i++;
            }
        }

    cout<<endl;
    }

    return 0;
}
