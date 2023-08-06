#include<iostream>
using namespace std;
const int Max_size=1000;
 int arr[Max_size];
 int n;
int Distinct()
{
   bool visited[2001];
   for(int i=0;i<2001;i++){
    visited[i]=false;
   }
   for(int i=0;i<n;i++){
    visited[arr[i]] = true;
   }
   int cnt=0;
   for(int i=0;i<2001;i++){
    if(visited[i]==true){
        cnt++;
    }
   }
  return cnt;

}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i] += 1000;
    }
    cout<<Distinct()<<endl;

return 0;

}
