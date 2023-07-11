#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int max_size=51;
        char arr1[max_size], arr2[max_size];
        cin>>arr1>>arr2;
        int length1= strlen(arr1), length2 = strlen(arr2);
       int  minimum=min(length1,length2);
        int maximum= max(length1,length2);
        if(length1>=length2){
            for(int i=0;i<minimum;i++){
                cout<<arr1[i]<<arr2[i];
            }
            for(int i=minimum;i<maximum;i++){
                cout<<arr1[i];
            }
            cout<<endl;
        }
        else{
             for(int i=0;i<minimum;i++){
                cout<<arr1[i]<<arr2[i];
            }
            for(int i=minimum;i<maximum;i++){
                cout<<arr2[i];
            }
            cout<<endl;
        }

    }

return 0;
}
