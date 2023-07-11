#include<iostream>
using namespace std;


int main(){
     int number;
    int number_of_rows,number_of_colums;

    cin>>number_of_rows>>number_of_colums;
    int arr[number_of_rows][number_of_colums];
    for(int i=0;i<number_of_rows;i++){
        for(int j=0;j<number_of_colums;j++){
            cin>>arr[i][j];
        }
    }

    cin>>number;

    for(int i=0;i<number_of_rows;i++){
        for(int j=0;j<number_of_colums;j++){
            if(number==arr[i][j]){
               cout<<"will not take number"<<endl;
               return 0;
            }

        }
    }
    cout<<"will take number"<<endl;




return 0;
}
