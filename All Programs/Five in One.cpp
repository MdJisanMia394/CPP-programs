#include<iostream>
using namespace std;
const int Max_size=101;
int arr[Max_size];
int n;
int Max()
{
        int maximum = -1;
        for(int i=0;i<n;i++){
            maximum = max(maximum,arr[i]);
        }
        return maximum;
}
int Min()
{
 int minimum = 1000;
 for(int i= 0;i<n;i++){
    minimum=min(minimum,arr[i]);
 }

 return minimum;

}
int Prime(int num)
{
    int cnt =0;

        for(int j=1;j<=num;j++){
            if(num%j==0){
                cnt++;
            }
        }

    if(cnt==2){
        return true;
    }
    else{
        return false;
    }



}
int is_prime()
{
    int cnt=0;
    for(int i=0;i<n;i++){
        if(Prime(arr[i])){
            cnt++;
        }
    }
    return cnt;



}
int is_palindrome(int num)
{
    int last_digit,rev=0,Original=num;
    while(num>0){
        last_digit=num%10;
        num = num/10;
        rev = rev*10 + last_digit;

    }
    if(rev==Original){
        return true;
    }
    else{
        return false;
    }



}
int Palindrome()
{
    int cnt=0;
    for(int i=0;i<n;i++){
        if(is_palindrome(arr[i])){
            cnt++;
        }
    }
 return cnt;


}
int DivCount(int num)
{
    int cnt=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cnt++;
        }
    }
return cnt;



}
int MaxDiv()
{
    int Maxd=-1;int Maxn=0;
    for(int i=0;i<n;i++){
        if(DivCount(arr[i])>Maxd){
            Maxd=DivCount(arr[i]);
            Maxn=arr[i];

        }
        else if(DivCount(arr[i])==Maxd){
            Maxn=max(Maxn,arr[i]);
        }
    }
    return Maxn;





}

int main()
{

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The maximum number : "<<Max()<<endl;
    cout<<"The minimum number : "<<Min()<<endl;
    cout<<"The number of prime numbers : "<<is_prime()<<endl;
    cout<<"The number of palindrome numbers : "<<Palindrome()<<endl;
    cout<<"The number that has the maximum number of divisors : "<<MaxDiv()<<endl;






    return 0;
}
