#include<iostream>
#include<iomanip>
using namespace std;

int n;
 double arr[10000];

double Average(){
    double Sum =0;
    for(int i=0;i<n;i++){
        Sum = Sum+arr[i];
    }
    return Sum;
}
int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<fixed<<setprecision(7)<<Average()/n<<endl;







return 0;
}
