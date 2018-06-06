#include<iostream>

using namespace std;

const int SZ = 999;
int adjMat[SZ][SZ], N, E;
int col[SZ], dis[SZ], fin[SZ], vt;

void DFSvisit( int u ) {
    col[u] = 1;
    dis[u] = ++vt;

    for( int v = 0; v < N; v++ ) {

        if( adjMat[u][v] == 1 ) {
            if( col[v] == 0 )
           {
                cout << v << " ";
                DFSvisit( v );
            }

        }
    }
    fin[u] = ++vt;
    col[u] = 2;
}

void DFS(int c) {
    for( int i = 0; i < N; i++ ) {
        col[i] = 0;
    }
    vt = 0;
    cout << " path -> " <<c<<" ";
    for( int i = 0; i < N; i++ ) {
        if( col[i] == 0 ) {

            DFSvisit( i );

        }
    }
}

int main() {
    for( int i = 0; i < SZ; i++ ) {
        for( int j = 0; j < SZ; j++ ) {
            adjMat[i][j] = 0;
        }
    }
    cout<<"ENTER THE NODE AND EDGES"<<endl;
    cin >> N >> E;
    for( int i = 0; i < E; i++ ) {
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
    }
    cout << endl;
    for( int i = 0; i < N; i++ ) {
        for( int j = 0; j < N; j++ ) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Edges and Type (starting dfs from 0):\n";
    int a=0;

    DFS(a);
    cout << endl;
    return 0;
}
/*

7 7
0 1
0 2
0 3
1 4
1 5
2 6
3 6
*/

