#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int res1= ceil(1.0*a/b);
    int res2= floor(1.0* a/b);
    int res3= round(1.0* a/b);

    cout<<"floor "<<a<<" / "<<b<<" = "<<res2<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<res1<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<res3<<endl;





return 0;
}

