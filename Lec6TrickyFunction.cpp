#include<iostream>
using namespace std;


int x;
void yo()
{
    x = 20;
    cout << x << '\n';
}

int main()
{
    x = 10;
    yo();
    cout << x << '\n';
    return 0;
}

