#include<iostream>
using namespace std;
const int max_size=1000;
int n;
int arr[max_size];
void Print()
{

    for(int i=0;i<n;i++){
        if(arr[i]>10){

            continue;
        }
        cout<<"A["<<i<<"] = "<<arr[i]<<endl;
    }



}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Print();












    return 0;
}
