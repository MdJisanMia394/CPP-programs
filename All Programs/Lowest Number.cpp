#include<iostream>
using namespace std;
const int maximum_size=1000;
int n;
int arr[maximum_size];
int Lowest_Number()
{
    int minimum=1000000;
    for(int i=0;i<n;i++){
        minimum=min(minimum,arr[i]);
    }

return minimum;

}
int Position()
{
    for(int i=0;i<n;i++){
        if(Lowest_Number()==arr[i]){
            return i+1;
            break;
        }
    }

}
int main()
{

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Lowest_Number()<<' '<<Position()<<endl;


    return 0;


}
