#include<iostream>
using namespace std;

int main()
{



    int arr[5]={8,2,14,1,83};
    int arrCount[5];
    for(int i=0;i<5;i++){
        arrCount[i]=0;
    }
    for(int num=0;num<5;num++){
        for(int i=1;i<=5;i++){
            if(arr[num]%i==0){
                arrCount[num]++;
            }
        }
    }
    int Max=arrCount[0];
    for(int i=0;i<5;i++){
        if(arrCount[i]>Max){
            Max=arrCount[i];
        }
        else if(arrCount[i]==Max){
            if(arr[i]>arr[i-1]){
                Max = arr[i];
            }
            else {
                Max = arr[i-1];
            }
        }
    }
    cout<<Max<<endl;






    return 0;

}
