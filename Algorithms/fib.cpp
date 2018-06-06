#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main()
{
    int m,i;
    cout<<"Enter the num of elements:"<<endl;
    cin>>m;
    for(i=1;i<=m;i++)
    cout<<fibonacci(i)<<" ";
    return 0;
}
