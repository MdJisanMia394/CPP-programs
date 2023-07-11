#include<iostream>
using namespace std;
int get_sum(int a,int b){
    int sum = a+b;
    return sum;
    cout<<"Sum is: "<<sum<<endl;

}
int main()
{
   int sum1= get_sum(10,20);
   int sum2= get_sum(100,200);
    int sum3= get_sum(10000,200);

    //cout<<sum1<<endl<<sum2<<endl<<sum3<<endl;


    return 0;
}
