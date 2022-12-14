#include<iostream>
using namespace std;

class circle 
{

public:                 //access specifier 
 float pi;              //characteristics 
 float radius;

 circle()                       //default constructor
 { 

  pi=3.14;
  radius=0.0;


 }
 circle(float a,float b)           //parameterised constructor 
 {
    pi=a;
    radius=b;

 }

 void display ()          //concrete method  1000
 {
  cout<<"value of radius is:"<<radius<<"\n";
  
 }

virtual float area()=0;                   //abstract method     ---
virtual float circumfarance()=0;           //abstract method    ---

};

class marvellous:public circle 

{
  public:

  marvellous() :circle()
  {

  }

  marvellous(float x,float y) :circle(x,y)
  {



  }
    float area()     //concrete  method   //2000
    {
        float ans=pi*radius*radius;
        return ans;
    }
   float circumfarance()     //concrete method    3000
   {
    float ans=0.0;
    ans=2*pi*radius;
    return ans;
   }

};


int main()
{

marvellous mobj1;
marvellous mobj2(3.14,10.89);

float fret=0.0;
fret=mobj2.area();
cout<<"area is :"<<fret<<"\n";


fret=mobj2.circumfarance();
cout<<"circumference is:"<<fret<<"\n";


return 0;

}





