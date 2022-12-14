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

};

class derived: public base
{
public:
 void fun()
 {

    cout<<"value of public i of base:"<<i<<"\n";  //A
    //cout<<"value of private j of base:"<<"\n";//NA

    cout<<"value of protected  k of base:"<<k<<"\n";   //A

 }


};

int main()
{

 derived dobj;
 cout<<"value of public i:"<<dobj.i<<"\n";  //A
 //cout<<"value of private j:"<<bobj.j<<"\n";  //NA
 //cout<<"value of protected k:"<<bobj.k<<"\n";  //NA

 dobj.fun();




    return 0; 
}
