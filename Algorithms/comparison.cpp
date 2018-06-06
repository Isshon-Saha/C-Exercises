#include <iostream>
#include <ctime>
#include <cstdio>

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
    clock_t start=clock();
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
    clock_t end=clock();
    clock_t dur=end-start;
    cout<<"Required time: "<<dur/(double)CLOCKS_PER_SEC<<" s "<<endl;
}

void insertion(int a[],int size)
{
    int i,key,j;
    clock_t duration;
    duration=clock();
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
    double time=clock()-duration;
    cout<<"Required time: "<<time/(double)CLOCKS_PER_SEC<<" s "<<endl;

}

void selection(int a[],int size)
{
    int i,j,min;
    clock_t duration;
    duration=clock();
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
    double time=clock()-duration;
    cout<<"Required time: "<<time/(double)CLOCKS_PER_SEC<<" s "<<endl;

}



void display(int size)
{
    int arr[50],i,s;

    cout<<"Start input: "<<endl;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Which algorithm would you prefer?"<<endl<<"1.Bubblesort  2.Insertion sort  3.Selection sort"<<endl;
    cin>>s;
    switch(s)
    {
    case 1:
        bubble(arr,size);
        break;
    case 2:
        insertion(arr,size);;
        break;
    case 3:
        selection(arr,size);
        break;
    }

    cout<<"Sorted array: "<<endl;

    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int num,i,j;
    cout << "Enter the maximum size of the array: " << endl;
    cin>>num;

    display(num);

    for(j=1;j<3;j++)
    {
      cout<<"\nWould you like to go again? "<<endl<<"1.yes  2.no "<<endl;
      cin>>i;

      if(i==1)
      {
        display(num);
      }
      else
      {
          break;
      }
    }

    return 0;
}
