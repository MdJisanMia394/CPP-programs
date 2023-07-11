#include<iostream>
using namespace std;
void Msg();
int get_sum(int ,int);
int main(){

    Msg();
    get_sum(10,20);




return 0;
}
void Msg(){
    cout<<"This is Function Prototype"<<endl;
}

int get_sum(int x,int y){
    int sum=x+y;
    cout<<"Sum is: "<<sum<<endl;


return sum;
}
