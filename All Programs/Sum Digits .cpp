#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;
    int arr[1];
    cin>>arr[0];int sum=0;int last_digit;
    for(int i=1;i<=n;i++){
         last_digit=arr[0]%10;
        arr[0] /= 10;
        sum += last_digit;
    }
    cout<<sum<<endl;








return 0;
}
