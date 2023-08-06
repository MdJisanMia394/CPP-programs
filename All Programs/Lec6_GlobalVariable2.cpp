
#include<iostream>
using namespace std;
int x;
void up()
{
    cout << x << '\n';
}

void down()
{
    cout << x << '\n';
}

int main()
{
    x = 10;
    up();
    down();
    return 0;
}
