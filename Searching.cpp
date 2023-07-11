#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];int number;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>number;bool existance=false;
   for(int i=0;i<n;i++){
    if(arr[i]==number){
        cout<<i<<endl;
        existance=true;
        break;
    }
}
    if(!existance){
        cout<<-1<<endl;
    }
return 0;
}
