#include <iostream>

using namespace std;

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
    int m,n;
    cout<<"Enter the elements you want to multiply:"<<endl;
    cin>>m>>n;
    naiveMultiplication(m,n);
    return 0;
}
