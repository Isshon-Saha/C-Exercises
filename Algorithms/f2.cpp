#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void bubble(int s[],int f[],int ind[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(f[j]>f[j+1])
            {
                swap(f[j],f[j+1]);
                swap(ind[j],ind[j+1]);
                swap(s[j],s[j+1]);
            }
        }
    }
}

void activity(int s[],int f[],int in[],int n)
{
    int a[50],m,k=1;
    a[0]=in[0];

    int i=0;

    for(m=1;m<n;m++)
    {
        if(s[m]>=f[i])
        {
            a[k++]=in[m];
            cout<<"ind:"<<in[m]<<endl;
            //count++;


        }
         i=m;
    }

    cout<<"\nFollowing activities are selected:\n";
    for(i=0;i<k;i++)
    {
        cout<<a[i]<<endl;
    }
}


int main()
{
    int i,s[50],ind[50],fi[50],n;
    cout << "Enter the size of the array:" << endl;
    cin>>n;
    cout<<"Enter the elements of the start time array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        ind[i]=i;
    }
    cout<<"Enter the elements of the finish time array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>fi[i];
    }
    bubble(s,fi,ind,n);
    cout<<"Sorted start:\n";
    for(i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<"\nSorted fi\n";
     for(i=0;i<n;i++)
    {
        cout<<fi[i]<<" ";
    }
    cout<<"\nSorted ind:\n";
    for(i=0;i<n;i++)
    {
        cout<<ind[i]<<" ";
    }
    activity(s,fi,ind,n);
    return 0;
}
