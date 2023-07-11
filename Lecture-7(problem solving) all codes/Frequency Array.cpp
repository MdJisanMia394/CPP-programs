#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;row++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<row;i++){
        reverse(arr+i,arr+col);
    }
     for(int i=0;i<row;row++){
        for(int j=0;j<col;j++){
           cout<<arr[i][j];
        }
        cout<<endl;
    }










return 0;
}
