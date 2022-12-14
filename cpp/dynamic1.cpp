#include<stdio.h>
#include<stdlib.h>


int main()
{

int *p=NULL;

p=new int [5];



//p=(int *)malloc( 5 *sizeof(int );  in c language 

//use the memory 

delete []p;  //[] this is for aaray of element
//free(p);   in c programming language


    return 0;

}