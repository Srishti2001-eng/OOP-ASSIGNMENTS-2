#include<iostream>
using namespace std;
class Product
{
    int id;
    int manufacturing_year;
    float price;
    float weight;
    public:
    void insert()
    {
        cout<<"enter the id no."<<endl;
        cin>>id;
        cout<<"enter the manufacturing year"<<endl;
        cin>>manufacturing_year;
        cout<<"enter the price"<<endl;
        cin>>price;
        cout<<"enter the weight"<<endl;
        cin>>weight;
    }
    void display()
    {
        cout<<"\n "<<id<<"\t\t "<<manufacturing_year<<"\t\t "<<price<<" \t\t\t "<<weight;

    }
   

    
    
};


int main()
{
    int n;
    cout<<"enter the item no:"<<endl;
    cin>>n;
    Product e[n];
    for(int i=0;i<n;i++)
    {
       e[i].insert();
    }
    cout<<"\n"<<"ID"<<"\t \t "<<"MANUFACTURING YEAR"<<"\t\t"<<"PRICE"<<"\t\t"<<"WEIGHT";
    cout<<"\n";
    cout<<"--------------------------------------------------------------------------------------------\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        e[i].display();
        cout<<"\n";
    }
    cout<<"--------------------------------------------------------------------------------------------";
    
    
    

    




};
