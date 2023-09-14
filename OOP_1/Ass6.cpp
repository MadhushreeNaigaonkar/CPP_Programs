#include<iostream>
using namespace std;

class Calculator{
    int no1,no2;
    public:
    void setValues(int,int);
    void display();
    int add();
    int subtract();
    int divide();
    int multiply();

};
void Calculator::display(){
    cout<<"Number1 is:"<<no1<<endl;
    cout<<"Numer2 is:"<<no2<<endl;

}
int Calculator:: add(){
    return no1+no2;
}
int Calculator::subtract(){
    return no1-no2;
}
int Calculator::divide(){
    return no1/no2;
}
int Calculator::multiply(){
    return no1*no2;
}

void Calculator::setValues(int a,int b){
    no1=a;
    no2=b;
}

int main(){
    int a,b,ch;
    Calculator c;
    cout<<"Enter Two numbers"<<endl;
    cin>>a>>b;
    c.setValues(a,b);
    c.display();

    cout<<"\n\n 1.Addition \n 2.Subtraction\n3.Multiplication\n4.Division\n 0.Exit\n"<<endl;
    cin>>ch;

    
    switch (ch)
    {
    case 1:
        cout<<"Addition is:"<<c.add();
        break;
    case 2:
    cout<<"Subtraction is:"<<c.subtract();
    break;
    case 3:
    cout<<"Multiplication is:"<<c.multiply();
    break;
    case 4:
    cout<<"Division is:"<<c.divide();
        break;
    
    }   
    return 0;
}