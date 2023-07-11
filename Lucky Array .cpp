#include<iostream>
#include<algorithm>
using namespace std;
const int max_size=1000;
int n;
int arr[max_size];
int  frequency()
{

    sort(arr,arr+n);
    int cnt=0;
    for(int i=0;i<n;i++){

        if(arr[0]==arr[i]){
            cnt++;
        }
    }

return cnt;

}
void Lucky_Unlucky()
{

    if(frequency()%2==1){
        cout<<"Lucky"<<endl;

    }
    else{
        cout<<"Unlucky"<<endl;

    }
}

int main(){


    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   Lucky_Unlucky();

return 0;
}
