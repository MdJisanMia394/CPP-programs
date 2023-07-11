#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

const int max_size=1000;
int n;
int arr[max_size];
void  Swap()
{
    int maximum = INT_MIN,max_position;
   for(int i=0;i<n;i++){
    if(arr[i]>maximum){
        maximum=arr[i];
        max_position = i;
    }
   }
   int minimum=INT_MAX,min_position;
   for(int j=0;j<n;j++){
    if(arr[j]<minimum){
        minimum = arr[j];
        min_position=j;
    }
   }
   swap(arr[max_position],arr[min_position]);

}
int main(){

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Swap();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
return 0;
}
