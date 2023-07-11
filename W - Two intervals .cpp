#include<iostream>
using namespace std;

int main(){
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    int left_boundaries = max(l1,l2);
    int right_boundaries = min(r1,r2);

    if(left_boundaries<=right_boundaries){
        cout<<left_boundaries<<' '<<right_boundaries<<endl;
    }
    else cout<<-1<<endl;




return 0;
}
