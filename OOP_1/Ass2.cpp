#include<iostream>

using namespace std;

class Date{
    int day,month,year;
    public:
    void setDate(int,int,int);
    void getDate();
    int getDay();
    int getYear();
    int getMonth();
    
};

void Date::setDate(int d,int m,int y){
    day=d;
    month=m;
    year=y;
}

void Date::getDate(){
    cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
}
int Date::getDay(){
    return day;
}
int Date::getMonth(){
    return month;
}


int Date::getYear(){
    return year;
}
int main(){
    Date d;
    d.setDate(12,8,2023);
    d.getDate();
    cout<<endl;

    cout<<endl<<d.getMonth();
    cout<<endl<<d.getDay();
    cout<<endl<<d.getYear();
    
    if(d.getDay()>=1 && d.getDay()<32){
        cout<<"\nValid Date";

    }
    else{
        cout<<"Invalid Date";
    }
    return 0;
}