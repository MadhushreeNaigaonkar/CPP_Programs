/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int base,power; 
    printf("Enter base and power \n");
    scanf("%d %d", &base,&power);
    int i,ans=1;
    for(i=1;i<=power;i++){
        ans=ans*base;
    }
    printf("Answer is %d",ans);
    return 0;
}
