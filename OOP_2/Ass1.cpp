#include<iostream>
using namespace std;

class Complex{
    int real,img;
    public:
    Complex();
    Complex(int,int);
    void display();
    int getReal() ;
    int getImg() ;
};
Complex::Complex(){
    real=img=2;
}
Complex::Complex(int r,int i){
    real=r;
    img=i;
}
void Complex::display()  {
    cout<<"Real value:"<<real<<endl<<"Imaginary value:"<<img<<endl;

}
int Complex::getReal() {
    return real;

}
int Complex::getImg() {
    return img;
}

int main(){
//    const Complex c;
//     cout<<"Real value by getReal()"<<c.getReal()<<endl<<endl;
//     cout<<"Imaginary value by getImg()"<<c.getImg()<<endl<<endl;
//     c.display();
Complex c1;
cout<<"Real value by getReal()"<<c1.getReal()<<endl<<endl;
cout<<"Imaginary value by getImg()"<<c1.getImg()<<endl<<endl;
c1.display();

    return 0;
}