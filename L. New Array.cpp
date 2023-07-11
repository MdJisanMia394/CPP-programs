#include<iostream>
using namespace std;
const int Max_Size=1000;
int n;
int arr1[1000],arr2[1000];
void ARR()
{
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<' ';
    }

}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<n;j++){
        cin>>arr2[j];
        cout<<arr2[j]<<' ';
    }

    ARR();

return 0;
}
