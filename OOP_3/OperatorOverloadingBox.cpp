#include<iostream>
using namespace std;

class Box{
    int height ,width,depth;
    public:
    Box();
    Box(int,int,int);
    void display();
    int calculateVolume();
    bool operator==(Box & );
    bool operator<(Box &);
    bool operator>(Box &);
};

Box::Box(){
    height=width=depth=8;
}
Box::Box(int h,int w,int d){
    height=h;
    width=w;
    depth=d;
}
int Box::calculateVolume(){
    return height*width*depth;
}

void Box::display(){
    cout<<"Height:"<<height;
    cout<<"width:"<<width;
    cout<<"depth:"<<depth;
}
bool Box::operator<(Box &other){
    return calculateVolume() < other.calculateVolume();
}
bool Box::operator==(Box &other){
    return calculateVolume() == other.calculateVolume();
}bool Box::operator>(Box &other){
    return calculateVolume() > other.calculateVolume();
}


int main(){
    Box b1(2,4,3);
    Box b2(2,2,2);

    if(b1==b2){
        cout<<"Both volume is equal";
    }else if(b1<b2){
        cout<<"Box1 voulme is less than Box2";
    }else{
        cout<<"Box1 volume is greater than Box2 ";
    }

    return 0;
}