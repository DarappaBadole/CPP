#include<iostream>
using namespace std;

class base
{
     public:
     int a,b;
};

 class derived :public base
 {
   public:
   int x,y;


 };

 int main()
 {
  base*bp=NULL;
  derived *dp=NULL;

  base bobj;
  derived dobj;

  bp=&bobj;   //no casting    Allowed 
  
  dp=&dobj;    //no casting   allowed 
  bp=&dobj;    //upcasting    allowed 
  //dp=&bobj;    //downcasting    not allowed 





    return 0;

 }