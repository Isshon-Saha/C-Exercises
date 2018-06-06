#include <iostream>

using namespace std;

class square
{

double side;

public:
    square()
    {

    }

square(double sid)
{
   side=sid;
}

friend ostream &operator<<( ostream &output,square &de );
friend square operator-(square &p1,square &p2);
friend istream &operator>>( istream  &input, square &D );
friend bool operator<(square &u1,square &u2);
friend square operator*(square &t1,square &t2);
friend ostream &operator<<(square &de,ostream &output);

};
ostream &operator<<( ostream &output,square &de )
{
    output << "Side :" << de.side<<endl;
    return output;
}

square operator-(square &p1,square &p2)
{
    int sd=0;
    sd=p1.side-p2.side;
    return sd;
}
istream &operator>>( istream  &input, square &D )
{
    input >> D.side;
    return input;
}
bool operator<(square &u1,square &u2)
{
    if(u1.side<u2.side)
    {
        return true;
    }
    else{return false;}

}
square operator*(square &t1,square &t2)
{

    t1.side=t1.side*t2.side;
    return t1.side;
}
ostream &operator<<(square &de,ostream &output)
{
    output << "Side :" << de.side<<endl;
    return output;
}


int main(){
square s1;
square s2(22.5);
square s3(22.0);
s1=s3-s2;
if(s3<s2)
s2=s2*s3;
cout<<s1<<s2<<s3;
square s4;
cin>>s4;
cout<<s4;
s2<<cout<<s4;
return 0;
}

