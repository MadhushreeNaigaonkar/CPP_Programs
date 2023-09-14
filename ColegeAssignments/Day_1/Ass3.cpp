#include<stdio.h>

int factorial(int);
int main()
{
    int num1,res;
    printf("\n\n\t Enter Number ");
    scanf("%d",&num1);
    res=factorial(num1);
    printf("\n\n\t Factorial %d Is %d",num1,res);
    printf("\n\n\n\n");

}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}