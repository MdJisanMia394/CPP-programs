#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int max_size = 1000001;
    char arr[max_size];
    cin>>arr;
    int length = strlen(arr);
    int sum=0;
    for(int i=0;i<length;i++){
        sum = sum + arr[i]-'0';
    }
    cout<<sum<<endl;

return 0;
}
