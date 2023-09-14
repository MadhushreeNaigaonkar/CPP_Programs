#include<iostream>
using namespace std;
void swap_numbers(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2= temp;
}
int main(){
    int n1,n2;
    cout<<"Enter Two Numbers"<<endl;
    cin>>n1>>n2;
    cout<<"\nBefore Swapping:\n Num1:"<<n1<<"\n Num2:"<<n2;
    swap_numbers(n1,n2);
    cout<<"\n\nAfter Swapping:\n Num1:"<<n1<<"\n Num2:"<<n2;


}
