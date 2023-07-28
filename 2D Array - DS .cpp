#include<iostream>
#include<climits>
using namespace std;

int main(){


    int arr[6][6];
    for(int row=0;row<6;row++){
        for(int col=0;col<6;col++){
            cin>>arr[row][col];
        }
    }
    int sum[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            sum[i][j]=0;
        }
    }
    for(int row=1;row<5;row++){
        for(int col=1;col<5;col++){
            sum[row][col]=arr[row-1][col-1]+arr[row-1][col]+arr[row-1][col+1]+arr[row][col]+arr[row+1][col-1]+arr[row+1][col]+arr[row+1][col+1];

        }

    }

    int maximum = INT_MIN;
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            if(sum[i][j]>maximum){
                maximum = sum[i][j];
            }
        }
    }
    cout<<maximum<<endl;



return 0;
}
