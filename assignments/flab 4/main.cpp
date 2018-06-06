#include <iostream>


using namespace std;

int main()
{

        for(int i=5;i>-4;i--)
        {

           try
           {if(i==0)

               throw i;
               cout<<22/i<<endl;

           }
           catch(int x)
    {
        cout<<"FUCK YOU I CANT DO THAT"<<endl;
    }
        }




    return 0;
}
