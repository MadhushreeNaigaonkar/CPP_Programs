#include<iostream>
#include<string.h>
using namespace std;

//Declaration
class Date{
    int d,m,y;
    public:
    Date();
    Date(int,int,int);
    void display();
    void setDate(int,int,int);

};
class cString{
    int len;
    char *str;
    public:
    cString();
    cString(const char*);
    cString(cString &);
    cString operator=(cString &);
    ~cString();
    void display();
    void setName(const char*);
};
class Student{
    int rno;
    cString name;
    Date dob;
    Date doa;
    public:

    Student();
    void setRno(int);
    void setName(const char*);
    void setDob(int,int,int);
    void setDoa(int,int,int);
   // Student (int,const char*,int,int,int,int,int,int);
    void display();
};

//Defination
Date::Date(){
    d=m=1;
    y=2001;
}
Date::Date(int d,int m,int y){
    this->d=d;
    this->m=m;
    this->y=y;
}
void Date::display(){
    cout<<d<<"/"<<m<<"/"<<y<<endl;
}
void Date::setDate(int d,int m,int y){
    this->d=d;
    this->m=m;
    this->y=y;
}


cString::cString(){
    int len=1;
    str=new char[len+1];
    str[0]='\0';
}
cString::cString(const char *s){
    this->len=strlen(s);
    this->str=new char[len+1];
    strcpy(this->str,s);
}
cString::cString (cString &s){
    this->len=s.len;
    this->str=new char[len+1];
    strcpy(this->str,s.str);
    
}
cString cString :: operator=(cString &obj){
    this->len=obj.len;
    this->str=new char[len+1];
    strcpy(this->str,obj.str);
    return *this;
}
void cString::display(){
    cout<<endl<<"Name:"<<str<<endl;
}
void cString::setName(const char*n){
    strcpy(this->str,n);
}
cString::~cString(){
    delete[] str;
}

Student::Student(){
   
}

// Student::Student(int rno,const char*n,int d1,int m1,int y1,int d2,int m2,int y2):dob(d1,m1,y1),doa(d2,m2,y2),name(n){
//     this->rno=rno;

// }
void Student::setDoa(int d,int m, int y){
    doa.setDate(d,m,y);
}
void Student::setDob(int d,int m, int y){
    dob.setDate(d,m,y);
}
void Student::setRno(int r){
  this->rno=r;
}
void Student::setName(const char*s){
     name.setName(s);

}
void Student::display(){
    name.display();
    cout<<"Date of Birth:";
    dob.display();
    cout<<"Date of addmission";
    doa.display();
}



int main(){
    Student s[5];
    int rno,d1,d2,m1,m2,y1,y2;
    const char* name;
    for(int i=0;i<5;i++){
        cout<<"Enter rno";
        cin>>rno;
        s[i].setRno(rno);
        cout<<"Enter name";
        cin>>name;
        s[i].setName(name);
        cout<<"Enter date of birth";
        cin>>d1>>m1>>y1;
        s[i].setDob(d1,m1,y1);
        cout<<"Enter date of admission";
        cin>>d2>>m2>>y2;
        s[i].setDoa(d2,m2,y2);
    }
    for(int i=0;i<5;i++){
        s[i].display();
    }
    return 0;
}