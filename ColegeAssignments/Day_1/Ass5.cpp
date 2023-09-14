// write a program to count even numbers from array
#include<stdio.h>
int countEvenNumbers(int[],int);
int main()
{
    int arr[]={32,54,76,23,54,76,98,43,76,23};
    int arr1[]={32,23,-54,23,54},res;
    printf("\n\t Even Numbers %d ",countEvenNumbers(arr,10));
    res=countEvenNumbers(arr1,5);
    printf("\n\t Even Numebrs : %d",res);
    printf("\n\n\n\n");
    return 0;
}
int countEvenNumbers(int a[],int size)
{
    int cnt=0,i;
    for(i=0;i<size;i++)
    {
        printf("\t%d",a[i]);
        if(a[i]%2==0)
         cnt++;
    }
    return cnt;

}

