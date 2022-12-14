#include<stdio.h>

//typedef JUNA_NAWIN_NAW

typedef int INTEGER;
typedef unsigned long int ULONG;

struct demo
{
int a;
int b;


};

typedef struct demo DEMO;
typedef struct demo *PDEMO;

int main()

{


INTEGER i=10;      //int i=10;
ULONG j=21;       //unsigned long int j=21;
DEMO obj;         //struct demo obj;
PDEMO ptr =&obj;  //struct Demo *ptr =&obj;




    return 0;

}