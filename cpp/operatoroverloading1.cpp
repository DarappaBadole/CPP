 #include<iostream>
 using namespace std;


class demo
{
  public: 
      int a,b;
      demo(int i=0,int j=0)
      {
        a=i;
        b=j;

      }

    
};


int main()
{

 demo a(10,20);

 demo b(30,40);

 demo ans(0,0);

 ans=a+b;

    return 0;

}