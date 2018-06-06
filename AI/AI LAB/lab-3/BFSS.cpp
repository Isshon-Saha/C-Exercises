#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int cost[10][10];
int i,j,k,n;
int qu[10],front;
int rare,v;
int visit[10],visited[10];

int main()
{
int m;
cout <<"enter no of node and edge :"<<endl;
cin >> n;
cin >> m;

for(k=1;k<=m;k++)
{
cin >>i>>j;
cost[i][j]=1;
}

cout <<"enter initial vertex : ";
cin >>v;
cout <<endl<<"Visited vertices"<<endl;
cout << v << " ";
visited[v]=1;
k=1;
while(k<m)
{
for(j=0;j<=m;j++)
if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
qu[rare++]=j;
}
v=qu[front++];
cout<<v << " ";
k++;
visit[v]=0; visited[v]=1;
}
}

/*
9 9
1 2
2 3
1 5
1 4
4 7
7 8
8 9
2 6
5 7
*/
