#include<iostream>
using namespace std;

template<class T>
int search(T a[],T k,int size){
    for(int i=0;i<size;i++){
        if(a[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[5]={2,1,3,5,4};
    int k=3;
    cout<<"Element searched at:"<<search(a,k,5);
    


    return 0;
}