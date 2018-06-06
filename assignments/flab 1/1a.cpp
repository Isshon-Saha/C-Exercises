#include <iostream>

using namespace std;
class P
{
public:
    P()
    {
        cout<<"From constructor of P"<<endl;
    }
    ~P()
    {
        cout<<"From destructor of P"<<endl;
    }

};
class Q:public P
{
public:
    Q()
    {
        cout<<"From constructor of Q"<<endl;
    }
    ~Q()
    {
        cout<<"From destructor of Q"<<endl;
    }

};
class R:public Q
{
    public:
    R()
    {
        cout<<"From constructor of R"<<endl;
    }
    ~R()
    {
        cout<<"From destructor of R"<<endl;
    }

};
class S:public R
{
public:

    S()
    {
        cout<<"From constructor of S"<<endl;
    }
    ~S()
    {
        cout<<"From destructor of S"<<endl;
    }

};

int main()
{
   P p;
   Q q;
   R r;
   S s;
    return 0;
}
