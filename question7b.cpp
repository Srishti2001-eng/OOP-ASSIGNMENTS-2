#include <iostream>
using namespace std;
int main()
{
  string name;
  cout<<"Enter Name: ";
  getline(cin,name);
  try{
    if(name[0]<'A' || name[0]>'Z')
      throw 0;
    if(name.length()>=20)
      throw '0';
    cout<<name<<endl;
  }
  catch(int a){
    cout<<"First Character not in capital\n";
  }
  catch(char a){
    cout<<"More than 20 Characters entered\n";
  }
  return 0;
}