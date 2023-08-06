#include<bits/stdc++.h>
using namespace std;
int array_size;
int arr1[100000], arr2[100000];
void Printing()
{
   for(int i=0;i<array_size;i++){
    cout<<arr2[i]<<' ';
   }
   for(int i=0;i<array_size;i++){
    cout<<arr1[i]<<' ';
   }
}
int main(){
    cin>>array_size;
    for(int i=0;i<array_size;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<array_size;i++){
        cin>>arr2[i];
    }

    Printing();

return 0;
}
