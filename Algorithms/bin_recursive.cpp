#include <iostream>

using namespace std;

int binarySearch(int a[],int value,int low,int high)
{
    int mid;

    if(high<low)
        return -1;

    mid=(low+high)/2;

    if(a[mid]>value)
    {
        binarySearch(a,value,low,mid-1);
    }
    else if(a[mid]<value)
    {
        binarySearch(a,value,mid+1,high);
    }
    else
    {
        return mid;
    }
}

int main()
{
    int size,arr[50],data,result,i;

    cout<<"Enter the size of the array:\n";
    cin>>size;

    cout<<"Enter the contents of the array:\n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the value you want to find:\n";
    cin>>data;

    result=binarySearch(arr,data,0,size-1);

    if(result==-1)
    {
        cout<<"Value not found\n";
    }
    else
    {
        cout<<"Value found at "<<result+1<<" Index\n";
    }

    return 0;
}
