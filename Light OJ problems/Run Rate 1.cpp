// Add some code
#include<iostream>
#include<iomanip>
using namespace std;
int total_ball = 50*6;
int expected_run,current_run,valid_ball;


double expected_run_rate_calculation(){
    double expected_run_rate;
    int run_needed = expected_run - current_run+1;
    if(current_run<expected_run){
      expected_run_rate= ((double)run_needed*6) / valid_ball;
    }
    else{
        expected_run_rate =0;
   }

    return expected_run_rate;
//cout<<run_needed<<endl<<valid_ball<<endl;

}
int main(){

    int t;
    cin>>t;
    while(t--){

        double current_run_rate;
        cin>>expected_run>>current_run>>valid_ball;
        current_run_rate =(double)(current_run*6) / (total_ball-valid_ball);
       cout<<fixed<<setprecision(2)<<current_run_rate<< ' '<<expected_run_rate_calculation()<<endl;
    // expected_run_rate_calculation();

    }

    return 0;
}
