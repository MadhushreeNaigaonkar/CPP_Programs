#include<iostream>
using namespace std;

class Date{
    int day,mon,year;
    public:
    Date();
    Date(int,int);
    Date(int,int,int);
    void Display();
};

Date::Date(){
    day=20;
    mon=11;
    year=2001;
}

Date::Date(int dm,int y){
    day=mon=dm;
    year=y;
}
Date::Date(int d,int m,int y){
    day=d;
    mon=m;
    year=y;

}

void Date::Display(){
    cout<<"Day is :"<<day<<endl;
    cout<<"Month is:"<<mon<<endl;
    cout<<"Year is :"<<year<<endl;
}

int main(){
    Date d1;
    d1.Display();
    Date d2(2,2003);
    d2.Display();
    Date d3(1,2,2003);
    d3.Display();

    return 0;
}