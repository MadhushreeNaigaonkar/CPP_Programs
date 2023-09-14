#include<stdio.h>
int average(int[],int);
int main(){
    int arr[5];
    printf("Enter Five Elements\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Average is:%d",average(arr,5));
    return 0;
}
int average(int a[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    return sum/size;
}