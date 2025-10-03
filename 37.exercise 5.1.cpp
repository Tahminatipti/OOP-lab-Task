
//capture-5
//Exercise-5.1
#include<iostream>
using namespace std;

class bank
{
    char name[50];
    int ac_no;
    int balance;
public:
    void initial();
    void deposit();
    void withdraw();
    void display();
};

void bank ::initial()
{
    cout<<"Depositor Name:";
    cin>>name;
    cout<<"Enter AC/NO:";
    cin>>ac_no;
    cout<<"Enter starting balance:";
    cin>>balance;
}

void bank::deposit()
{
    float damt;
    cout<<"Enter deposit ammount:";
    cin>>damt;
    balance+=damt;
    cout<<"After deposit,Your total balance="<<balance<<endl;
    }

void bank::withdraw()
{
    float wamt;
    cout<<"Enter withdraw amount:";
    cin>>wamt;
    balance-=wamt;
    cout<<"After withdraw,your total balance="<<balance<<endl;
}

void bank::display()
{
    cout<<"Depositor data:"<<endl;
    cout<<"= = = = = = = = = = = = = = = = = = = = = = = = ="<<endl;
    cout<<"Depositor Name:"<<name<<endl;
    cout<<"Account No:"<<ac_no<<endl;
    cout<<"Available Balance:"<<balance<<endl;
}

int main()
{
    bank x;
    x.initial();
    x.deposit();
    x.withdraw();
    x.display();
    return 0;
}
