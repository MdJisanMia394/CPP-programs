#include<iostream>
#include<climits>
using namespace std;
const int max_size=1000;
int n;int arr[max_size];
int Operations()
{
    int arr_count[n];
    for(int i=0;i<n;i++){
       arr_count[i]=0;
    }
  for(int i=0;i<n;i++){
     while(arr[i]%2 != 1){
        arr[i] = arr[i]/2;
        arr_count[i]++;
     }
  }
  int minimum_arr_count=INT_MAX;
  for(int i=0;i<n;i++){
    minimum_arr_count = min(minimum_arr_count,arr_count[i]);
  }

return minimum_arr_count;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Operations()<<endl;

return 0;
}
