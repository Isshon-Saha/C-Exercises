#include<bits/stdc++.h>

using namespace std;

const int a= 999;
const int Lim = 999;
int N, E, mat[a][a], distence[a], parent[a];
int start,finish,path[a];

int main(){
    for( int i = 0; i < a; i++ )
    {
        parent[i] = -1;
        distence[i] = Lim;

        for( int j = 0; j < a; j++ )
        {
            mat[i][j] = -Lim;
        }
    }


    cout<<"Enter Number of Nodes and Edges:"<<endl;

    cin >> N >> E;
    int h[N];
    cout<<"Input all the Edges with path cost:"<<endl;
    for( int i = 0; i < E; i++ )
    {
        int u, v, w;
        cin >> u >> v >> w;
        mat[u][v] = w;
    }
    cout<<"Input the heurestic value :"<<endl;
    for(int i=0;i<N;i++){
        cin>>h[i];
    }

    cout << "Enter the start node: ";
    cin >> start;
    cout << "Enter the goal node: ";
    cin >> finish;
    distence[start] = 0;

    pair <int, int> nd;
    priority_queue < pair<int, int> > PQ;

    nd.first = 0;
    nd.second = start;

    PQ.push(nd);

    while( !PQ.empty() )
    {
        nd = PQ.top();
        PQ.pop();



        int u = nd.second;

        for(int v = 0; v < N; v++)
        {
            if(mat[u][v] != -Lim)
            {
                if(distence[v] + h[v] > distence[u] + mat[u][v])
                {
                    distence[v] = distence[u] + mat[u][v];

                    parent[v] = u;

                    nd.first = distence[v];
                    nd.second = v;

                    PQ.push(nd);
                }
            }
        }
    }
    cout << "Total Path Cost in A* =" << distence[finish] << endl;

    int i=0;
    while(1)
    {
        path[i] = finish;
        finish = parent[finish];

        if(start==path[i])
            break;

        i++;
    }
      while(i>=0)
    {
        cout << path[i] << " ";

        i--;
    }

}

/*
5 7
0 1 1
0 2 4
1 2 2
1 3 5
1 4 12
2 3 2
3 4 3

7 6 2 1 0
*/
