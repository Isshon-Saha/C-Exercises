#include <iostream>

using namespace std;

int time,color[50],d[50],f[50],s;
char p[50];

DFS_visit(int o,int v[][50])
{
    color[o]=1;

    time=time+1;

    d[o]=time;

    int i,j;

    for(i=1;i<=s;i++)
    {
       if(v[o][i]==1 && color[i]==0)
        {
                p[i]=o;
                DFS_visit(i,v);
        }
    }
    color[o]=2;
    time++;
    f[o]=time;
}

void DFS(int v[][50])
{
    int i;

    for(i=1;i<=s;i++)
    {
        color[i]=0;
    }

    time=0;

    for(i=1;i<=s;i++)
    {
        if(color[i]==0)
        {
            DFS_visit(i,v);
        }
    }
}

int main()
{
    int v[50][50],i,j,sc[50][50];
    char n[50];

    cout << "Enter the no. of nodes:" << endl;
    cin >>s;

    cout<<"Enter the nodes:"<<endl;
    for(i=1;i<=s;i++)
    {
        cin>>n[i];
    }

    cout<<"Enter the adjacency matrix:\n";

    for(i=1;i<=s;i++)
    {
        for(j=1;j<=s;j++)
        {
            cin>>v[i][j];
        }
    }


    DFS(v);

    for(i=1;i<=s;i++)
    {
        cout<<"\nFor "<<n[i]<<":"<<d[i]<<" / "<<f[i]<<endl;

    }


    return 0;
}
