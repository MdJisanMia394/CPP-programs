#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int max_size=1000000;
    char str[max_size];
    cin.getline(str,max_size);
    for(int i=0;i<=strlen(str);i++){
      if('\\' == str[i]){
          break;
      }
      cout<<str[i];
    }
    cout<<endl;

return 0;
}
