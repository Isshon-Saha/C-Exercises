#include <iostream>
#include <string>
#include <exception>

using namespace std;

int main()
{
    string g;
    cout<<"Please input string: "<<endl;
    getline(cin,g);
    try
    {
        if(g.length()==0 || g.length()>10)
        {
           throw g;
        }
        else if(g.length()>0 && g.length()<10)
        {
            cout<<g<<endl;
        }
    }
    catch(...)
    {
        cout<<"String length must be greater than 0 and less than 10"<<endl;
    }
    return 0;
}
