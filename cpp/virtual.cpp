#include<iostream>
using namespace std;

class base
{
     public:
     int a,b;
     void fun() {cout<<"base fun\n";}  //1000
     virtual void gun()  {cout<<"base gun\n";}  //2000
     virtual void sun(){ cout<<"base sun\n"; }   //3000

};

 class derived :public base
 {
   public:
   int x,y;
    void gun(){cout<<"derived gun\n";}  //4000
    void run() {cout<<"derived run\n";}   //5000
    virtual void mun() {cout<<"derived mun\n";}   //6000


 };

 int main()
 {
  
  //cout<<"size of base class :"<<sizeof(base)<<"\n";  //8
  //cout<<"size of derived class :"<<sizeof(derived)<<"\n";   //16
  
  base*bp=NULL;
  derived dobj;
  bp=&dobj;    //upcasting 

  bp->fun();   //call 1000 
  bp->gun();   //call 2000

  bp->sun();   //call 3000





    return 0;

 }