#include <iostream>

using namespace std;

int binaryToDecimal(int x)
{
    int basepower=1;
    int total=0;

    while (x!=0)
    {
        total=total+(x%10)*basepower;
        x=x/10;
        basepower=basepower*2;
    }

    return total;
}

int main()
{
    int n;
    cout << "Enter binary number:" << endl;
    cin>>n;
    cout<<"Decimal:"<<binaryToDecimal(n);
    return 0;
}
