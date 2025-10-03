
//capture-5
//    12.static class member
#include<iostream>
using namespace std;
class Item
{
   static int c;
   int number;
   public:
       void getdata(int a)
       {
           number=a;
           c++;
       }
       void getcount(void)
       {
           cout<<"count:"<<c<<endl;
       }

};
int Item::c;
int main()
{
    Item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout<<"After reading data"<<endl;

    a.getcount();
    b.getcount();
    c.getcount();
}
