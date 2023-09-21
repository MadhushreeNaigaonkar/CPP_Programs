#include<iostream>
#include<string.h>
using namespace std;

class cString{
    int len;
    char *str;
    public:
    cString();
    cString(const char*);
    void display();
    ~cString();
    cString operator==(cString &);
    cString operator=(cString &);
    cString operator+(cString &);
    cString operator<(cString &);\
    cString operator>(cString &);

    //cString(char,int);
    cString(cString &);
};
cString::operator=(cString &s){
    this->lrn s2.len;
    this->str=new char[this->len+1];
    strcpy(this->str,s2.str);
    return *this;
}

cString::operator +(cString &s2){
    cString temp;
    temp.len=this->len+s2.len;
    temp.str=new char[temp.len+1];
    strcpy(temp str,this->str);
    strcat(temp.str,s2.str);
    return temp;
}
cString::cString(){
    len=1;
    str=new char[len];
    str[0]='\0';
}
cString::cString(const char *str){
    this->len=strlen(str);
    this->str=new char[this->len+1];
    strcpy(this->str,str);
}
cString::cString(cString &s){
    this->len=s.len;
    this->str=new char[this->len+1];
    strcpy(this->str,s.str);
    }

void cString::display(){
    cout<<"Name:"<<this->str;
}
cString::~cString(){
    delete[] str;
}
int main(){
    cString s("Pune");
    s.display();
    cString s2=s;
    s2.display();
    cString s3("know");
    cString s4("It");
    cString s5=s3+s4;
    cout<<s3;
}