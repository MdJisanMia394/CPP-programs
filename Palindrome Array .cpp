#include<iostream>
#include<algorithm>
using namespace std;
const int max_size=100000;
int n;
int arr[max_size];
int original[max_size];

void reversing()
{

    reverse(arr,arr+n);


}
bool Palindrome()
{

    reversing();
    for(int i=0;i<n;i++){
        if(!(arr[i]==original[i])){
            return false;
        }
    }

    return true;

}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        original[i]=arr[i];
    }

    if(Palindrome()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}
