#include<iostream>
using namespace std;
struct Area{
    double base, height;
    double area(){

        return base*height/2;
    }




};
struct Person{


    int age;
    int best_mark;


    void Print(){

    cout<<"Age: "<<age<<endl<<"Best: "<<best_mark<<endl;



    }




};
int main(){

    Area x,y;
    x.height = 10;
    x.base = 10;
    cout<<x.area()<<endl;

    y = {20,20};
    cout<<y.area()<<endl;




    Person Jisan;
    Jisan = {21,100};
    Jisan.Print();







return 0;
}
