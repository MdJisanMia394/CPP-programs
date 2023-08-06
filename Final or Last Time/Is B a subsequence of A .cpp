#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int A[N], B[M];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int j=0;j<M;j++){
        cin>>B[j];
    }
    int start = 0, cnt = 0;
    for(int i=0;i<M;i++){
        for(int j=start;j<N;j++){
            if(B[i]==A[j]){
                cnt++;
                start = j+1;
                break;
            }
        }
    }
    if(cnt==M){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

return 0;
}
