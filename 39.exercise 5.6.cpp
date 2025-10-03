

//capture-5
//Exercise-5.6
#include<iostream>
using namespace std;
class Room{
int width,height;


public:
    void setValue(float w,float h){
    width=w;
    height=h;
    }


void display(void){
         cout<<"Height:"<<height<<" "<<"width:"<<width<<"\n";
         float area=(0.5*height*width);
cout<<"Area:"<<area<<"\n";


}
};

int main(){
Room R1;

R1.setValue(15.0,10.0);
R1.display();


}

