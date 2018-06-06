#include <iostream>
#include<string>

using namespace std;

string Reflex_Vacuum_Agent(string location,string status)
{
    if (status=="Dirty")
    {
        return "Suck";
    }
    else if(location=="A")
    {
        return "Right";
    }
    else if(location=="B")
    {
        return "Left";
    }
}

int main()
{
    int l,s;
    string loc;
    string st;
    string a[2];
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
        loc=a[0];
        st=a[1];
        cout<< "Action:"<<Reflex_Vacuum_Agent(loc,st)<<"\n";
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
