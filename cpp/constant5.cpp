
#include<iostream>
using namespace std;

class demo
{
  public:
   int i;
   const int j;   //constant characteristic 

   
   //parametrised constructor with DEFAULT  values
   demo(int x=10,int y=20) : j(y)
   {
     i=x;
     j=y;
   }

 void fun()
 {
    int a=10;
    const int b=20;    //constant variable 
   i++;   //A   8 line 
   j++;    //NA    9 line   
   a++;   //A    21 line
   b++;    //NA     22 line 



 }

  void gun() const        //constant behaviour 
  {
    int a=10;
    const int b=20;

    i++;     //NA  32 line  
    j++;     //NA   23 line 
    a++;     //A   34 line 

    b++;   //NA    35 line 

  }

};

int main()
{
  
  demo obj1(11,21);     //11   21
  const demo obj2(11,21);   //11    21       
  obj1.fun();   //A
  obj1.gun();   //A
  obj2.fun();  //NA 
  obj2.gun();   //A


  obj1.i++;    //A
  obj1.j++;    //NA 
  obj2.i++;    //NA
  obj2.j++;  //NA



    

  return 0;






}
