#include<iostream>
#include<string.h>
using namespace std;

class Date{
    int d,m,y;
    public:
    Date();
    Date(int,int,int);
    void display();
};

class Student{
    int rno;
    char name[30];
    Date dob;
    Date doa;
    public:
    
    Student();
    Student(int,char[],int,int,int,int,int,int);
    void display();
};

Date::Date(){
    d=m=1;
    y=2001;
}
Date::Date(int d,int m,int y)
{
    this->d=d;
    this->m=m;
    this->y=y;
}
void Date::display(){
    cout<<d<<"/"<<m<<"/"<<y<<endl;
}


Student::Student(){
    rno=1;
    strcpy(name,"abc");
}
Student::Student(int rno,char name[],int d1,int m1,int y1,int d2,int m2,int y2):dob(d1,m1,y1),doa(d2,m2,y2){
    this->rno=rno;
    strcpy(this->name,name);
}
void Student::display(){
    cout<<"Rollno:"<<rno;
    cout<<"Name:"<<name;
    cout<<"Date of birth:";
    dob.display();
    cout<<"Date of admission:";
    doa.display();
}




int main(){
    Student *s;
    s=new Student[5];


    return 0;
}