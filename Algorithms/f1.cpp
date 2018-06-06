#include <iostream>

using namespace std;

int linearsearch(int array[],int val,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(array[i]==val)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int n,a[50],v,res,i;

    cout << "Enter the size of the array:" << endl;
    cin>>n;

    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the value you want to search:\n";
    cin>>v;

    res=linearsearch(a,v,n);

    if(res==-1)
    {
        cout<<"nil\n";
    }
    else
    {
        cout<<"found at index no."<<res<<endl;
    }
    return 0;
}
