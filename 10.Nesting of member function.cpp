
 //capture-5
//  10.Nesting of member function
#include<iostream>
using namespace std;
class set
{
    int m,n;
public:
    void input (void);
    void display(void);
    int largest(void);
};

int set::largest(void)
{
    if(m>=n)
        return(m);
    else
        return(n);
}
void set::input(void)
{
    cout<<"Enter the value of m and n:"<<endl;
    cin>>m>>n;
}
void set::display(void)
{
    cout<<"Largest value:"<<largest()<<endl;
}
int main()
{
    set x;
    x.input();
    x.display();
    return 0;
}

