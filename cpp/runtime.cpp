#include<iostream>
using namespace std;

class base 
{
 public:    //acccess specifier 

 int a,b;

 void fun()     //function definition   1000
 {

    cout<<"base fun\n";

 }
 
 void gun(int i)       //function definition   2000
 {

    cout<<"base gun with one integer\n";

 }
 void gun(int i,int j)     //overloaded function definition 3000
 {

    cout<<"base gun with 2 integer\n";

 }

};

 class derived :public base
 {
 public:
   int x,y;
   
   void sun()       //function definition    4000
   {
    cout<<"derived sun\n";

   }
 
 void fun()         //function redefinition   5000
 {
    cout<<"derived fun\n";

 }



 };




int main()
{

derived dobj;
dobj.fun();       //call  5000
dobj.gun(11);     //call  2000

dobj.gun(11,21);  //call  3000

dobj.sun();     //call  4000





    return 0;

}