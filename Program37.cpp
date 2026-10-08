#include<iostream>
using namespace std;
class Vehicle
{
	public:
		string person;
		string contact_no;
		void get()
		{
			cout<<"\nEnter name of the Person : ";cin>>person;
			cout<<"\nEnter contact number of the person : ";cin>>contact_no;
		}
		void display()
		{
			cout<<"Name = "<<person;
			cout<<"Contact Number : "<<contact_no;
		}
};
class Car : public Vehicle
{
	public:
		int days,cp;
		void get()
		{
			Vehicle ::get();
			cout<<"Enter the number of days : ";cin>>days;	
		}
		void cal()
		{
			cout<<"Cost per day = 5000";cin>>cp;
		}
		void display()
		{
			Vehicle :: display();
			cout<<"Number of days = "<<days;
			cout<<"Total rent = "<<cp;
		}
};
class Bike : public Vehicle
{
	public:
		int d,c;
		void get()
		{
			Vehicle ::get();
			cout<<"Enter the number of days : ";cin>>d;	
		}
		void cal()
		{
			cout<<"Cost per day = 4000";cin>>c;
		}
		void display()
		{
			Vehicle :: display();
			cout<<"Number of days = "<<d;
			cout<<"Total rent = "<<c;
		}
};
class Truck : public Vehicle
{
	public:
		int ds,cpd;
		void get()
		{
			Vehicle ::get();
			cout<<"Enter the number of days : ";cin>>ds;	
		}
		void cal()
		{
			cout<<"Cost per day = 6000";cin>>cpd;
		}
		void display()
		{
			Vehicle :: display();
			cout<<"Number of days = "<<ds;
			cout<<"Total rent = "<<cpd;
		}
};
int main ()
{
	Car c;
	Bike b;
	Truck t;
	c.get();
	b.get();
	t.get();
	c.cal();
	b.cal();
	t.cal();
	c.display();
	b.display();
	t.display();
}
