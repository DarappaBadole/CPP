#include<stdio.h>
#include<stdlib.h>

int main()
{

  int size=0;
  int *Arr=NULL;

  printf("enter th size of Array \n");
  scanf("%d",&size);

  Arr=(int *)malloc(sizeof(int)*size);

  //use the memory

  free(Arr);


    return 0;

}