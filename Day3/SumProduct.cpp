#include<iostream>
using namespace std;

void calculate(int a,int b,int &sum,int &product){
    sum=a+b;
    product=a*b;
}
int main(){
    int n1,n2,s=0,p=0;
    cout<<"Enter two numbers\n"<<endl;
    cin>>n1>>n2;
    calculate(n1,n2,s,p);
    cout<<"Sum is:"<<s;
    cout<<"\nProduct is:"<<p;
    return 0;
}