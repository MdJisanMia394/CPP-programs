
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x,y;
    cin>>x>>y;
    if(arr[x-1][y-1]=='x' && arr[x-1][y]=='x' && arr[x-1][y+1]=='x' && arr[x][y-1]=='x' && arr[x][y+1]=='x' && arr[x+1][y-1]=='x' &&arr[x+1][y]=='x' && arr[x+1][y+1]=='x'){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }



}
