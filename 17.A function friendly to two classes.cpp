
//capture-5
//         17.A function friendly to two classes
#include<iostream>
using namespace std;
class ABC;
class XYZ
{
    int a;
public:

    void setvalue(int i){a=i;}
    friend void max(XYZ,ABC);
};
class ABC
{
    int x;
public:

    void setvalue(int i){x=i;}
    friend void max(XYZ,ABC);
};
void max(XYZ m,ABC n)
{
    if(m.a>=n.x)
        cout<<m.a<<endl;
    else
        cout<<n.x<<endl;
}
int main()
{
    XYZ xyz;
    xyz.setvalue(100);
    ABC abc;
    abc.setvalue(200);
    max(xyz,abc);
}
