#include<iostream>
using namespace std;


class base
{

 public:
 int i;

 private :
 int j;

 protected :
 int k;
 
 public:
 base()
 {
    i=10;
    j=20;
    k=30;

 }

 void fun()
 {
 cout<<"value  of public i:"<<i<<"\n";  //Allowed 
 cout<<"value  of private j:"<<j<<"\n";  //Allowed 

 cout<<"value  of protected k:"<<k<<"\n";  //Allowed 

 } 

};

int main()
{

 base bobj;
 cout<<"value of public i:"<<bobj.i<<"\n";  //A
 //cout<<"value of private j:"<<bobj.j<<"\n";  //NA
 //cout<<"value of protected k:"<<bobj.k<<"\n";  //NA

 bobj.fun();




    return 0; 
}
