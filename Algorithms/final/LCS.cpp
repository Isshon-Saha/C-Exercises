#include <iostream>
#include <string>

using namespace std;

void print_LCS(string b[][50],char x[],int i,int j)
{
    if(i==0 || j==0)
    {
        return;
    }
    if(b[i][j] == "copy")
    {
//        cout<<x[i];
        print_LCS(b,x,i-1,j-1);
        cout<<x[i];
    }
    else if(b[i][j]=="skipX")
    {
        print_LCS(b,x,i-1,j);
    }
    else
    {
        print_LCS(b,x,i,j-1);
    }
}

void lcs_length(char x[],char y[],int m,int n)
{
    string b[50][50];
    int c[50][50],i,j;
    for(i=1;i<=m;i++)
    {
        c[i][0]=0;
    }
    for(j=0;j<=n;j++)
    {
        c[0][j]=0;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i]==y[j])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]="copy";
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]="skipX";
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]="skipY";
            }
        }
    }
    cout<<"Length:"<<c[m][n]<<"\n";
    print_LCS(b,x,m,n);
}

int main()
{
    int m,n,i;
    char s1[50],s2[50];
    cout << "Enter the size of the first sequence:" << endl;
    cin>>m;
    cout<<"Enter the first sequence:\n";
    for(i=1;i<=m;i++)
    {
        cin>>s1[i];
    }
    cout << "Enter the size of the second sequence:" << endl;
    cin>>n;
    cout<<"Enter the second sequence:\n";
    for(i=1;i<=n;i++)
    {
        cin>>s2[i];
    }
    lcs_length(s1,s2,m,n);
    return 0;
}
