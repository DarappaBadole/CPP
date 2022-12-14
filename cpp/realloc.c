#include<stdio.h>
#include<stdlib.h>


int main()
{

int *p=NULL;
int *q=NULL;

p=(int *)malloc(sizeof(int)*10);

//use memory 

q=(int *)realloc(p,15 *sizeof(int));
if(q==NULL){




printf("Realloc fails");

q=p;


}
//use memory

free(q);

    return 0;

}