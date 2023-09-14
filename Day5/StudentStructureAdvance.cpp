#include<iostream>
using namespace std;

typedef struct student{
    int rollno;
    char name[40];
    int number_of_subjects;
    int *mark;
    int total_mark=0;


    void accept(){
        cout<<"Enter rollno"<<endl;
        cin>>rollno;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter number of subjects"<<endl;
        cin>>number_of_subjects;
        mark=new int[number_of_subjects];
        cout<<"Enter marks:"<<endl;
        for(int i=0;i<number_of_subjects;i++){
            cin>>mark[i];
            total_mark+=mark[i];
        }
    
    }
    void display(){
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Total number of subjects"<<number_of_subjects<<endl;
        cout<<"Total marks achieved"<<total_mark<<endl;
    }
}Stud;

int main(){
   // Stud s;
    int size;
    cout<<"Enter the number of students"<<endl;
    cin>>size;
    Stud *s=new Stud[size];
    for(int i=0;i<size;i++){
        s[i].accept();
    }
    for(int i=0;i<size;i++){
        s[i].display();
    }




    return 0;
}