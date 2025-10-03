
   //capture-4
//8.Function overloading
#include<iostream>
using namespace std;
int volume(int);
double volume(double,int);
long volume(long,int,int);
int main()
{
    cout<<"area of cube:"<<volume(10)<<endl;
    cout<<"area of cylinder:"<<volume(2.5,8)<<endl;
    cout<<"area of rectangular box:"<<volume(100l,75,15)<<endl;
    return 0;
}
int volume(int a)
{
    return (a*a*a);
}
double volume(double r,int h)
{
    return (3.1416*r*r*h);
}
long volume(long l,int b,int h)
{
    return (l*b*h);
}
