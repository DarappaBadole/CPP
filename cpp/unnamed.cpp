#include<iostream>
//using namespace std;

namespace 
{

  class demo
  {
    public:
     int i,j;
     void fun()
     {

       std:: cout<<"inside fun of demo from unnamed namespace \n";

     }


  };

 

}
int main()
{

 demo obj1;
 obj1.fun();
 

    return 0;

}