#include <iostream>

using namespace std;

class P
{
    int x1;
    int x2;
    int x3;
public:
    void display()
    {
        cout<<x1<<endl<<x2<<endl<<x3<<endl;
    }
    void getdata(int y1,int y2,int y3)
    {
        x1=y1;
        x2=y2;
        x3=y3;
        display();
    }
};
class Q
{
    int u1,u2,u3;
public:
    void display()
    {
        cout<<u1<<endl<<u2<<endl<<u3<<endl;
    }
    void getdata(int g1,int g2,int g3)
    {
        u1=g1;
        u2=g2;
        u3=g3;
        display();
    }
};
class R
{
    int i1,i2,i3;
public:
    void display()
    {
        cout<<i1<<endl<<i2<<endl<<i3<<endl;
    }
    void getdata(int j1,int j2,int j3)
    {
        i1=j1;
        i2=j2;
        i3=j3;
        display();
    }
};
class S:public P,public Q,public R
{
public:
    void display()
    {
        P::display();
        Q::display();
        R::display();
    }
};
int main()
{
    P p;
    Q q;
    R r;
    S s;
    s.P::getdata(12,13,14);
    s.Q::getdata(23,24,25);
    s.R::getdata(34,35,36);
    s.display();
    return 0;
}
