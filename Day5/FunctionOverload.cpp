#include<iostream>
using namespace std;
int add(int,int);
int add(int,int,int);
void add(int,float);
void add(float,int);
float add(float,float);


int main(){
    int no1,no2,no3;
    float num1,num2;
    cout<<"Enter two integer values"<<endl;
    cin>>no1>>no2;
    cout<<"Addition of two integer number is:"<<add(no1,no2)<<endl;
    cout<<"Enter three integer values"<<endl;
    cin>>no1>>no2>>no3;
    cout<<"Addition of three numbers"<<add(no1,no2,no3)<<endl;
    cout<<"Enter two floating values"<<endl;
    cin>>num1>>num2;
    cout<<"Addition of two float:"<<add(num1,num2)<<endl;
    add(3.6,8);
    add(8,6.6);

    return 0;
}

int add(int a, int b){
    return a+b;
}
int add(int a, int b,int c){
    return a+b+c;
}
float add(float a,float b){
    return a+b;
}
void add(float a, int b){
    cout<<"Addition of"<<a<<"+"<<b<<"is:"<<a+b;
}
void add(int a,float b){
    cout<<"Addition of"<<a<<"+"<<b<<"is:"<<a+b;
}