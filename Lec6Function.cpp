#include<iostream>
using namespace std;
void hello(){
cout<<"Hello"<<endl;}
void hey(){
hello();

cout<<"hey, how are you"<<endl;

}
int main(){
    cout<<"it is starting point"<<endl;
    hey();
    cout<<"This is the end point"<<endl;






return 0;
}
