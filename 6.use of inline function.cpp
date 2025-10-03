

       //capture-4

 // 6.use of  inline function
 #include<iostream>
 using namespace std;
 inline int mul(int x,int y)
 {
     return(x*y);
 }
 inline float div(float p,float q)
 {
     return (p/q);
 }
 int main()
 {
     int a=20;
     int b=10;
     float p=10.5;
     float q=5.6;
     cout<<"Multiplication:"<<mul(a,b)<<endl;
     cout<<"Division:"<<div(p,q)<<endl;
     return 0;
 }
