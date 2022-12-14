#include<stdio.h>
#include<stdlib.h>

int main()
{

  int *p=NULL;
  int Size=0;

  printf("enter the size\n");
  scanf("%d\n",&size);

  p= (int *)malloc(sizeof(int) * size);  //malloc(4*5);  -> malloc(20)
  p= (int*)calloc(sizeof(int) , size);   //calloc(4,5);




    return 0;

}

//(void*)malloc(sizeof(data type)*size);
                                          //both the meaning is same;
//(void*)calloc(sizeof(data type),size);
