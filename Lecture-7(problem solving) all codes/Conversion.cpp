#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char arr[100001];
    cin>>arr;
    int length = strlen(arr);
    for(int i=0;i<length;i++){
        if(arr[i]== ','){
            arr[i]=' ';
        }
        else if(isupper(arr[i])){
            arr[i]=tolower(arr[i]);
        }
        else {
           arr[i]= toupper(arr[i]);
        }
    }
    cout<<arr<<endl;
return 0;
}
