#include<iostream>
#include<string.h>
using namespace std;

class cString{
    int len;
    char *str;
    public:
    cString();
    cString(int,const char*);
    cString(cString &);
    cString operator=(cString &);
    void display();
    ~cString();
};

class Address{
    int pincode;
    cString area,city;
    public:
    Address();
    Address(int,const char*,const char *);
    void display();
};

cString::cString(){
    len=1;
    str=new char[len];
    str[0]='\0';
}

cString::cString(int len,const char *name){
    this->len=strlen(name);
    this->str=new char[len+1];
    strcpy(this->str,name);
}

cString::cString(cString &obj){
    this->len=obj.len;
    str=new char[len+1];
    strcpy(this->str,obj.str);
}

cString cString::operator=(cString &obj){
    this->len=obj.len;
    this->str=new char[len+1];
    strcpy(this->str,obj.str);
    return *this;
}

void cString::display(){
    cout<<str<<endl;
}
cString::~cString(){
    delete[] str;
}

Address::Address(){
    pincode=0;
}
Address::Address(int pin,const char *a,const char *c):area(strlen(a),a),city(strlen(c),c){
    this->pincode=pin;
}
void Address::display(){
    cout<<"Area:";
    area.display();
    cout<<"City:";
    city.display();
    cout<<"Pincode:"<<pincode<<endl<<endl;

}
int main(){
    Address a;
    a.display();
    Address a2(422009,"IndiraNager","Nashik");
    a2.display();
    





    return 0;
}