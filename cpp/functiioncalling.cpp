#include<iostream>
using namespace std;
//call by valu e
void fun( int no)
{
    cout<<"inside call by value :"<<no<<"\n";
    no++;
}

//call by address
void gun( int *p)
{
  
 cout<<"inside ccall by address :"<<*p<<"\n";
 (*p)++;

} 
//call by reference
void sun(int &ref)
{

cout<<"inside call by reference:"<<ref<<"\n";
ref++;

}

int main ()
{

  int i=10;
  int j=10;
  int k=10;
  
  fun(i);                 //fun(10);
  cout<<i<<"\n";

   gun(&j);    //gun(200);
  cout<<j<<"\n";

  sun(k);                 //sun(k);
   cout<<k<<"\n";

    return 0;
}