#include<stdio.h>
int maxElement(int[],int);
int main(){
    int arr[5];
    printf("Enter Five Elements\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Max Element is:%d",maxElement(arr,5));
    return 0;
}
int maxElement(int a[],int size){
    int max=a[0];
    for(int i=1;i<size;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}