#include<iostream>
#include<string.h>
using namespace std;

class Person{
    char name[20];
    int age;
    public:
    Person();
    Person(const char *,int);
    virtual void display();

};
class Employee: public Person{
    int empid;
    protected:
     double salary;
    public:
    Employee();
    Employee(int,const char*,int,double);
    void display();
    virtual void calculateSalary()=0;
};
class WageEmployee:public Employee{
    double hr,rate;
    public:
    WageEmployee();
    WageEmployee(int,const char*,int,double,double,double);
    void display();
    void calculateSalary();
};
class SalesPerson:public Employee{
    double number_of_sales,commision;
    public:
    SalesPerson();
    SalesPerson(int,const char *,int,double,double,double);
    void display();
    void calculateSalary();

};
class Manager:public Employee{
    double da,hra;
    public:
    Manager();
    Manager(int,const char*,int, double,double,double);
    void display();
    void calculateSalary();
};
//Person Definition
Person::Person(){
    strcpy(name,"NA");
    age=0;
}
Person::Person(const char *name,int age){
    strcpy(this->name,name);
    this->age=age;
}
 void Person::display(){
    // cout<<"Name:"<<name;
    // cout<<"Age:"<<age;
    cout<<"In person"<<endl;
}

//Employee Definition
Employee::Employee(){
    empid=0;
    salary=0;

}
Employee::Employee(int empid,const char*name,int age,double salary):Person(name,age){
    this->empid=empid;
    this->salary=salary;
}
void Employee:: display(){
    //Person::display();
    cout<<"employee class"<<endl;
    // cout<<"Empid:"<<empid<<endl;
    // cout<<"Salary"<<salary<<endl;

}

//WageEmployee definition
WageEmployee::WageEmployee(){
    hr=rate=0;
}
WageEmployee::WageEmployee(int eid,const char *name,int age,double salary,double hr,double rate):Employee(eid,name,age,salary)
{
    this->hr=hr;
    this->rate=rate;
}
void WageEmployee::display(){
//    Employee::display();
    cout<<"In Wage class"<<endl;
    cout<<"Total hour"<<hr;
    cout<<"Rate per hour"<<rate;
}
void WageEmployee:: calculateSalary(){
    cout<<"Total salary:"<<salary+(hr*rate);
}

//SalesPerson definition
SalesPerson::SalesPerson(){
    number_of_sales=commision=0;
}
SalesPerson::SalesPerson(int eid, const char *name,int age,double salary,double numberofsales,double comm):Employee(eid,name,age,salary)
{
    this->number_of_sales=numberofsales;
    this->commision=comm;
}
void SalesPerson::display(){
    //Employee::display();
    cout<<"Number of sales:"<<number_of_sales;
    cout<<"Commision:"<<commision;
    cout<<"In SAlesperson class"<<endl;

}
void SalesPerson::calculateSalary(){
    cout<<"Total salary: "<<salary+(number_of_sales*commision);
}

//Manager Definition
Manager::Manager(){
    da=hra=0;
}
Manager::Manager(int sid,const char*name,int age,double salary,double da,double hra):Employee(sid,name,age,salary){
    this->da=da;
    this->hra=hra;
}
void Manager::display(){
   // Employee::display();
    cout<<"DA:"<<da;
    cout<<"HRA:"<<hra;
    cout<<"In manager class"<<endl;
}
void Manager::calculateSalary(){
    cout<<"Total salary:"<<salary+hra+da;
}

int main(){
    // Person *p[5];
    // p[0]=new Person("Shenal",29);
    // p[1]=new Employee(101,"Mohit",29,2000);
    // p[2]=new WageEmployee(103,"Rohan",35,20000,3,20);
    // p[3]=new SalesPerson(201,"Harshad",34,25000,20,40);
    // p[4]=new Manager(301,"Siddharth",40,40000,20,50);
    // for(int i=0;i<5;i++){
    //     p[i]->display();
    // }

    Employee *e[3];
    e[0]=new WageEmployee(102,"Aditya",35,20000,3,20);
    e[1]=new SalesPerson(202,"Adwait",23,30000,30,40);
    e[2]=new Manager(303,"Abhy",27,30000,20,20);
    

    for(int i=0;i<3;i++){
        e[i]->calculateSalary();
    }

    

    return 0;
}