
//capture-6
//   26.implimentation of destructor
#include<iostream>
using namespace std;
int Count=0;
class alpha
{
public:
    alpha()
    {
        Count++;
        cout<<"NO of object created"<<Count<<endl;
    }
    ~alpha()
    {
        cout<<"NO of object destroyed"<<Count<<endl;
        Count--;
    }
};
int main()
{
    cout<<"Enter Main"<<endl;
    alpha A1,A2,A3,A4;
    {
        cout<<"Enter Block1"<<endl;
        alpha A5;
    }
    {
        cout<<"Enter Block2"<<endl;
        alpha A6;
    }
    cout<<"Re_enter main"<<endl;
}
