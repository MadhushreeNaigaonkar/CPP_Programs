#include<stdio.h>

int countEven(int[],int);
int main(){
    int arr[5]={2,3,1,4,5};
    printf("Total Number of Even elements in an array is:%d",countEven(arr,5));
    return 0;
}
int countEven(int arr[],int s){
    int count =0;
    for(int i=0;i<s;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}