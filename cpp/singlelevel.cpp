#include<iostream>

using namespace std;

class Base 
{

public:

 int A,B;

 Base()
 {
    cout<<"inside Base constructor\n";
 }
 
 ~Base()
 {
    cout<<"inside base destructor\n";

 }

 void Fun()
 {
 cout<<"inside Fun\n";

 }


};

class Derived: public Base 
{

public:
int X,Y;

Derived()
{
cout<<"inside derived constructor\n";

}

~Derived()
{
    cout<<"inside derived destructor\n";

}

void gun()
{

 cout<<"inside gun of Derived\n";

}

};


int main()
{

 Derived *ptr =NULL;

 ptr=new Derived;
 
ptr->Fun();
ptr->gun();


 delete ptr;



    return 0;

}