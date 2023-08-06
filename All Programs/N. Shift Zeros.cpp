#include<iostream>
using namespace std;
const int Max_size=1000;
int n;
int arr[Max_size];
void Calculation(){
    int Count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            Count++;
            continue;

        }
        cout<<arr[i]<<' ';
    }
    for(int i=0;i<Count;i++){
        cout<<0<<' ';
    }
    cout<<endl;

}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Calculation();






    return 0;

}
