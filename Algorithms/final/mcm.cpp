#include <iostream>

using namespace std;
#define inf 99999999999999999
int s[100][100];

void print(int i,int j)
{
    if(i==j)
    {
        cout<<"A"<<i;
    }
    else
    {
        cout<<"(";
        print(i,s[i][j]);
        print(s[i][j]+1,j);
        cout<<")";
    }
}

void matrix_Chain_Order(int d[],int n)
{
    int i,M[100][100],len,j,k,q;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            M[i][i]=0;
            M[i][j];
        }

    }
//     for(i=1;i<=n;i++)
//    {
//        for(j=1;j<=n;j++)
//        {
//            cout<<M[i][j];
//        }
//        cout<<endl;
//    }
    for(len=2;len<=n;len++)
    {
        for(i=1;i<=(n-len+1);i++)
        {
            j=i+len-1;
            M[i][j]=inf;
            for(k=i;k<=j-1;k++)
            {
                q=M[i][k]+M[k+1][j]+(d[i-1]*d[k]*d[j]);
                if(q<M[i][j])
                {
                    M[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
   cout<<"Minimum cost:"<<M[1][n ]<<endl;
    print(1,n);
// for(len=2;len<=n;len++)
//    {
//        for(i=1;i<=(n-len+1);i++)
//        {
//            j=i+len-1;
//           cout<<M[i][j]<<" ";
//        }
//        cout<<endl;
//    }

}

int main()
{
    int s,i,d[50];
    cout<<"Enter the no. of matrices"<<endl;
    cin>>s;
    cout << "Enter the dimensions of the matrix:" << endl;
    for(i=0;i<=s;i++)
    {
        cin>>d[i];
    }

    matrix_Chain_Order(d,s);
    return 0;
}
