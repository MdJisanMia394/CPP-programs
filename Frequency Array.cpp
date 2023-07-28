#include<iostream>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int a[N],b[M];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<M;i++){
        cin>>b[i];
    }
    int current_index=-1;
    for(int b_index=0;b_index<M;b_index++){
        int next_index=-1;
        for(int a_index=current_index+1;a_index<N;a_index++){
            if(a[a_index]==b[b_index]){
                next_index = a_index;
                break;
            }
        }
        if(next_index==-1){
            cout<<"NO\n";
            return 0;
        }
        else{
            current_index=next_index;
        }

    }

    cout<<"YES\n";







return 0;
}
