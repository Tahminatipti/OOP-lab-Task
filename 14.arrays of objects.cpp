
//capture-5
//      14.Arrays of objects
#include<iostream>
using namespace std;
class Employee
{
    string name;
    int age;
public:
    void getdata(void);
    void putdata(void);
};
void Employee::getdata(void)
{
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter age:"<<endl;
    cin>>age;
}
void Employee::putdata(void)
{
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
}
const  int a=3;
int main()
{
    Employee manager[a];
    for(int i=0;i<a;i++)
    {
        cout<<"Details of a manager:"<<i+1<<endl;
        manager[i].getdata();
    }
    for(int i=0;i<a;i++)
    {
        cout<<"  manager:"<<i+1<<endl;
        manager[i].putdata();
    }
}
