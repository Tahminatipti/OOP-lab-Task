
//capture-5
//        16.Friend function
#include<iostream>
using namespace std;
class sample
{
    int a;
    int b;
public:
    void setvalue()
    {
        a=25;
        b=50;
    }
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a+s.b)/2.0;
}
int main()
{
    sample a;
    a.setvalue();
    cout<<"Mean value:"<<mean(a)<<endl;
}
