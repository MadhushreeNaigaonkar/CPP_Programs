#include<iostream>

using namespace std;

class Player{
    int player_id,wickets,runs,innings;
    char name[80];
    public:
    void accept();
    void display();


};

void Player::accept(){
    cout<<"Enter id,name,wickets,runs and innings"<<endl;
    cin>>player_id>>name>>wickets>>runs>>innings;
}
void Player:: display(){
    cout<<"Id:"<<player_id<<"\t\tName:"<<name<<"\t\tWickets:"<<wickets<<"\t\trune:"<<runs<<"\t\tInnings:"<<innings<<endl;
}


int main(){
    
    Player person[10];
    for(int i=0;i<10;i++){
        cin>>person[i].accept();
    }
    for(int i=0;i<10;i++){
        cout<<person[i].display();
    }
    return 0;
}