#include<iostream>
using namespace std;
const int max_size=1000000;
long long int arr[max_size];
int n;
 long long int Summation()
{
   long long int sum = 0;
   for(int i=0;i<n;i++){
        sum += arr[i];
   }

   return sum;

}
void Absolute_Sum()
{

   long long  int absolute=-1;
    if(Summation()<0){
        absolute *= Summation();
        cout<<absolute<<endl;
    }
    else cout<<Summation()<<endl;


}
int main()
{

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Absolute_Sum();


return 0;
}
