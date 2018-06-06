#include <iostream>

using namespace std;

int decimalToBinary(int x)
{
   int a[50];
   int i=0,r;
   while(x!=0)
   {
      r = x%2;
      a[i] = r;
      x=x/2;
      i++;
   }

   cout<<"Binary:\n";

   for(int j=i-1;j>=0;j--)
       cout<<a[j];

   return 0;
}

int main()
{
    int x;
    cout<<"Enter the Decimal number:\n";
    cin>>x;
    decimalToBinary(x);

    return 0;
}
