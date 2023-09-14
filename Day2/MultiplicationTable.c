#include<stdio.h>
void multiplicationTable(int);
void main(){
    int no;
    printf("Enter number \n");
    scanf("%d",&no);
    multiplicationTable(no);
}
void multiplicationTable(int no){
    int i;
    for(i=1;i<=10;i++){
        printf("\n%d*%d=%d",no,i,no*i);
        printf("\n");
    }
}