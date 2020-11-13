#include <iostream>
#include <ios>       
#include <limits>
using namespace std;
class Sports{
  string name,gender,sport;
  int age,nm;
  public:
  Sports(string na, string ge, string sp, int a, int n){
    name=na;gender=ge;sport=sp;
    age=a;nm=n;
  } 
  void output(){
    cout<<"Details:\n";
    cout<<name<<"\n"<<gender<<"\n"<<sport<<"\n"<<age<<"\n"<<nm<<"Matches Played"<<endl;
  }
};
int main() {
  Sports player1("M.S.Dhoni","Male","Cricket",36,1000);
  player1.output();
}