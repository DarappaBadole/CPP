#include<iostream>
using namespace std;

class Demo
{
public:
 int i;
 int j;
  static  int k;
   static int l;

  Demo()
  {

        i=0;
        j=0;

  }

  Demo(int a, int b)
{

i=a;
j=b;

}


void fun()
{
//static+non static 
cout<<"inside non static method fun\n";
cout<<"value of i :"<<this->i<<"\n";
cout<<"value of j :"<<this->j<<"\n";
cout<<"value of k:"<<k<<"\n";
cout<<"value of l :"<<l<<"\n";



}

static void gun()
{
    //static 
    cout<<"inside static method gun\n";

    cout<<"value of k:"<<k<<"\n";
    cout<<"value of l :"<<l<<"\n";

}

};
//load time variables
int Demo:: k=0;
int Demo:: l=0;

int main()
{
 cout<<"inside main\n";

 cout<<"value of k :"<<Demo::k<<"\n";
 cout<<"value of l :"<<Demo::l<<"\n";
 Demo::gun();

Demo obj1(10,11);
Demo obj2(20,21);
Demo obj3;

cout<<"value of i in obj1:"<<obj1.i<<"\n";
cout<<" value of i in obj2:"<<obj2.i<<"\n";

cout<<"value of j in obj1 :"<<obj1.i<<"\n";
cout<<"value of j in obj2 :"<<obj2.j<<"\n";

cout<<sizeof(obj1);

obj1.fun();
obj2.fun();








    return 0;

}