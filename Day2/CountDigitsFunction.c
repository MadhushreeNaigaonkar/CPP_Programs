//1. Accpet number from user and Count number of digits using function.
#include<stdio.h>
int countNumber(int);
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    printf("Count Of Number %d is %d",num,countNumber(num));
    return 0;
}
int countNumber(int no){
    int count=0;
    while(no>0){
        no/=10;
        count++;

    }
    return count;
}