#include<iostream>
using namespace std;

int main(){

    int num = 100;
    int *ptr = &num;
    cout<<"Value of pointer is : "<<*ptr<<endl;
    cout<<"Address of pointer is: "<<ptr<<endl;
    cout<<"Accessing pointers another way "<<&num<<endl;
    cout<<"Accessing value another way "<<*&num<<endl;


return 0;
}

