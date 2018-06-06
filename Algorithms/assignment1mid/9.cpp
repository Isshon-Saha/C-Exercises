#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

void insertion(int a[],int size)
{
    int i,key,j;
    for(i=1;i<size;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
           swap(a[j+1],a[j]);
           j=j-1;
        }
        a[j+1]=key;
    }

}

int main()
{
    int num,i,j,arr[50];

    cout << "Enter the maximum size of the array: " << endl;
    cin>>num;
    cout<<"Start input: "<<endl;

    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    insertion(arr,num);

    cout<<"Sorted array: "<<endl;

    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

