#include <iostream>
#include<string>

using namespace std;


class account
{public:

    string name;
    int acc_num;
    int acc_type;
    string depositor;
    double balance;

public:
    void acc()
    {
        cout<<"Enter your account name:"<<endl;
        cin>>name;
        number();
    }
    void number()
    {
        cout<<"Enter your account number:"<<endl;
        cin>>acc_num;
        type();
    }
    void type()
    {
        cout<<"Enter your account type(1 for savings and 2 for current):"<<endl;
        cin>>acc_type;

    }
};

class curr_acc:public account
{

public:
    void deposit()
    {
        cout<<"Enter the amount you want to deposit:\n";
        cin>>depositor;
        cout<<"Enter the amount you want to deposit:\n";
        cin>>balance;
        if(balance<500)
        {
            cout<<"You need at least 500 tk to start a current account\n";
            balance=0;
        }
    }
    void withdraw1(curr_acc &ob1)
    {
        double money;
        cout<<"Enter the amount of money you want to withdraw:\n";
        cin>>money;
        ob1.balance=ob1.balance-money;
    }
    void show()
    {
        cout<<"You have "<<balance<<" tk\n";
    }
};
class sav_acc:public curr_acc
{
private:
    int year;
public:
    void deposit1()
    {
        cout<<"Enter depositor name:"<<endl;
        cin>>depositor;
        cout<<"Enter the amount you want to deposit:"<<endl;
        cin>>balance;
        if(balance<10000)
        {
            cout<<"You need at least 10,000 tk to start a savings account"<<endl;
            balance=0;
        }
    }
    void interest()
    {
        int past_year=2015;
        int curr_year;
        cout<<"Enter the current year:\n";
        cin>> curr_year;
        year=curr_year-past_year;
        if(curr_year<past_year)
        {
            cout<<"Congrats on inventing a time machine.You don't have an account here yet\n";
            year=0;
        }
        balance=balance*15*year;
    }
  void withdraw()
    {
    if(year>6)
    {
            cout<<"You withdrew "<<balance<<" tk\n";
            balance=0;
    }
    else
    {
        cout<<"You cannot withdraw yet"<<endl;
        balance=balance-40;//penalty
    }
    }
    void show()
    {
        cout<<"Your current balance is:"<<balance<<" tk\n";
    }


};







int main()
{
    sav_acc a1;
    a1.account::acc();
    a1.deposit1();
    a1.interest();
    a1.withdraw();
    a1.show();
    curr_acc c1;
    curr_acc c2;
    c1.account::acc();
    c1.deposit();
    c2.withdraw1(c1);
    c1.show();


    return 0;
}
