#include<iostream>

using namespace std;


class Complex{
    int real,img;
    public:
   Complex();
   Complex(int,int);
   void display();
    Complex operator+(Complex &);
    Complex operator-(Complex &);
    Complex operator*(Complex &);
    Complex operator++(int);//post
    Complex operator++();
};
Complex::Complex(){
    real=img=1;
}
Complex::Complex(int r,int i){
    real=r;
    img=i;
}

void Complex::display(){
    if(img>0){
    cout<<"["<<this->real<<"+"<<this->img<<"i"<<"]"<<endl;
    }
    else{
        cout<<"["<<this->real<<","<<this->img<<"i"<<"]"<<endl;
    }
}
Complex Complex::operator+(Complex &obj){
    Complex temp;
    temp.real=this->real+obj.real;
    temp.img=this->img+obj.img;
    return temp;
}
Complex Complex::operator*(Complex &obj){
    Complex temp;
    temp.real=(this->real)*(obj.real);
    temp.img=(this->img)*(obj.img);
    return temp;
}
Complex Complex::operator-(Complex &obj){
    Complex temp;
    temp.real=this->real-obj.real;
    temp.img=this->img-obj.img;
    return temp;
}
Complex Complex::operator++(){
    Complex temp;
    temp.real=++this->real;
    temp.img=++this->img;
    return temp;
}
Complex Complex::operator++(int a){
    Complex temp;
    temp.real=this->real++;
    temp.img=this->img++;
    return temp;
}

int main(){

Complex c1(2,3),c2(10,20);
Complex c3;
c3=c1+c2;
cout<<"------c1 object----------";
c1.display();
cout<<"---------c2 object----------";
c2.display();
cout<<"----------c3 object---------";
c3.display();
Complex c4=c1++;
cout<<"----------c4 object---------";
c4.display();
cout<<"----------Post increment---------";
c1.display();
Complex c5=++c2;
cout<<"----------c5 object---------";
c5.display();
Complex c6=c2-c1;
cout<<"----------c6 object---------";
c6.display();
Complex c7=c1*c2;
cout<<"----------c7 object---------";
c7.display();

    return 0;
}