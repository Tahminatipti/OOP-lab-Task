
//capture-7
//46.overloading  operator using friend
#include<iostream>
using namespace std;
const size=3;
class Vector
{
    int v[size];
    public;
    Vector();
    Vector(int *x);
    friend vector operator *(int a,vector b);
    friend vector operator *(vector b,int a);
    friend istream & operator >> (istream &,vector &);
    friend ostream & operator << (ostream &,vector &);
};
Vector::Vector()
{
    for(int i=0;i<size;i++)
    {
        v[i]=0;
    }
}
Vector::Vector(int *x)
{
    for(int i=0;i<size;i++)
    {
        v[i]=x[i];
    }
}
vector operator *(int a,vector b)
{
    Vector c;
    for(int i=0;i<size;i++)
    {
        c.v[i]=a*b.v[i];
        return c;
    }
}
vector operator *(vector b,int a)
{
    Vector c;
    for(int i=0;i<size;i++)
    {
        c.v[i]=b.v[i]*a;
        return c;
    }
}
istream & operator >>(istream &din,vector &b)
{
    for(int i=0;i<size;i++)
    {
        din>>b.v[i];
    }
    return (din);
}
ostream & operator <<(ostream &dout,vector &b)
{
    dout<<"("<<b.v[i];
    for(int i=1;i<size;i++)
    {
        dout<<","<<b.v[i];
    }
    dout<<")";
    return (dout);
}
int x[size]={2,4,6};
int main()
{
    Vector m;
    Vector n=x;
    cout<<"Enter elements of vector m"<<endl;
    cin>>m;
    cout<<endl;
    cout<<"m="<<m<<endl;
    Vector p,q;
    p=2*m;
    q=n*2;
    cout<<endl;
    cout<<"p="<<p<<endl;
    cout<<"q="<<endl;

}
