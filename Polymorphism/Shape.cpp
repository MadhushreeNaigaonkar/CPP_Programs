#include<iostream>
using namespace std;

class Shape{
    long area, perimeter;
    public:
    virtual void calculateArea()=0;
    virtual void calculatePerimeter()=0;
};
class Square:public Shape{
    long side;
    public:
    Square();
    Square(long);
    void calculateArea();
    void calculatePerimeter();
};
class Triangle:public Shape{
    long base,height,a,b,c;
    public:
    Triangle();
    Triangle(long ,long ,long ,long ,long );
    void calculateArea();
    void calculatePerimeter();
};

Square::Square(){
    side=0;
}
Square::Square(long s){
    this->side=s;
}
void Square::calculateArea(){
    cout<<"Area of square:"<<side*side<<endl;
}
void Square::calculatePerimeter(){
    cout<<"Perimeter of square:"<<4*side<<endl;
}

Triangle::Triangle(){
    base=height=0;
}
Triangle::Triangle(long base,long height,long a ,long b,long c){
    this->base=base;
    this->height=height;
    this->a=a;
    this->b=b;
    this->c=c;
}


void Triangle::calculateArea(){
    cout<<"Area of triangle: "<<0.5*base*height<<endl;
}
void Triangle::calculatePerimeter(){
    cout<<"Perimeter of triangle: "<<a+b+c<<endl;
}

int main(){
    Shape *s[2];
    s[0]=new Square(30);
    s[1]=new Triangle(10,10,20,20,20);

    for(int i=0;i<2;i++){
        s[i]->calculateArea();
        s[i]->calculatePerimeter();
    }


    return 0;
}