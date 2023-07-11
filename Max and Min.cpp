#include<iostream>
using namespace std;
 int arr[1001]; int n;
 int Min(){
     int  Minimum=1000000;
    for(int i=0;i<n;i++){
        Minimum = min(Minimum,arr[i]);

    }


  return Minimum;

 }
int Max()
{
    int Maximum =-1;
    for(int i=0;i<n;i++){

        Maximum = max(Maximum,arr[i]);
    }



  return Maximum;
}
int main(){
   cin>>n;


     for(int i=0;i<n;i++){
        cin>>arr[i];

    }

      cout<<Min()<<' '<<Max()<<endl;

return 0;
}
