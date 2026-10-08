#include<iostream>
using namespace std;
class Student
{
    public:
        int roll_no;
        string name;
        int science,maths,english,cpp,dbms,total;
    
    void get ()
    {
        cout<<"Enter your Roll number : ";cin>>roll_no;
        cout<<"\nEnter your name : ";cin>>name;
        cout<<"\nEnter your Science marks : ";cin>>science;
        cout<<"\nEnter your Mathematics marks : ";cin>>maths;
        cout<<"\nEnter your English marks : ";cin>>english;
        cout<<"\nEnter your C++ marks : ";cin>>cpp;
        cout<<"\nEnter your DBMS marks : ";cin>>dbms;
    }
    void total_marks ()
    {
        total = science + maths + english + cpp + dbms;
        cout<<"Total marks calculated successfully";
    }
    void display ()
    {
        cout<<"Roll Number = "<<roll_no;
        cout<<"\nName = "<<name;
        cout<<"\nScience marks = "<<science;
        cout<<"\nMathematics marks = "<<maths;
        cout<<"\nEnglish marks = "<<english;
        cout<<"\nC++ marks = "<<cpp;
        cout<<"\nDBMS marks = "<<dbms;
        cout<<"\nTotal marks = "<<total;
    }
};
int main()
{
    Student s;
    int ch;
    while(1)
    
    cout<<"-------MENU------";
    cout<<"1.Enter student details\n2.Calculate total\n3.Display details\n4.Exit\nEnter your choice : ";cin>>ch;
    
    if(ch==1)
    {
        s.get();
        break;
    }
    else if(ch==2)
    {
        s.total_marks();
        break;
    }
    else if(ch==3)
    {
        s.display();
        break;
    }
    else if(ch==4)
    {
        cout<<"Program ends";
        break;
    }
    else
    {
        cout<<"Invalid choice";
        break;
    }
    
};



