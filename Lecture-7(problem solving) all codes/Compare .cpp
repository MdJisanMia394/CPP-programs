#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){

    int max_size=21;
    char str1[max_size],str2[max_size];
    cin>>str1>>str2;

    int length1=strlen(str1), length2= strlen(str2);
    if(length1<=length2){
        sort(str1,str1+length1);
        cout<<str1<<endl;
    }
    else{
        sort(str2,str2+length2);
        cout<<str2<<endl;
    }

return 0;
}
