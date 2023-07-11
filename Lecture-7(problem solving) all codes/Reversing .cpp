#include<iostream>
using namespace std;
const int max_size=1000;
int n;
int arr[max_size];
void reversing()
{
   for(int i=0;i<n/2;i++){
    int j=n-1-i;
    swap(arr[i],arr[j]);

   }




}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    reversing();

 for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;




    return 0;
}
