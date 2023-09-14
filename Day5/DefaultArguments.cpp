#include<iostream>
using namespace std;
int mul(int=1,int=1,int=1);
int main(){
int n1=3,n2=4,n3=5;
cout<<"Multiplication with 0 argument\t"<<mul()<<endl;
cout<<"Multiplication with 1 argument\t"<<mul(n1)<<endl;
cout<<"Multiplication with two arguments\t"<<mul(n1,n2)<<endl;
    return 0;
}
int mul(int a,int b,int c){
    return a*b*c;
}