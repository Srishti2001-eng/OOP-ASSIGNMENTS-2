#include <iostream>
using namespace std;
class Array{
  int *ptr;
  int n;
  public:
  Array(int a){
    n=a;
    ptr = new int[a];
    for(int i=0;i<n;++i)
      ptr[i]=i+1;
  }
  void sort();
  void display(){
    for(int i=0;i<n;++i)
      cout<<ptr[i]<<" ";
    cout<<endl;
  }
};
void Array:: sort(){
    for(int i=0;i<n;++i){
      for(int j=0;j<n-i-1;++j){
        if(ptr[j]<ptr[j+1]){
          int tmp=ptr[j];
          ptr[j]=ptr[j+1];
          ptr[j+1]=tmp;
        }
      }
    }
  }

int main() {
  Array obj(5);
  obj.display();
  obj.sort();
  obj.display();
}