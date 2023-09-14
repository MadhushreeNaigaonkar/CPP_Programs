#include<iostream>
using namespace std;

class Point{
    int x,y;
 public:
    void setPoints(int,int);
    void displayPoints();
};

void Point::setPoints(int a,int b){
    x=a;
    y=b;
}
void Point::displayPoints(){
    cout<<"["<<x<<","<<y<<"]"<<endl;
}

int main(){

    int x,y;
    cout<<"Enter points"<<endl;
    cin>>x>>y;
    Point p;
    p.setPoints(x,y);
    p.displayPoints();



    return 0;
}