#include<iostream>
using  namespace std;

class Box{
    int height,width,depth;
    public:
    Box();
    Box(int,int);
    Box(int,int,int);
    void Display();
    int calculateVolume();
};

Box::Box(){
    height=width=depth=2;
}
Box::Box(int hw,int d){
    height=width=hw;
    depth=d;
}
Box::Box(int h,int w,int d){
    height=h;
    width=w;
    depth=d;
}

int Box::calculateVolume(){
    return height*width*depth;
}
void Box::Display(){
    cout<<"Height:"<<height<<endl;
    cout<<"Width:"<<width<<endl;
    cout<<"depth:"<<depth<<endl;
}


int main(){
    Box b;
    b.Display();
   cout<< endl<<"Volume:"<<b.calculateVolume()<<endl;
   Box b1(2,3);
   b1.Display();
   Box b2(1,2,3);
   b2.Display();

return 0;
}