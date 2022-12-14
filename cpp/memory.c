#include<stdio.h>
#include<stdlib.h>



int main()
{

int Arr[5];   //static memory allocation 

int *p=NULL;

p=(int *)mallooc(sizeof(int)*5);

//use the memory

free(p);

//code







    return 0;   //memory of Arr gets dealloacated at this point 

}