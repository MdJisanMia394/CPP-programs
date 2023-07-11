#include<iostream>
using namespace std;
void down();
void up(){
    cout<<"Up\n";
    down();

}
void down(){
    cout<<"Down\n";
    up();


}
int main(){

    up();






return 0;
}





