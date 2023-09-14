#include<stdio.h>

int search(int[],int,int);
int main(){
    int arr[5]={5,3,1,4,6};
    if(search(arr,5,3)==-1){
        printf("Element Not Found");
    }
    else{
        printf("Element Fountd at %d",search(arr,5,3));
    }
    return 0;
}
int search(int arr[],int size,int k){
    for(int i=0;i<size;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}