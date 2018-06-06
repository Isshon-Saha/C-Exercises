#include <iostream>
#include<cstdlib>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
void bubble(int st[],int fi[],int ind[],int size)
{
    int i,j;
    int swaps=0;
    for(i=1;i<size;i++)
    {
        for(j=0;j<=size-i;j++)
        {
            if(fi[j]>fi[j+1])
            {
                swap(st[j],st[j+1]);
                swap(fi[j],fi[j+1]);
                swap(ind[j],ind[j+1]);
                swaps++;
            }

        }
        if(swaps==0)
            break;
        swaps=0;
    }
//    clock_t end=clock();
//    clock_t dur=end-start;
//    cout<<"Required time: "<<dur/(double)CLOCKS_PER_SEC<<" s "<<endl;
}

void activity(int s[],int f[],int in[],int n)
{
    int a[50],m,t=20;
    a[0]=in[0];
    int count=0;
    int i=1;

    for(m=2;m<n;m++)
    {
        if(s[m]>=f[i])
        {
            a[i]=in[m];
            count++;
            i=m;
        }
    }

    cout<<"Sorted array:\n";
    for(i=0;i<count;i++)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{
    int n,s[50],f[50],i=0,in[50];
    cout << "Enter the size of the arrays:" <<endl;
    cin>>n;

    cout<<"Enter the start times:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    cout<<"Enter the finishing times:\n";
    for(i=0;i<n;i++)
    {
        cin>>f[i];
    }
    for(i=0;i<n;i++)
    {
        in[i]=i;
    }

    bubble(s,f,in,n);


    activity(s,f,in,n);
    return 0;
}
