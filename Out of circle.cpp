#include<iostream>
#include<cmath>
using namespace std;

double Distance(int cen_x, int cen_y, int x, int y)
{

    return sqrt((double)(cen_x-x)*(cen_x-x) + (double)(cen_y-y)*(cen_y-y));

}
int main(){
    int t;cin>>t;
    while(t--){
        int cen_x,cen_y,radius;
        cin>>cen_x>>cen_y>>radius;
        int x,y;
        cin>>x>>y;
        double distance = Distance(cen_x, cen_y,  x,  y);
        if(distance<=radius){
            cout<<"The point is inside the circle"<<endl;
        }
        else{
            cout<<"The point is not inside the circle"<<endl;
        }
    }


    return 0;
}
