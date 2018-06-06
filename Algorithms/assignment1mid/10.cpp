#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
void bubble(int st[],int size)
{
    int i,j;
    int swaps=0;
    for(i=1;i<size;i++)
    {
        for(j=0;j<=size-i;j++)
        {
            if(st[j]>st[j+1])
            {
                swap(st[j],st[j+1]);
                swaps++;
            }

        }
        if(swaps==0)
            break;
        swaps=0;
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

    bubble(arr,num);

    cout<<"Sorted array: "<<endl;

    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
