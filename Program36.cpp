// school management system
// create baseclass person
// create child class student & teacher
// add suitable data members
// display details of person
#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		string id,cn;
		void get()
		{
			cout<<"\nEnter the name of the person : ";cin>>name;
			cout<<"\nEnter ID : ";cin>>id;
			cout<<"\nEnter Contact Number : ";cin>>cn;
		}
		void display ()
		{
			cout<<"\nName = "<<name;
			cout<<"\nID = "<<id;
			cout<<"\nContact number = "<<cn;
		}
};
class Student : public Person
{
	public:
		string n;
		string i,c;
		void get()
		{
			Person :: get();
			cout<<"\nEnter the name of the student  : ";cin>>n;
			cout<<"\nEnter ID of the student : ";cin>>i;
			cout<<"\nEnter Contact Number of the student : ";cin>>c;
		}
		void display ()
		{
			Person :: display();
			cout<<"\nName  = "<<n;
			cout<<"\nID = "<<i;
			cout<<"\nContact number = "<<c;
		}
};
class Teacher : public Person
{
	public:
		string nm;
		string d,n;
		void get()
		{
			Person :: get();
			cout<<"\nEnter the name of the Teacher  : ";cin>>nm;
			cout<<"\nEnter ID of the Teacher  : ";cin>>d;
			cout<<"\nEnter Contact Number of the Teacher : ";cin>>n;
		}
		void display ()
		{
			Person :: display();
			cout<<"\nName = "<<nm;
			cout<<"\nID = "<<d;
			cout<<"\nContact number = "<<n;
		}
};
int main ()
{
	Student s;
	Teacher t;
	s.get();
	t.get();
	s.display();
	t.display();
}
