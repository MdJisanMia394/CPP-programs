#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int sum=0;
    for(int i=1;i<=n;i++){
        int num =i;
        int last,sumOfDigits=0;
        while(num>0){
            last = num%10;
            num = num/10;
            sumOfDigits= sumOfDigits+last;
        }
        if(sumOfDigits>=a && sumOfDigits<=b){
            sum= sum+i;
        }
    }
    cout<<sum<<endl;





    return 0;
}
