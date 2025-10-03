
 //capture-5
//           19.Returning objects
#include<iostream>
using namespace std;
class complex
{
        float x;
        float y;
public:
    void inputdata(float real,float image)
    {
       x=real;
       y=image;
    }
    friend complex sum(complex,complex);
    void show(complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return(c3);
}
void complex::show(complex c)
{
    cout<<c.x<<"+j"<<c.y<<endl;
}
int main()
{
   complex a,b,c;
   a.inputdata( 3.1,5.65);
   b.inputdata( 2.75,1.2);
   c=sum(a,b);
   cout<<"A= ";
   a.show(a);
   cout<<"B= ";
   b.show(b);
   cout<<"C= ";
   c.show(c);

}
