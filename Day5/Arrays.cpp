#include<iostream>
using namespace std;

void accept(int[],int);
void display(int[],int);
void minMax(int[],int);
int search(int[],int);
void evenOdd(int[],int,int&,int&);
int  main(){
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int *arr;
    arr= new int[size];
    cout<<"Enter Elements:"<<endl;
    accept(arr,size);
    display(arr,size);
    minMax(arr,size);
    int indx=search(arr,size);
    cout<<"Element Searched at:"<<indx<<endl;
    int even=0,odd=0;
    evenOdd(arr,size, even,odd);
    cout<<"Count of Even nos:"<<even<<endl;
    cout<<"Count of odd nos:"<<odd<<endl;

    return 0;
}
void accept(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void minMax(int arr[], int size){
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Maximum element is:"<<max<<endl;
    cout<<"Minimum element is:"<<min<<endl;

}

int search(int a[],int size){
    int k;
    cout<<"Enter element you want to search"<<endl;
    cin>>k;

    for(int i=0;i<size;i++){
        if (a[i]==k)
        {
          return i;
        }
        
    }
    return -1;
}

void evenOdd(int arr[],int size,int &even,int &odd){
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
}