#include<iostream>
#include<string.h>
using namespace std;
struct Student{

    char name[200];
    int age;
    int marks;



};
int main(){

    Student Jisan, Nahid;
    char name[10] = "Jisan";
    for(int i=0;name[i]!='\0';i++){
        Jisan.name[i]=name[i];
    }
    Jisan.name[6]='\0';
    Jisan.age= 21;
    Jisan.marks = 65;
    cout<<Jisan.name<<endl<<Jisan.age<<endl<<Jisan.marks<<endl;




return 0;
}
