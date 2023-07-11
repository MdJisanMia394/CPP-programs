#include<iostream>
using namespace std;

int main()
{
   int n,m;cin>>n>>m;
   while(n>0 && m>0){
       if(n>m) {
           swap(m,n);
       }
       int sum=0;
       for(int i=n;i<=m;i++){
           sum += i;
           cout<<i<<' ';

       }
       cout<<"sum ="<<sum<<endl;
       cin>>n>>m;
   }
return 0;
}
