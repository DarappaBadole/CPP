#include<iostream>
using namespace std;

class overloading 
{

public:
//Add@2ii
int Add(int a, int b)        //1000
{
cout<<"Addition of integers\n";

return a+b;

}
//Add@2ff
float Add(float a,float b)    //2000
{


    cout<<"Addition of floats\n";
    return a+b;

}
//Add@2dd
double Add(double a,double b )    //3000
{

cout<<"Addition of doubles\n";


}
//Add@3iii
int Add(int a,int b,int c)        //4000

{

    cout<<"Addition of 3 integers \n";

}

//Fun@2if
void Fun (int a, float b)
{}
//Fun@2fi
void Fun (float x,int y)
{}

};


int main()
{

overloading obj;

i=obj.Add(11,21);   //1000
cout<<i<<"\n";

obj.Add(11,21,51);  //4000
obj.Add(10.9,89.5); //3000
obj.Add(10.9f, 89.5f);//2000
    return 0;

}

/*
sizeof('A')    //4
sizeof(11);   //4
sizeof(88.90);  //8
sizeof(88.90f);  //4


int i=10;
printf("%d",i);
printf("%d",sizeof(++i));  //4
printf("%d",i);    //10


*/