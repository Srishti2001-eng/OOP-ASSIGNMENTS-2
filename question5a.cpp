#include<iostream>
#include<stdlib.h>
using namespace std;
class String{
	string str;
	public:
		String(string s){
			str=s;
		}
    friend String operator+(String,String);
		friend ostream & operator <<(ostream &,const String &);
};
String operator+(String s1, String s2){
  String s3=s1.str+s2.str;
  return s3;
}
ostream & operator <<(ostream & out,const String &s){
	out<<s.str<<"\n";
	return out;
}

int main(){
	String s1("KIIT");
  cout<<s1;
	String s2("University");
  cout<<s2;
  String s3=s1+s2;
	cout<<s3;
	return 0;
}