#include <iostream>

using namespace std;

int naiveMultiplicationVersion2(int x,int y)
{
    if(x%2==0)
    {
        x=x/2;
        y=y<<x;
        cout<<"Result:"<<y<<endl;
        return y;
    }
    else if(y%2==0)
    {
        y=y/2;
        x=x<<y;
        cout<<"Result:"<<x<<endl;
        return x;
    }
    else
    {
        if(x>y)
        {
           x=x/2;
           y=y<<x;
           cout<<"Result(not perfect):"<<y<<endl;
           return y;
        }
        if(y>x)
        {
            y=y/2;
            x=x<<y;
            cout<<"Result(not perfect):"<<x<<endl;
            return x;
        }
    }
}

int main()
{
    int m,n;
    cout << "Enter the numbers you want to multiply:" << endl;
    cin>>m>>n;
    naiveMultiplicationVersion2(m,n);
    return 0;
}
