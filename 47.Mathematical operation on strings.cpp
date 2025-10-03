
//capture -7
//47.Mathematical operation on string
#include<iostream>
#include<string>
using namespace std;

class String{
    char *p;
    int len;
public:
    String(){len=0;p=0;}
    String(const char *s);
    String(const string &s);
    ~String(){delete p;}
    friend string operator+(const string &s,const string &t);
    friend int operator<=(const string &s,const string &t);
    friend void show(const string s);

};
String::String(const char *s)
{
    len=strlen(s);
    p=new char[len+1];
    strcpy(p,s);
}
String::String(const string &s)
{
    len=s.len;
    p=new char[len+1];
    strcpy(p,s.p);
}
String operator +(const string &s,const string &t)
{
    String temp;
    temp.len=s.len+t.len;
    temp.p=new char [temp.len+1];
    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);
    return temp;
}
int operator <=(const string &s,const string &t)
{
  int m=strlen(s.p);
  int n=strlen(t.p);
  if(m<=n)return(1);
  else return(0);
}
void show(const string s)
{
    cout<<s.p;
}
int main()
{
    String s1="New";
    String s2="York";
    String s3="Delhi";
    String t1,t2,t3;
    t1=s1;
    t2=s2;
    t3=s1+s2;
    cout<<"t1=";show(t1);
    cout<<"t2=";show(t2);
    cout<<"t3=";show(t3;
    if(t1<=t3)
    {
        show(t1);
        cout<<"smaller than";
        show(t3);
        cout<<endl;

    }
    else
    {
        show(t3);
        cout<<"smaller than";
        show(t1);
        cout<<endl;
    }
    return 0;
}

