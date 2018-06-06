#include<iostream>
using namespace std;
int fact(int a,int b,int k);
int main()
{
int k=25;
int a=0,b=1;



fact(a,b,k);


}

int fact(int a,int b,int k)
{
    int j=k;
    int d,c,l;
	c=a;
	d=b;
    while(j>0)
    {

cout<<"\n"<<a;
k = a + b;
a = b;
b = k;
j--;
    }
return 0;
}
