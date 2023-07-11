#include<iostream>
using namespace std;

int main(){
    int N1,N2;cin>>N1>>N2;
    int NO=0;
    for(int n=N1;n<=N2;n++){
        int a,C=0,siz=sizeof(n);
        for(int i=1;i<=siz-1;i++){
            a=n%10;
            n=n/10;
            if(a==4 || a==7){
                C++;
            }
        }
        if(C==siz){
            cout<<n<<' ';
            NO++;
        }

    }
    if(NO==0){
        cout<<-1<<endl;
    }



return 0;
}
