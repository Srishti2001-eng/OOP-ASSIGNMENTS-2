#include <iostream>
using namespace std;
class One{
  protected:
  int gm,kg;
  public:
  One(int g, int k){
    gm=g;kg=k;
  }
};
class Two:public One{
  int wt;
  public:
  Two(int g, int k):One(g,k){}
  void output(){
    wt=kg*1000+gm;
    cout<<"Weight="<<wt<<endl;
  }
};

int main() {
  Two obj(500,5);
  obj.output();
  return 0;
}