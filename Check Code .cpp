#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int max_size = a+b+1;
    char arr[max_size];
    cin>>arr;int cnt=0;
    for(int i=0;i<max_size;i++){
        if(isdigit(arr[i])){
            cnt++;
        }
    }
    if(arr[a]=='-' && cnt==max_size-1){
        cout<<"Yes"<<'\n';
    }
    else{
        cout<<"No"<<'\n';
    }

return 0;
}
