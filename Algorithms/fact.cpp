#include <iostream>

using namespace std;

int fact(int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
        return fact(i-1)*i;
    }
}

int main()
{
    int n;
    cout<<"Enter the number you want factorial of:"<<endl;
    cin>>n;
    cout<<"Result : "<<fact(n)<<endl;
    return 0;
}
