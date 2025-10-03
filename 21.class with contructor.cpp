
//capture-6
//21.class with constructor
#include<iostream>
using namespace std;
class integer
{
    int m,n;
public:
    integer(int ,int);
    void display( void)
    {
        cout<<"M="<<m<<endl;
        cout<<"N="<<n<<endl;
    }
};
integer::integer(int x,int y)
{
    m=x;
    n=y;
}
int main()
{
    integer num1(0,100);
    integer num2(25,75);
    cout<<"Object1"<<endl;
    num1.display();
    cout<<endl;
    cout<<"Object2"<<endl;
    num2.display();
}

