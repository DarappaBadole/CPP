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

demo operator +(demo obj1,demo obj2)
{

cout<<"inside +operator function\n";
return demo (obj1.a+obj2.a, obj1.b+obj2.b);

}
int main()
{

 demo x(10,20);

 demo y(30,40);

 demo ans(0,0);

 ans=x+y;      //+(x,y)

 cout<<ans.a<<"\n";
 cout<<ans.b<<"\n";


    return 0;

}