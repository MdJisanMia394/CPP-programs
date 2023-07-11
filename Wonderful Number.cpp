#include<iostream>
using namespace std;
int Odd(int x){
    if(x%2==1)
        return 1;
    else
        return 0;
}
int Palindrome(int n){
    int arr[40], a, Count1=0;
    while(n != 0){
        a = n%2;
        n = n/2;
        arr[Count1]=a;
        Count1++;
    }
    int binary[40];
    for(int i=0,j=Count1-1;i<Count1;i++,j--){
        binary[i] = arr[j];
    }
    int Count2=0;
    for(int i=0;i<Count1;i++){
        if(binary[i]!=arr[i]){
            Count2++;
        }
    }
    if(Count2>=1){
        return 0;
    }
    else {
        return 1;
    }



}
int main(){
    int N;cin>>N;
    if(Odd(N) && Palindrome(N)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;
}
