#include<iostream>
using namespace std;

class Points{
    int x,y;
    
public:
    static int cnt;
    Points();
    Points(int,int);
    void display();
};

Points::Points(){
    x=y=2;
    cnt++;
}
Points::Points(int a,int b){
    x=a;
    y=b;
    cnt++;
}
void Points::display(){
    cout<<"["<<x<<","<<y<<"]"<<endl;

}
int Points::cnt=0;

int main(){
    Points p1;
    p1.display();
    Points p2(1,2);
    p2.display();
    cout<<p2.cnt;
    return 0;
}