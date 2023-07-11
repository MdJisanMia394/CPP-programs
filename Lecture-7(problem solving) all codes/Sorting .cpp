#include<iostream>
using namespace std;
const int max_size=1001;
int arr[max_size];
int n;
void sorting()
{
   for(int i=0;i<n-1;i++){
    int minInx=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
            minInx=j;
            swap(arr[i],arr[minInx]);
        }
    }
   }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    sorting();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;

return 0;
}
