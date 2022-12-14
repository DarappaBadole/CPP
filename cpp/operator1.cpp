 #include<iostream>
 using namespace std;


class demo
{
  public: 
      int a,b;
      demo ()
      {
        a=0;
        b=0;

      }
      demo(int i)
      {
        a=i;
        b=0;

      }
      demo(int i,int j)
      {
        a=i;
        b=j;

      }
      

};


int main()
{

 demo obj1;
 demo obj2(11);
 demo obj3(11,21);
 





    return 0;

}