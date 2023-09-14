#include<stdio.h>
int prime(int);
int main()
{
    int num1,res;
    printf("\n\n\t Enter Number ");
    scanf("%d",&num1);
    res=prime(num1);
    if(res==1)
    printf("\n\t %d Is Prime Number ",num1);
    else
    printf("\n\t %d Is Not Prime Number ",num1);
    
    printf("\n\n\n");
    return 0;
}
int prime(int n)
{
    int temp=1,i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            temp=0;
            break;
        }
    }
    return temp;
}




