#include<stdio.h>
int add(int,int);

int main()
{
    printf("Addition %d",add(10,20));
    int no1=4,no2=8;
    printf(" Addition : %d",add(no1,no2));

}
int add(int a,int b)
{
    return a+b;
    
}