
//capture-5
//          18.swapping private data of classes
#include<iostream>
using namespace std;
class class_2;
class class_1
{
    int value1;
public:
    void indata(int a){value1=a;}
    void display(void){cout<<"Value1="<<value1<<endl;}
    friend void exchange(class_1 &,class_2 &);
};
class class_2
{
    int value2;
public:
    void indata(int a){value2=a;}
    void display(void){cout<<"Value2="<<value2<<endl;}
    friend void exchange(class_1 &,class_2 &);
};
void exchange(class_1 & x,class_2 & y)
{
    int temp=x.value1;
    x.value1=y.value2 ;
    y.value2=temp;
}
int main()
{
    class_1 c1;
    class_2 c2;
    c1.indata(300);
    c2.indata(400);

    cout<<"Before exchange the value are:"<<endl;
    c1.display();
    c2.display();

    exchange(c1,c2);

    cout<<"After exchange:"<<endl;
    c1.display();
    c2.display();

}
