#include<iostream>
using namespace std;
const int max_size=1000;
int n;
int arr[max_size];
void replacement()
{
   for(int i=0;i<n;i++){
    if(arr[i]>0){
       arr[i]=1;
    }
    else if(arr[i]<0){
        arr[i]=2;
    }
    else {
        arr[i]=0;
    }
   }



}
int main()
{

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    replacement();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }







    return 0;
}
