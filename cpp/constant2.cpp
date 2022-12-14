#include<iostream>

using namespace std;

class demo
{
    public:

      int i;
      int j;
      const int k;

      const int l;


      //default constructor
      demo() : k(11),l(21)
      
      {
         i=51;
         j=101;


      }

      //parameterised constructors
     demo(int a,int b,int c,int d):k(c),l(d)
     {

       i=a;
       j=b;



     }

};




int main()
{

demo obj1;
demo obj2(10,20,30,40);

//obj1.k++;   NA
//obj2.k++;  NA
obj1.i++;    //A
obj2.i++;    //A


return 0;



}