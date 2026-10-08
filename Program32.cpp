#include<iostream>
using namespace std;
class Patient
{
	public:
		string disease;
		int rc,nd,mb;
		
		void get()
		{
			cout<<"\nEnter name of the disease : ";cin>>disease;
			cout<<"\nEnter Room charge : ";cin>>rc;
			cout<<"\nEnter Number of days : ";cin>>nd;
			cout<<"\nEnter Medicine bill : ";cin>>mb;
		}
		void display ()
		{
			cout<<"\nDisease = "<<disease;
			cout<<"\nRoom Charge = "<<rc;
			cout<<"\nNumber of days = "<<nd;
			cout<<"\nMedicine Bill = "<<mb;
		}
};
class Inpatient : public Patient 
{
	public:
		string rt;
		int rn,dcc,ltc;
		
		void get()
		{
			cout<<"\nEnter Room type : ";cin>>rt;
			cout<<"\nEnter Room number : ";cin>>rn;
			cout<<"\nEnter Doctor Consultation Charges : ";cin>>dcc;
			cout<<"\nEnter Lab test charges : ";cin>>ltc;
		}
		void display ()
		{
			cout<<"\nRoom type = "<<rt;
			cout<<"\nRoom number = "<<rn;
			cout<<"\nDoctor Consultation Charges = "<<dcc;
			cout<<"\nLab test charges = "<<ltc;
		}
};
class Person 
{
	public:
		
	int p_id,cn,age;
	string name;
	
	void get()
	{
		cout<<"\nEnter Name of the person : ";cin>>name;
		cout<<"\nEnter Patient ID : ";cin>>p_id;
		cout<<"\nEnter Contact number : ";cin>>cn;
		cout<<"\nEnter Age of the person : ";cin>>age;
	}
	void display ()
	{
		cout<<"\nName = "<<name;
		cout<<"\nPatient ID = "<<p_id;
		cout<<"\nContact Number = "<<cn;
		cout<<"\nAge = "<<age;
	}
};
class Doctor : public Person
{
	public:
	string specialization;
	int fees;
	
	void get ()
	{
		cout<<"\nEnter the specialization of the Doctor : ";cin>>specialization;
		cout<<"\nEnter fees of the doctor : ";cin>>fees;
	}
	void display ()
	{
		cout<<"\nSpecialization = "<<specialization;
		cout<<"\nFees = "<<fees;
	}
};

int main ()
{
	Patient p;
	p.get();
	p.display();
	Inpatient i;
	i.get();
	i.display();
	Person ps;
	ps.get();
	ps.display();
	Doctor d;
	d.get();
	d.display();
}
