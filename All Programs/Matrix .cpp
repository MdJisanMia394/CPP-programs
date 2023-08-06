#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    long long int main_diagonal_sum=0;
    for(int i=0;i<n;i++){
        main_diagonal_sum += arr[i][i];
    }
    long long int secondary_diagonal_sum=0;
    for(int i=0,j=n-1;i<n;i++,j--){
        secondary_diagonal_sum += arr[i][j];
    }
    long long int ans = abs(main_diagonal_sum-secondary_diagonal_sum);
    cout<<ans<<endl;










return 0;
}
