#include<iostream>
#include<utility>
#include<queue>

using namespace std;



int node;
int edge;
int adjMat[1000][1000], d[1000], par[1000];
int start,finish,path[1000];



void input()
{
    cout<<"ENTER THE Nodes,Edges:"<<endl;
     cin >> node >> edge;


    for( int i = 0; i < edge; i++ )
    {
        int u, v, cost;
        cin >> u >> v >> cost;
        adjMat[u][v] = cost;
    }
}
void output()
{
    cout<< "COST = " << d[finish] << endl;

    int i=0;
    while(1)
    {
        path[i] = finish;
        finish = par[finish];

        if(start==path[i])
            break;

        i++;

    }

    cout<< "TRAVEL DIRECTION = ";
    while(i>=0)
    {
        cout << path[i] << " ";

        i--;
    }

}

void initiate()
{
     for( int i = 0; i < 1000; i++ )
    {
    par[i] = -1;
    d[i] = 1000;
    for( int j = 0; j < 1000; j++ )
    {
    adjMat[i][j] = 1000;
    }
    }
}

void ucs_making()
{
    d[start] = 0;

    pair <int, int> p;
    priority_queue < pair<int, int> > pq;

    p.first = 0;
    p.second = start;

    pq.push( p );

    while( !pq.empty() )
    {
        p = pq.top();
        pq.pop();

        int u = p.second;

        for( int v = 0; v < node; v++ )
        {
        if( adjMat[u][v] != 1000 )
        {
        if( d[v] > d[u] + adjMat[u][v] )
        {
        d[v] = d[u] + adjMat[u][v];
        par[v] = u;
        p.first = d[v];
        p.second = v;
        pq.push( p );
        }
        }
        }
    }
}

int main()
{
    initiate();
    input();
    cout<<endl;
    cout<<endl;
    cout << "DECLERE START NODE: ";
    cin >> start;
    cout<<endl;
    cout<<endl;
    cout << "DECLER GOAL NODE: ";
    cin >> finish;


    ucs_making();


    output();

    return 0;
}

/*
7 10
0 1 5
0 3 3
1 2 1
2 4 6
2 6 8
3 5 2
3 4 2
4 1 4
5 6 3
6 4 4
*/
