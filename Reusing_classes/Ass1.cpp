#include<iostream>
#include<string.h>

using namespace std;
class Date{
    int d,m,y;
    public:
    Date();
    Date(int, int ,int);
    void display();

};
Date::Date(){
    d=m=1;
    y=2003;
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

class cString{
    int len;
    char*str;
    public:
    cString(){
        len=1;
        str=new char[len];
        str[0]='\0';
    }
    cString(const char*s){
        this->len=strlen(s);
        this->str=new char[len+1];
        strcpy(str,s);
    }
    cString(cString &obj){
        this->len=obj.len;
        this->str=new char[this->len+1];
        strcpy(this->str,obj.str);
    }
    cString operator=(cString &obj){
        this->len=obj.len;
        this->str=new char[this->len+1];
        strcpy(this->str,obj.str);
        return *this;
    }
    void display(){
        cout<<endl<<"Name:"<<str<<endl;
    }
    ~cString(){
        delete[]str;
    }
};

class Person{
    cString name;
    Date dob;
    public:
    Person();
    Person(const char*,int ,int,int);
    
    void display();
};

Person::Person(){

}
Person::Person(const char*str,int dd,int mm,int yy):name(str),dob(dd,mm,yy){

}

void Person::display(){
    name.display();
    dob.display();
}
int main(){
    Person p("Rahul",12,1,2001);
    p.display();
    Person p2=p;
    p2.display();
    return 0;
}