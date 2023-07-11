#include<iostream>
using namespace std;

void Swap(int a,int b)
{
 swap(a,b);
 cout<<a<<' '<<b<<endl;
}
int main(){

    int x,y;
    cin>>x>>y;

    Swap(x,y);

return 0;
}
