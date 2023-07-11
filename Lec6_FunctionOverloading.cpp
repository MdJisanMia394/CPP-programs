#include<iostream>
using namespace std;
int get_sum(){
    cout<<"Sum is: "<<10+20<<endl;

}
int get_sum(int x){
    int sum = x+2;
    cout<<"Sum is: "<<sum<<endl;


return sum;
}

int get_sum(int x,int y,int z){

    int sum=x+y+z;
    cout<<"Sum is: "<<sum<<endl;

return sum;
}
int main(){
    get_sum();
    get_sum(100);
    get_sum(100,50,100);
    get_sum(100,510,20);




return 0;
}
