#include <iostream>

using namespace std;

void swapFunction(int x,int y)
{
    cout<<"Before swap: "<<endl;
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After swap:"<<endl;
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
}

int main()
{
    swapFunction(2,3);
    return 0;
}
