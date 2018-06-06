#include <iostream>

using namespace std;
class course
{
    protected:
    char *name=new char[50];
public:
    void getdata()
    {
        cout<<"Enter your course name:\n";
        cin>>name;
    }
    void display()
    {
        cout<<name<<endl;
    }
};
class section
{
    protected:
    char s;
public:
    void getdata()
    {
        cout<<"Enter your section name:\n";
        cin>>s;
    }
    void display()
    {
        cout<<s<<endl;
    }
};
class Registration:public course,public section
{
    public:
    void display()
    {
        cout<<"\n\n-------------------------"<<endl;
        cout<<"Your course is:\n";
        course::display();
        cout<<"Your section is:\n";
        section::display();
    }
};

int main()
{
   Registration a1;
   a1.course::getdata();
   a1.section::getdata();
   a1.display();
    return 0;
}
