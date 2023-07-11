#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a=20,b=10;
    cout<<"Max of a and b: "<<max(a,b)<<endl;
    cout<<"Min of a and b: "<<min(a,b)<<endl;

    int c;
    c=50;
    cout<<"Max of a,b and c is: "<<max(a,max(b,c))<<endl;
    cout<<"Min of a,b and c is: "<<min(a,min(b,c))<<endl;
   //finding 10 numbers max

   cout<<"Max of 11 numbers is: "<<max(10,max(20,max(30,max(40,max(50,max(60,max(70,max(80,max(90,max(100,110))))))))))<<endl;



return 0;
}
