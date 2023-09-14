#include<iostream>

using namespace std;

typedef struct department{
    int id;
    int name;

    void accept(){
        cout<<"Enter Department id:"<<endl;
        cin>>id;
        cout<<"\nEnter Department name:"<<endl;
        cin>>name;
    }
    void display(){
        cout<<"Department Id:"<<id<<endl;
        cout<<"Department name:"<<name<<endl;
    }
}Dept;

int main(){
    int size;
    cout<<"Enter number of departments you want to insert\n\n";
    cin>>size;
    Dept *d;
    d=new Dept[size];
    for(int i=0;i<=size;i++){
       d[i].accept();
    }
    for(int i=0;i<size;i++){
    d[i].display();}
    delete d;
    return 0;
}
