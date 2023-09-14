#include<iostream>

using namespace std;


typedef struct  students
{
    int rollno;
    char name[40];
    int marks;

    void accept(){
    cout<<"Enter rollno \n";
    cin>>rollno;
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter total marks";
    cin>>marks;
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;
        
    }
}stud;

int getMax(stud[],int);

int main(){
    stud s[2];
    for(int i=0;i<2;i++){
    s[i].accept();
        cout<<"Information of student"<<endl;
        s[i].display();
       
    }
cout<<"Maximum element is:"<<getMax(s,2);
    return 0;
}

int getMax(stud s[],int size){
    int max=s[0].marks;
    for(int i=1;i<size;i++){
        if(s[i].marks>max){
            max=s[i].marks;
        }
    }
    return max;
}