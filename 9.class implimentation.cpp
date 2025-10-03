
  //capture-5
// 9.class implimentation
#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getdata(int a,float b);
    void putdata(void)
    {
       cout<<"Number:"<<number<<endl;
       cout<<"Cost:"<<cost<<endl;
    }
};
void item::getdata(int a,float b)
{
    number=a;
    cost=b;
}
int main()
{
    item x;
    cout<<"Object x"<<endl;
    x.getdata(100,95.5);
    x.putdata();
    cout<<endl;
    item y;
    cout<<"object y"<<endl;
    y.getdata(200,125.5);
    y.putdata();
}
