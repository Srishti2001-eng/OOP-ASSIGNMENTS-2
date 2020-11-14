#include <iostream>
using namespace std;
class Office;
class Distance{
  protected:
  double km,m;
};
class Market : public Distance{
  double distance;
  public:
  void input(){
    cout<<"Enter distance to market in Km and M: ";
    cin>>km>>m;
    distance=km*1000+m;
  }
  friend void display(Market,Office);
};
class Office : public Distance{
  double distance;
  public:
  void input(){
    cout<<"Enter distance to market in Km and M: ";
    cin>>km>>m;
    distance=km*1000+m;
  }
  friend void display(Market,Office);
};
void display(Market m, Office d){
  if(m.distance>d.distance)
    cout<< m.distance<<"Metres"<<endl;
  else
    cout<<d.distance<<"Metres"<<endl;
}
int main() {
  Market d1;
  Office d2;
  d1.input();
  d2.input();
  display(d1,d2);
}