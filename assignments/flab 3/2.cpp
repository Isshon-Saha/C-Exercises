#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string a;
    ifstream fout("Input.txt");
    fout>>a;
    fout.close();
    for(int i=0;a[i]!='\0';i++)
    {
        char tmp=a[i];
        if(tmp>64 && tmp<91)
        {
            a[i]=tmp+32;
        }
        else if(tmp>96 && tmp<123)
        {
            a[i]=tmp-32;
        }
    }
    cout<<"Reversed string:  "<<a<<endl;
    ofstream fin("Output.txt");

    string g=a;
    fin<<g<<endl;
    fin.close();



    return 0;
}
