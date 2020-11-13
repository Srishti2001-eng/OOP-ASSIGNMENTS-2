#include <iostream>
#include <ios>       
#include <limits>
using namespace std;
class book_detail{
  string title,author;
  int year,sn;
  public:
  void input(){
    cout<<"Enter Title: ";
    getline(cin,title);
    cout<<"Enter Author: ";
    getline(cin,author);
    cout<<"Enter Year: ";
    cin>>year;
    cout<<"Enter Serial Number: ";
    cin>>sn;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
  } 
  void output(){
    cout<<"Details:\n";
    cout<<title<<"\n"<<author<<"\n"<<year<<"\n"<<sn<<endl;
  }
};
int main() {
  book_detail *b1,*b2;
  b1=new book_detail();
  b2=new book_detail();
  b1->input();
  b2->input();
  b1->output();
  b2->output();
  delete b1;
  delete b2;
}