
//capture-5
//     13.static member function
#include<iostream>
using namespace std;
class test
{
    int code;
    static int c;
public:
    void setcode(void)
    {
        code=c++;
    }
    void showcode(void)
    {
        cout<<"Object number:"<<code<<endl;
    }
    static void showcount(void)
    {
        cout<<"count:"<<c<<endl;
    }
};
int test::c;
int main()
{
    test t1,t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    test t4;
    t4.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();

}
