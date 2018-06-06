#include <iostream>
#include <ctime>

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

int naiveMultiplication(int x,int y)
{
    int sum=x;
    int i;
    for(i=1;i<y;i++)
    {
        sum=sum+x;
    }
    cout<<"Result:"<<sum<<endl;
}

int main()
{
    clock_t st,end;
    clock_t st1,st2;
    int m,n;
    cout<<"Enter the elements you want to multiply:"<<endl;
    cin>>m>>n;
    st=clock();
    naiveMultiplication(m,n);
    end=clock()-st;
    st1=clock();
    naiveMultiplicationVersion2(m,n);
    st2=clock()-st1;
    if(end<st2)
    {
        cout<<"method 1 is better\n";
    }
    else if(st2<end)
    {
        cout<<"method 2 is better\n";
    }
    return 0;
}
