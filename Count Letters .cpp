
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){

    char arr[10000001];
    cin>>arr;

    int length = strlen(arr);
    sort(arr,arr+length);
    int total_count = 0;

    while(total_count < length){
          int   letter_count = 0;
        for(int i=total_count;i<=length;i++){
            if(arr[i]==arr[total_count]){
                letter_count++;
            }
        }
        cout<<arr[total_count]<<" : "<<letter_count<<endl;
        total_count = total_count + letter_count;
    }



return 0;
}
