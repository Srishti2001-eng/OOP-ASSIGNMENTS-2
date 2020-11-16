#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    complex()
    {
        real=0,img=0;
    }
    complex(int r,int i)
    {
        real=r;
        img=i;
    }  
    complex operator ++(int);
    complex operator --();

    void display()
    {
        cout<<"real"<<real<<"+"<<"img"<<img<<endl;
    }

};

complex complex ::operator--()
{
    --real;
    --img;
    return *this;
}

complex complex::operator++(int)
{
    complex t;
    t.real= real++;
    t.img=img ++;
    return t;
}


int main()
{
    complex c1(4,5),c2(8,9),c;      
    c1++;
    c=c2++;
    c1.display();
    c2.display();
    c.display();
    c=--c1;
    c.display();
    
    return 0;

}