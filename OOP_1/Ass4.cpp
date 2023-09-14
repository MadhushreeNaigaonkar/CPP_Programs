#include<iostream>
using namespace std;

class Box{
    int height,depth,width;
public:
    void setDiamentions(int,int,int);
    void display();
    int volume();
};

void Box::setDiamentions(int h,int d,int w){
    height=h;
    depth=d;
    width=w;
}

void Box::display(){
    cout<<"Height of box:"<<height<<endl;
    cout<<"Depth of box:"<<depth<<endl;
    cout<<"Width of box:"<<width<<endl;
}
int Box::volume(){
    return height*depth*width;
}



int main(){

    int h,w,d;
    cout<<"\nEnter  height width depth"<<endl;
    cin>>h>>w>>d;
    Box b;
    b.setDiamentions(h,w,d);
    cout<<"\n\nDetails of box:"<<endl;
    b.display();
    cout<<"\n\nvolume is:"<<b.volume();

    return 0;
}