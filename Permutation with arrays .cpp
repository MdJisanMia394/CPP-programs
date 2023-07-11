#include<iostream>
#include<algorithm>
using namespace std;
const int max_size=1000;
int n;
int A[max_size], B[max_size];
bool Permutation_or_not()
{
    sort(A,A+n);
    sort(B,B+n);
    for(int i=0;i<n;i++){
        if(A[i] != B[i]){
            return false;
        }
    }
    return true;
}
int main(){

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }

    if(Permutation_or_not()){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

return 0;
}
