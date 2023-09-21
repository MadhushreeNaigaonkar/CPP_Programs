#include<iostream>
#include<string.h>

using namespace std;


//Date class Declaration
class Date{
    int d,m,y;
    public:
    Date();
    Date(int,int,int);
    void display();
};

//cString class declaration
class cString{
    int len;
    char *name;
    public:
    cString();
    cString(const char*);
    cString (cString &);
    cString operator=(cString &);
    void display();
    ~cString();

};
class Person{
    cString name;
    Date bdate;
    public:
    Person();
    Person(const char*,int,int,int);
    void display();
};

class Emp:public Person{
    int eid;
    double bsalary;
    public:
    Emp();
    Emp(int,const char*,int,int,int,double);
    void display();
};
//dater definition
Date::Date(){
    d=m=1;
    y=2001;
}
Date::Date(int d,int m,int y){
    this->d=d;
    this->m=m;
    this->y=y;
}
void Date:: display(){
cout<<d<<"/"<<m<<"/"<<y<<endl;
}

//cString definition
cString::cString(){
    len=1;
    name=new char[len+1];
    this->name[0]='\0';
}
cString::cString(const char *name){
    this->len=strlen(name);
    this->name=new char[this->len+1];
    strcpy(this->name,name);
}
cString ::cString(cString &obj){
    this->len=obj.len;
    this->name=new char[this->len+1];
    strcpy(this->name,obj.name);
}
cString cString::operator=(cString &obj){
    this->len=obj.len;
    this->name=new char[this->len+1];
    strcpy(this->name,obj.name);
    return *this;
}
void cString::display(){
    cout<<"Name:"<<name<<endl;
}
cString::~cString(){
    delete[] name;
}

//Person definition
Person::Person(){
}
Person::Person(const char *name,int d,int m,int y):name(name){
    //name=cString(name);
    bdate=Date(d,m,y);
}
void Person::display(){
    name.display();
    bdate.display();
}

//Employee definition
Emp::Emp(){
    eid=101;
    bsalary=20000;
}
Emp::Emp(int eid,const char* name,int d,int m,int y,double bsalary):Person(name,d,m,y){
    this->eid=eid;
    this->bsalary=bsalary;
}
void Emp::display(){
    cout<<"Emp id:"<<eid<<endl;
    Person::display();
    cout<<"Basic salary"<<bsalary<<endl<<endl;
}

int main(){
    Emp e1;
    e1.display();
    Emp e2(101,"Seeta",1,2,2003,230000);
    e2.display();


    return 0;
}