/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num;
   printf("Enter number:\n");
   scanf("%d",&num);
   int count=0;
   while(num!=0){
       int rem=num%10;
       count+=1;
       num/=10;
   }
   printf("Total number of digits are is:%d",count);
  
    return 0;
}
