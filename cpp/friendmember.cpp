#include<iostream>
using namespace std;

class marvellous {
  public:

 void fun();        //naked function 
 

 


};

class demo
{


 public:
 int i;

private: 
int j;

protected:
int k;

public:
demo()
{

 i=10;
 j=20;
 k=30;

}
friend void  marvellous::fun();

};
void marvellous:: fun()        //naked function 
 {

 
       demo obj;
        cout<<"value of i :"<<obj.i<<"\n";
        cout<<"value of j:"<<obj.j<<"\n";
        cout<<"value of k:"<<obj.k<<"\n";

 };
int main()
{
marvellous mobj;

mobj.fun();



    return 0;

}