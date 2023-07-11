// Add some code
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int t;cin>>t; cin.ignore();
    while(t--){
        char str[1010];

        cin.getline(str,1010);
        int length = strlen(str);
        int cnt=0;
        for(int i=0;i<length;i++){
            if(str[i]=='a' || str[i]== 'e' || str[i]=='i' || str[i]== 'o' || str[i]=='u'){
                cnt++;
            }
        }
        cout<<"Number of vowels = "<<cnt<<endl;
    }

    return 0;
}
