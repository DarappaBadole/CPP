/*
STEPS:
      step1: understand the problem statement
      step2: write the algorithm
       step3: decide the programming language  (c,c++,java,python)
       step4: write the program
       step5: test the program


END
*/

//Accept N numbers from user and perform the addition


//input
//value of N=5
//values:10 20 30 40 50 

//output 
//addition is:150

//algorithm
/*

START 

   Accept the numbers of elements from user
   alloacate the memory to store that numbers
   accept the numbers from user
   perform addition of all numbers
   display the addition




END 


*/

#include<stdio.h>            //for printf and scanf
#include<stdlib.h>           //for malloc and calloc

/////////////////////////////////////////////////////
//  
//  Application Name:Addition of N numbers
//  input: N numbers
//  output: addition
//  Author:  (The great developer) MR.Darappa Badole Sir....
//  Date:18 september 2022  
//
//////////////////////////////////////////////////////
 int main()
 {

   int *Arr=NULL;     //pointer to hold the address of array
   int size=0;   
    register int  i=0;
   int isum=0;
        //variable to hold size of array 

   printf("please enter how many elements you want?\n");
   scanf("%d\n",&size);

   //allocate the memory
   Arr=(int *)malloc(size* sizeof(int));
   printf("memory allocation is successfully\n");

   printf("please enter the values \n");

   for(i=0; i<size;i++)
   {

   scanf("%d",&Arr[i]);

   

   }
   
   //perform addition 

   for( i=0;i<size;i++)
   {

   isum=isum+Arr[i];

   }


    printf("Addition is:%d\n",isum);

    printf("memory deallocation is done ");

    free(Arr);



    return 0;

 }