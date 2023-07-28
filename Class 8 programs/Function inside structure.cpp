#include<iostream>
using namespace std;
struct Area{

    int height,base;
    int area(){
        return height*base/2;

    }

};
int main(){
    Area area1;
    area1.height = 10;
    area1.base = 10;
    cout<<area1.area()<<endl;


return 0;
}
