#include<iostream>
#include<string.h>
using namespace std;

class Player{
    int player_id;
    char playername[50];
    public:
    Player();
    Player(int,char[]);
    void display();
};
class Batsman:public Player{
    int innings,notout,runs;
    public:
    Batsman();
    Batsman(int, char[],int,int,int);
    int calcAvg(int,int,int);
    //void readData();
    void displayData();
};

Player::Player(){
    player_id=0;
    strcpy(playername,"NA");
}
Player::Player(int player_id, char playername[]){
    this->player_id=player_id;
    strcpy(this->playername,playername);
}
void Player::display(){
    cout<<"Player id:"<<player_id<<endl;
    cout<<"Name:"<<playername<<endl;
}
Batsman::Batsman(){
    innings=notout=runs=0;
}
Batsman::Batsman(int pid,char name[],int innings,int notout,int runs):Player(pid,name){
    this->innings=innings;
    this->notout=notout;
    this->runs=runs;    
}

int Batsman::calcAvg(int i,int n,int r){
    if(! i==0 && n==0 && r==0){
         return r/(i-n);
    }
    return -1;
   
}
void Batsman::displayData(){
    Player::display();
    cout<<"Innnings:"<<innings<<endl;
    cout<<"Notout:"<<notout<<endl;
    cout<<"runs:"<<runs<<endl;
    cout<<"Average:"<<calcAvg(innings,notout,runs);
}

int main(){
    char name[20];
    Batsman b1;
    b1.displayData();

    strcpy(name,"Rahul");
    Batsman b2(101,name,10,3,100);
    b2.displayData();

    return 0;
}
