#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
void bubble(int pe[],int w[],int v[],int ind[],int size)
{
    int i,j;
    int swaps=0;
    for(i=1;i<size;i++)
    {
        for(j=0;j<=size-i;j++)
        {
            if(pe[j]>pe[j+1])
            {
                swap(ind[j],ind[j+1]);
                swap(pe[j],pe[j+1]);
                swap(w[j],w[j+1]);
                swap(v[j],v[j+1]);
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

void frac(int pe[],int w[],int v[],int ind[],int size)
{
    int i,cap,pro,weight,k=0;
    float x[50];
    cout<<"\nEnter the max capacity:"<<endl;
    cin>>cap;
    for(i=0;i<size;i++)
    {
        x[i]=0;
    }
    weight=0;
    while(weight<cap)
    {
        i=ind[k++];
        if(weight+w[i]<=cap)
        {
            x[i]=1;
            weight=weight+w[i];
        }
        else
        {
            x[i]=(float)(cap-weight)/w[i];
            weight=cap;
        }
    }

//    cout<<"Total value gained:\n";
//
//    for(i=0;i<size;i++)
//    {
//        if(x[i]==1)
//        {
//         pro=pro+(w[i]*v[i]);
//        }
//        else
//        {
//            pro=pro+(v[i]*(w[i]*x[i]));
//        }
//
//    }
}

int main()
{
    int n,i,w[50],v[50],ind[50],pe[50];
    cout << "Enter the no. of items ready for stealing:" << endl;
    cin>>n;
    cout<<"Enter the corresponding weights and values:\n";

    for(i=0;i<n;i++)
    {
        cout<<"\nItem no."<<i+1<<"\n";
        cout<<"weight:";
        cin>>w[i];
        cout<<"value:";
        cin>>v[i];
        ind[i]=i;
        pe[i]=v[i]/w[i];
    }

    bubble(pe,w,v,ind,n);
    frac(pe,w,v,ind,n);
    return 0;
}
