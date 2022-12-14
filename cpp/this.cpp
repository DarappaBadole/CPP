#include<iostream>
using namespace std;
class Demo
{
public :
int i;
float f;
double d;

void fun(int A)
{
cout<<"inside fun\n";
cout<<this->i<<"\n";

}
// int gun(Demo *this , int A,int B)

int gun(int A,int B)
{

    cout<<"inside gun\n";
}

};
int main()
{
Demo obj1;
Demo obj2;

obj1.i=101;
obj2.i=201;

Demo obj;  //100
obj1.fun(11);  //fun(&obj,11);  fun(100,11;)
  
obj2.gun(11,21); //fun(&obj,11,21); gun (100,11,21);


    return 0;

}




