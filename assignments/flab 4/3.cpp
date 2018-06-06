#include <iostream>
#include <exception>

using namespace std;

int main()
{
    char g[10];
    int i=0;


    while(1){
        try{
             cout<<"Input char: "<<endl;
             cin>>g[i];
            if(i>10)throw 0;
            cout<<g[i]<<endl;

        }
         catch(int x)
        {
            cout<<"MAX SIZE EXCEEDED"<<endl;
        }
        i++;
    }




    return 0;
}
