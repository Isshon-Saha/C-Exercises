#include <iostream>

using namespace std;

int main()
{
    int s,m,v[50][50],i,j,k;
    char n[50],a[50],b[50];
    cout << "Enter the no. of nodes:" << endl;
    cin >>s;
    cout<<"Enter the no. of edges:"<<endl;
    cin>>m;
    cout<<"Enter the nodes:"<<endl;
    for(i=1;i<=s;i++)
    {
        cin>>n[i];
    }
    for(i=1;i<=s;i++)
    {
        for(int j=1;j<=s;j++)
        {
            v[i][j]=0;
        }
    }
    cout<<"Enter the nodes among which there's an edge(alphabetically):\n";
    for(i=1;i<=m;i++)
    {
        cin>>a[i];
        cout<<"-";
        cin>>b[i];
        cout<<"\n";

    }

    for(i=1;i<=s;i++)
    {
        for(int j=1;j<=s;j++)
        {
            int k=1;
            while(k<=s)
                  {
                      if(a[k]==n[i] && b[k]==n[j])
                        {
                            v[i][j]=v[i][j]+1;
                        }
                        k++;
                  }
        }
    }
    for(i=1;i<=s;i++)
    {
        cout<<"\n";
        for(int j=1;j<=s;j++)
        {
            cout<<v[i][j];
        }
    }
    return 0;
}
