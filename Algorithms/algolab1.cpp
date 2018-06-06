#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int bubble1(int st[],int size)
{
    int i,j;
    int loopcount=0;
    int swaps=0;
    for(i=1;i<size;i++)
    {
        for(j=0;j<=size-i;j++)
        {
            if(st[j]>st[j+1])
            {
                loopcount++;
                swap(st[j],st[j+1]);
                swaps++;
            }

        }
        if(swaps==0)
            break;
        swaps=0;
    }
    return loopcount;
}
int bubble2(int st[],int size)
{
   int i,j;
   int loopcoun=0;
   int swaps=0;
   for(i=1;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(st[j]>st[j+1])
            {
                loopcoun++;
                swap(st[j],st[j+1]);
                swaps++;
            }

        }
        if(swaps==0)
            break;
        swaps=0;
    }

    return loopcoun;
}

int bubble3(int st[],int size)
{
   int i,j;
   int loopcou=0;
   for(i=1;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(st[j]>st[j+1])
            {
                loopcou++;
                swap(st[j],st[j+1]);

            }
        }
    }
    return loopcou;
}


int main()
{
    int student[50],num,i,j,count;
    int swaps=0;
    cout<<"Enter the array limit:"<<endl;
    cin>>num;
    cout<<"Enter the contents of the array:"<<endl;
    for(i=0;i<num;i++)
    {
        cin>>student[i];
    }
    count=bubble3(student,num);
    cout<<"The loop ran a total of: "<<count<<" Times "<<endl;
    cout<<"Ascending order:"<<endl;
    for(i=0;i<num;i++)
    {
        cout<<student[i]<<endl;
    }


    return 0;
}
