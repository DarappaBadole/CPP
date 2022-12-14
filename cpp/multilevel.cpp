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

class Derivedx:public Derived
{

public:
int i,j;
Derivedx()
{
    cout<<"inside derivedx constructor\n";

}
~Derivedx()
{
    cout<<"inside derivedx destructor\n";

}
void sun()
{
    cout<<"inside derivedx sun";

}

};

int main()
{

 cout<<"size of Base :"<<sizeof(Base)<<"\n";
 cout<<"size of derived :"<<sizeof(Derived)<<"\n";
 cout<<"size of derivedx:"<<sizeof(Derivedx)<<"\n";

 Derivedx dobj;

 dobj.Fun();
 dobj.gun();
 dobj.sun();

    return 0;

}