#include<iostream>
#include<string.h>
using namespace std;

class Person{
    char name[20];
    int age;
    public:
    Person();
    Person(const char *,int);
    void display();

};
class Employee: public Person{
    int empid;
    protected:
     double salary;
    public:
    Employee();
    Employee(int,const char*,int,double);
    void display();
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
    cout<<"Name:"<<name;
    cout<<"Age:"<<age;
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
    Person::display();
    cout<<"Empid:"<<empid<<endl;
    cout<<"Salary"<<salary<<endl;

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
    Employee::display();
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
    Employee::display();
    cout<<"Number of sales:"<<number_of_sales;
    cout<<"Commision:"<<commision;

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
    Employee::display();
    cout<<"DA:"<<da;
    cout<<"HRA:"<<hra;
}
void Manager::calculateSalary(){
    cout<<"Total salary:"<<salary+hra+da;
}

int main(){
    WageEmployee e(101,"Sarthak",30,200000,2,20);
    cout<<endl;
    e.display();
    cout<<endl;
    e.calculateSalary();
    cout<<endl;
    SalesPerson s(302,"Rohan",35,200030,10,10);
    s.display();
    cout<<endl;
    s.calculateSalary();
    cout<<endl;
    Manager m(203,"Mr.Sagar",40,30000,40,50);
    cout<<endl;
    m.display();
    cout<<endl;
    m.calculateSalary();
    return 0;
}