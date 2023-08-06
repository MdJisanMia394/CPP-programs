#include<iostream>
#include<string.h>
using namespace std;
string dial_number = "*266#";
int receiver_account;int Main_Menu(), send_money();
string entered_dial_number;
int prompt;
int Prompting()
{
   if(Main_Menu()){
    if(prompt==1){
        send_money();
    }
   }



}
int dial_number_check()
{
 if(entered_dial_number == dial_number){
    return true;
 }

 return false;
}
int send_money()
{

    cout<<"Enter Receiver jCash Account NO: "<<endl;
    cin>>receiver_account;



}
int Main_Menu()
{
    cout<<"1.Send Money"<<endl;
    cout<<"2.Mobile Recharge"<<endl;
    cout<<"3.Cash Out"<<endl;
    cout<<"4.Pay Bill"<<endl;
    cout<<"5.Download jCash App"<<endl;
    cout<<"6.My jCash"<<endl;
    cout<<"7.Reset PIN"<<endl;
    cin>>prompt;
    Prompting();

return true;
}
int main(){

    cout<<"Dial *266# to continue on jCash"<<endl;
    cin>>entered_dial_number;
    if(dial_number_check()){
        Main_Menu();
       // cin>>
    }
    else{
        cout<<"Invalid Input! Please dial *266# to continue on jCash"<<endl;
    }











return 0;
}
