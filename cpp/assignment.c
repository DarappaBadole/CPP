#include<stdio.h>

extern int i;
extern int j;
extern int arr[4];
void gun();



int main()
{
printf("value of i is:%d\n",i);
printf("value of j is :%d\n",j);

j=51;
printf("value of j is:%d\n",j);
printf("value from array :%d\n",arr[0]);
fun();
gun();
    return 0;

}
int i=21;
void gun()
{

printf("inside gun\n");
}
#include<stdio.h>

int j=21;
int arr[4]={10,20,30,40};
void fun()
{

    printf("inside fun\n");

}