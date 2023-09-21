#include<iostream>
#include<string.h>
using namespace std;

class cString{
    int len;
    char *str;
    public:
    cString();
    cString(const char*);
    cString(cString &);
    cString operator=(cString &);
    void display();
    ~cString();
};

class Address{
  
    int pincode;
    cString area;
    cString city;
    public:
    Address();
    Address(int,const char*,const char*);
    void display();
};

class Employee{
    int eid;
    cString name;
    Address curr_add;
    Address per_add;
    public:
    Employee();
    Employee(int,const char*,const char*,const char*,int,const char*,const char*,int);
    void display();
};

cString::cString(){
    len=1;
    str=new char[len];
    str[0]='\0';
}
cString::cString(const char *s){
    this->len=strlen(s);
    this->str= new char[len+1];
    strcpy(this->str,s);
}
cString::cString(cString &obj){
    this->len=obj.len;
    this->str=new char[len+1];
    strcpy(this->str,obj.str);
}
cString cString::operator=(cString & ob){
    this->len=ob.len;
    this->str=new char[len+1];
    strcpy(this->str,ob.str);
    return *this;
}
void cString:: display(){
    cout<<str;
}
cString::~cString(){
    delete[] str;
}

Address::Address(){
    pincode=0;
}
Address::Address(int p,const char*a,const char*c):area(a),city(c){
    this->pincode=p;
}
void Address::display(){
    cout<<"Area:";
    area.display();
    cout<<"\t\tCity:";
    city.display();
    cout<<"\t\tPincode: "<<pincode<<endl;
}

Employee::Employee(){
    eid=0;
}
Employee::Employee(int eid,const char* name,const char*area1,const char*city1,int pin1,const char* area2,const char*city2,int pin2):name(name),curr_add(pin1,area1,city1),per_add(pin2,area2,city2)
{   
    this->eid=eid;

}

void Employee::display(){
    cout<<"Empid:"<<eid;
    cout<<endl<<"Name:";
    name.display();
    cout<<endl<<"Current address:\t";
    curr_add.display();
    
    cout<<endl<<"Permanent address:\t";
    per_add.display();
    cout<<endl<<endl;
}
int main(){
    Employee e1;
    e1.display();
    Employee e2(101,"Suresh","Deccan","Pune",410,"Gangapur rd","NAsik",212);
    e2.display();



    return 0;
}