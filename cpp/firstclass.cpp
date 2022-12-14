#include<iostream>
using namespace std;


class maths
{

public:      //Access specifier
   int iNo1;      //characteristics
   int iNo2;      //characteristics

maths()         //constructor (Default)
{

iNo1=0;
iNo2=0;

}
maths(int A,int B)  // Constructor (parameterised)
{

iNo1=A;
iNo2=B;

}
int Addition()     //behaviour
{
    return iNo1+iNo2;

}
int Substraction()     //behaviour
{
    return iNo1-iNo2;

}

~maths()
{


// destructor
}
};
int main()
{

maths mobj1;
maths mobj2(11,10);

int ret=0;
ret=mobj2.Addition();
cout<<"Addition is:"<<ret<<"\n";

ret=mobj1.Addition();
cout<<"Addition is :"<<ret<<"\n";








    return 0;

}