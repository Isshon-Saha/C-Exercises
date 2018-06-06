#include <iostream>
#include<string>

using namespace std;

string init="A";

void Simple_Reflex_Action(string arr[2])
{
    if(arr[1]=="Dirty")
    {
        if(init != arr[0])
        {
            cout<<"Moved from "<<init<<" to "<<arr[0]<<"\n";
            init=arr[0] ;
            cout<<"Cleaned "<<init<<"\n";
        }
        else if(init == arr[0])
        {
            cout<<"Cleaned "<<init<<"\n";
        }
    }
    else if(arr[1]=="Clean")
    {
        if(init != arr[0])
        {
            cout<<"Moved from "<<init<<" to "<<arr[0]<<"\n";
            init=arr[0] ;
            cout<<"Already Clean\n";
        }
        else if(init == arr[0])
        {
            cout<<"Already Clean\n";
        }
    }
}

int main()
{
    int l=0,s=0;
    string n;
    string loc;
    string st;
    string a[2];
    cout<<"Enter the starting location:\n";
    cin>>n;
    init=n;

    while(1)
    {

        cout<<"Enter the location(1 for A,2 for B):\n";
        cin>>l;
        if(l==1)
            a[0]="A";
        else if(l==2)
            a[0]="B";
        else
            {cout<<"incorrect input";
            break;}
        cout<<"Enter the status(1 for Clean,2 for Dirty):\n";
        cin>>s;
        if(s==1)
            a[1]="Clean";
        else if(s==2)
            a[1]="Dirty";
        else
            {cout<<"incorrect input";
            break;}
        Simple_Reflex_Action(a);
        char c;
        cout<<"Do u want to continue?(y for yes,n for no)\n";
        cin>>c;
        if(c=='n')
        {
            break;
        }

    }
        return 0;
}
