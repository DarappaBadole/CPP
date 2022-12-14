 #include<iostream>
 using namespace std;


class demo
{
    private:

      int a,b;

      public:
      demo(int i=0,int j=0)
      {
        a=i;
        b=j;

      }
      void display()
      {
        cout<<a<<"\n";
        cout<<b<<"\n";

      }

    friend demo operator +(demo,demo);
    friend demo operator -(demo,demo);
    friend demo operator *(demo,demo);
    friend demo operator /(demo,demo);
    
};

demo operator +(demo obj1,demo obj2)
{

cout<<"inside +operator function\n";
return demo (obj1.a+obj2.a, obj1.b+obj2.b);

}
demo operator -(demo obj1,demo obj2)
{

cout<<"inside -operator function\n";
return demo (obj1.a-obj2.a, obj1.b-obj2.b);

}
demo operator *(demo obj1,demo obj2)
{

cout<<"inside *operator function\n";
return demo (obj1.a*obj2.a, obj1.b*obj2.b);

}
demo operator /(demo obj1,demo obj2)
{

cout<<"inside /operator function\n";
return demo (obj1.a/obj2.a, obj1.b/obj2.b);

}
int main()
{

 demo x(10,20);

 demo y(30,40);

 demo ans(0,0);

 ans=x+y;      //+(x,y)

 ans.display();
 ans=x-y;       //-(x,y)     

 ans.display();
 ans=x*y;        //*(x,y)
 ans.display();
 ans=x/y;         // /(x,y)
 ans.display();

 




    return 0;

}