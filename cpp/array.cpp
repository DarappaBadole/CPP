#include<iostream>
using namespace std;

class Array
{
  public:

   int isize;
   int *Arr;

    Array(int ilength)
    {
      cout<<"insidde constructor\n";
      isize=ilength;
      Arr=new int [isize];
    }
    
    ~Array()
    {

        delete []Arr;

    }
   void Accept()
   {

    cout<<"enter the value\n";
    int i=0;

    for (i=0;i<isize; i++)
    {
        cin>>Arr[i];

    }
   }

   void display()
   {

    cout<<"element of array are:\n";
    int i=0;
    for(i=0;i<isize; i++)
    {
        cout<<Arr[i]<<"\n";


    }
   }
   
};



int main()
{

     Array obj1(4);
     Array obj2(6);
     
     obj1.Accept();
     obj1.display();


     
     

    return 0;

}