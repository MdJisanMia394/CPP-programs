#include<iostream>
#include<string.h>
using namespace std;
const int max_size=105;
char str[max_size];


int Length()
{
    return strlen(str)-2;

}
char First()
{
    int i=0;

    return str[i];
}
char Last()
{
    int j= strlen(str)-1;

    return str[j];
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        cin>>str;


        if(strlen(str)<= 10){
            cout<<str<<endl;
        }
        else{
            cout<<First()<<Length()<<Last()<<endl;
        }
    }

return 0;
}
