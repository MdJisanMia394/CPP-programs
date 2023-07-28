// Add some code
#include<iostream>
using namespace std;
const int max_size=101;
int arr[max_size];
int main(){
    int t;cin>>t;
    while(t--){
        int arr_size;

        cin>>arr_size;
        for(int i=0;i<arr_size;i++){
            cin>>arr[i];
        }
        for(int i=0;i<arr_size;i++){
            if(i % 2==0){
                cout<<arr[i]<<' ';
            }
        }
        cout<<endl;

    }

    return 0;
}
