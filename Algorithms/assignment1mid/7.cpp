#include <iostream>

using namespace std;

int linearSearch(int *array,int data)
{
    int i;
    for(i=0;i<5;i++)
    {
        if(array[i]==data)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[5],i,n,result;

    cout<<"Enter the contents of the array[array limit=5]:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the number you want to find:"<<endl;
    cin>>n;

    result=linearSearch(a,n);

    if(result==-1)
    {
        cout<<"Data not found\n";
    }
    else
    {
        cout<<"Result found in "<<result+1<<" index of the array provided\n";
    }

    return 0;
}
