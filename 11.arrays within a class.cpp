
//capture-5
//   11.arrays within a class
#include<iostream>
using namespace std;
const m=50;
class ITEMS
{
    int itemcode[m];
    float itemprice[m];
    int c;
public:
    void CNT(void){c=0;}
    void getitem(void);
    void displaysum(void);
    void remov(void);
    void displayitem(void);
};
void ITEMS::getitem(void)
{
    cout<<"Enter item code"<<endl;
    cin>>itemcode[c];
    cout<<"Enter item cost:"<<endl;
    cin>>itemprice[c];
    c++;
}
void ITEMS::displaysum(void)
{
    float sum=0;
    for(int i=0;i<c;i++)
    {
        sum=sum+itemprice[i];
    }
    cout<<"Total value:"<<sum<<endl;
}
void ITEMS::remov(void)
{
    int a;
    cout<<"Enter item code:"<<endl;
    cin>>a;
    for(int i=0;i<c;i++)
    {
        if(itemcode[i]==a)
            itemprice[i]=0;
    }
}
void ITEMS::displayitem(void)
{
    cout<<"Code price"<<endl;
    for(int i=0;i<c;i++)
    {
        cout<<endl<<itemcode[i];
        cout<<" "<<itemprice[i];
    }
    cout<<endl;
}
int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do()
    {
        cout<<"You can do the following"<<endl;
        cout<<"Add an item:"<<endl;
        cout<<" Display total value:"<<endl;
        cout<<"Delete an item:"<<endl;
        cout<<"Display all item:"<<endl;
        cout<<"Quit:"<<endl;
        cout<<"What is your opinion?"<<endl;
        cin>>x;

    switch(x)
    {
        case 1:order.getitem();break;
        case 2:order.displaysum();break;
        case 3:order.remov();break;
        case 4:order.displayitem();break;
        case 5:break;
        default:
            cout<<"Error in input"<<endl;
    }
    }while(x!=5);
    return 0;
}
