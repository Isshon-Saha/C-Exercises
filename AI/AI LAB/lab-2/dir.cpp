#include<iostream>
using namespace std;
int adjMat[100][100];
int n,e;


int main ()
{
    int u,v,w, sum=0,a;
    for(int i=0; i<100; i++)
    {
        for(int j=0; j<100; j++)
        {
            adjMat[i][j]=0;
        }
    }
    cout<<"enter the node and edge number :"<<endl;
    cin>> n >> e;
    for (int i=0; i<e; i++)
    {

        cin >> u >> v ;
        adjMat[u][v]=1;
    }
cout<<endl<<"ADJENCEY MATRIX"<<endl;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout <<" "<<adjMat[i][j];
        }
        cout <<endl;
    }

    cout<<endl<<"enter the neighbors of node no :- ";

cin>>a;
    for (int i=1; i<=a; i++)
    {
        cout<<endl<<i<<":--";



        for(int j=1; j<=a; j++)
        {

            if (adjMat[i][j]==1)
            {
                cout<<j<<";";
            }
        }
    }

cin.get();
    return 0;
}


/* values
10 12

1 2
1 3
2 4
2 7
3 4
4 7
4 5
5 6
6 7
7 8
7 9
10 9
*/
