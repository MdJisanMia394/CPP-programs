#include<iostream>
#include<iomanip>
using namespace std;
int n;
int fact(int x)
{
   int factorial = 1;
    for(int i=1;i<=x;i++){
        factorial *= i;
    }

    return factorial;

}
double sum()
{
    double sum=0;
    for(int i=1;i<=n;i++){
        sum += ((double)i/fact(i));
    }

   return sum;

}
int main(){
    int t;
    cin>>t;
    while(t--){

        cin>>n;
        cout<<fixed<<setprecision(4)<<sum()<<endl;
    }


    return 0;
}
