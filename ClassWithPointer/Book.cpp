#include<iostream>
#include<string.h>
using namespace std;
class Book{
    char*bookname;
    float price;
    int bookId;
    public:
   static int cnt;
   Book();
   Book( const char *, float );
   Book(Book &);
   ~Book();
   void display();

};
int Book::cnt=0;

Book::Book(){
    cnt++;
    this->bookId=cnt;
    this->price=109.8f;
    bookname=new char[20];
    //bookname[0]='\0';
    strcpy(this->bookname,"Not Appicable");
}

Book::Book(const char *s,float pr){
    cnt++;
    this->bookId=cnt;
    this->bookname=new char[strlen(s)+1];
    strcpy(this->bookname,s);
    price=pr;
}
Book::Book(Book &obj){
    cnt++;
    this->bookId=cnt;
    this->price=obj.price;
    this->bookname=new char[strlen(obj.bookname)+1];
    strcpy(this->bookname,obj.bookname);

}
void Book::display(){
    cout<<"Book Id:\t"<<bookId<<endl;
    cout<<"Book Name:\t"<<bookname<<endl;
    cout<<"Book Price:\t"<<price<<endl<<endl;
}
Book::~Book(){
    delete[] bookname;
}


int main(){
    Book b;
    b.display();
    Book b2("Cpp",200);
    b2.display();
    Book b3=b2;
    b3.display();
    return 0;
}