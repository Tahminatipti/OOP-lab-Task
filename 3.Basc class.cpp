
           //capture-2

 //3.Basic class program
 #include<iostream>
 using namespace std;
 class person{
     string name;
     int age;
 public:
    void getdata(void);
    void putdata(void);
 };

 void person::getdata (void)
 {
     cout<<"Enter name:"<<endl;
     cin>>name;
     cout<<"Enter Age:"<<endl;
     cin>>age;
 }
 void person::putdata(void)
 {
     cout<<"Name:"<<name<<endl;
     cout<<"Age:"<<age<<endl;
 }
 int main()
 {
     person p;
     p.getdata();
     p.putdata();
     return 0;
 }
