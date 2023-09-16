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
    //cString(char,int);
    cString(cString &);
};
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

}