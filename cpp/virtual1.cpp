#include<iostream>
using namespace std;

class base
{
     public:
     int a,b;
     void fun() {cout<<"base fun\n";}  //1000
     virtual void gun()  {cout<<"base gun\n";}  //2000
     virtual void sun(){ cout<<"base sun\n"; }   //3000
     virtual void  run () { cout<<"base run\n";}   //4000
};

 class derived :public base
 {
   public:
   int x,y;
    void gun() {cout<<"derived gun\n";}  //5000
    virtual void run() {cout<<"derived run\n";}   //6000
    virtual void mun() {cout<<"derived mun\n";}   //7000


 };

 int main()
 {
  
  
  base*bp= NULL;
  derived dobj;

  
  bp=&dobj;    //upcasting 

  bp->fun();    //base fun
  bp->gun();   //derived gun

  bp->sun();     //base sun
  bp->run();    //derrived run
 // bp->mun();   //  error bczzz there is no mun function in base class 






    return 0;

 }