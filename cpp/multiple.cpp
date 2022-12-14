#include<iostream>
using namespace std;

class Base1
{
 public:
 int A;

 Base1()
 {
    cout<<"Base1 constructo\n";

 }

 ~Base1()
 {
 cout<<"Base1 destructor\n";
 }

 void fun()
 {
    cout<<"Base1 fun\n";

 }

};

 class Base2
 {
 public:
 int I,J,K;

 Base2()
 {
    cout<<"Base2 constructo\n";

 }

 ~Base2()
 {
 cout<<"Base2 destructor\n";
 }

 void gun()
 {
    cout<<"Base2 gun\n";
    
 }

};

 class Derived:public Base1, public Base2
 {
 public:

 int X,Y;
 Derived()

 {
    cout<<"Derived constructo\n";

 }

 ~Derived()
 {
 cout<<"Derived destructor\n";
 }

 void sun()
 {
    cout<<"Derived gun\n";
    
 }



};

int main()

{

Derived dobj;

dobj.fun();  //base1
dobj.gun();  //base2  
dobj.sun();  //destructor



    return 0;

}