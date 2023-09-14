/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num,i;
   printf("Enter number \n");
   scanf("%d",&num);
   for(i=2;i<num;i++){
       if(num%i==0){
           printf("Not Prime");
           break;
       }
   }
   if(i==num){
       printf("Number is prime");
   }
    return 0;
}
