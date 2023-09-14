#include <iostream>
using namespace std;

typedef struct Employee
{
    int emp_id;
    int emp_name;
    int salary;

    void accept(){
        cout<<"Enter ID, name and salary"<<endl;
        cin>>emp_id>>emp_name>>salary;
    }

    void display(){
        cout<<"Id is:\n"<<emp_id;
        cout<<"Name is:\n"<<emp_name;
        cout<<"Salary is:\n"<<salary;
    }
}Emp;

int main(){
    int size;
    cout<<"Enter number of employee you want to insert"<<endl;
    cin>>size;
    Emp *e=new Emp[size];
    for(int i=0;i<size;i++){
        e[i].accept();
    }
    for (int i = 0; i < size; i++)
    {
        e[i].display();
    }
    
return 0;
}