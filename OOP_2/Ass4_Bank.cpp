#include<iostream>
#include<string.h>
using namespace std;

class BankAccount{
    char name[60];
    int balance;
    public:
   static int accno;
   
   static float intrestRate; 
   BankAccount();
   BankAccount(const char*,int bal);
   static void setIntrestRate(float f);
   void Display();

};
int BankAccount::accno=101;
float BankAccount::intrestRate=1.2f;
void BankAccount::setIntrestRate(float f){
    intrestRate=f;
}
BankAccount::BankAccount(){
    accno++;
    strcpy(name,"abc");
    balance=20000;
}
BankAccount::BankAccount(const char *c,int b){
    accno++;
    strcpy(name,c);
    balance=b;
}
void BankAccount::Display(){
    cout<<"Account no:"<<accno<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Balance:"<<balance<<endl<<endl;
}
 
int main()
{   
   
    BankAccount e1;
    e1.Display();
    e1.setIntrestRate(10.2f);
    BankAccount e2("Seeta",20000);
    e2.Display();


    return 0;
}