#include<iostream>
using namespace std;

class Time{
    int hr,min,sec;
    public:
        //Time(int=1,int=1,int=1);
        Time();
        Time(int,int);
        Time(int,int,int);
        void display();
};

Time::Time(){
    hr=min=sec=10;
}
Time::Time(int h,int s){
    hr=min=h;
    sec=s;
}
Time ::Time(int h,int m,int s){
    hr=h;
    min=m;
    sec=s;
}

void Time:: display(){
    cout<<"Time:"<<hr<<":"<<min<<":"<<sec<<endl;
    
}

int main(){
    Time t;
    t.display();
    Time t1(2,32);
    t1.display();
    Time t3(2,30,45);
    return 0;
}
