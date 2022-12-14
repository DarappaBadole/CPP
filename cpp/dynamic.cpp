#include<iostream>
using namespace std;

class Demo
{
 public:
   int x;
   int y;


   Demo()
   {

   cout<<"inside constructor"<<"\n";

   }

 ~Demo()
 {

      cout<<"inside destructor"<<"\n";


 }

 void Fun()
 {

    cout<<"inside Fun"<<"\n";

 }
 
 };
 int main()
{


//Demo obj1;


Demo *ptr=NULL;

ptr=new Demo;

ptr->Fun();

 cout<<"value of x"<<ptr->x<<"\n";


delete ptr;

return 0;



}