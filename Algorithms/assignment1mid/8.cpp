#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

void selection(int a[],int size)
{
    int i,j,min;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }

        if(min!=i)
        {
            swap(a[i],a[min]);
        }
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

    selection(arr,num);

    cout<<"Sorted array: "<<endl;

    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

