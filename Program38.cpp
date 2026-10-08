#include<iostream>
using namespace std;
class HMS
{
	public:
			int pid,age,gender;
			string name;
		void get()
		{
			cout<<"Enter the name of the patient : ";
			cin>>name;
			cout<<"\nEnter patient id : ";
			cin>>pid;
			cout<<"\nEnter age : ";
			cin>>age;
			cout<<"\nEnter the gender : ";
			cin>>gender;
		}
		void display()
		{
			cout<<"Name = "<<name;
			cout<<"Patient ID = "<<pid;
			cout<<"Age = "<<age;
			cout<<"Gender = "<<gender;
		}
};
class Patient : public HSM
{
	public:
			int did,roomno;
	string disease;
	void get()
	{
		HMS :: get();
		cout<<"Enter the disease : ";
		cin>>disease;
		cout<<"\nEnter the Doctor ID : ";
		cin>>did;
		cout<<"\nEnter the room number : ";
		cin>>roomno;
	}
	void display()
	{
		HMS :: display();
		cout<<"Disease = "<<disease;
		cout<<"Doctor ID = "<<did;
		cout<<"Room number = "<<roomno;
	}
};
class Doctor : public HSM
{
	public:
		string spec;
		int charges;
		void get()
		{
			Person :: get();
			cout<<"Enter the Specialisation of the doctor : ";
			cin>>spec;
			cout<<"\nEnter the charges of the doctor : ";
			cin>>charges;
		}
		void display ()
		{
			Person :: display();
			cout<<"Specialisation = "<<spec;
			cout<<"Charges = "<<charges;
		}
};
class Staff : public HSM
{
	public:
		int salary;
	void display()		
};
class Nurse : public Staff
{
	public:
		void display
		{
		Staff :: display();
		cout<<"Salary of the Nurse = 15000";
		}

};
class Receptionist : public Staff
{
	public:
		void display
		{
		Staff :: display();
		cout<<"Salary of the Receptionist = 20000";
		}
		
};
class Pharmacist : public Staff
{
	public:
		void display 
		{
		Staff :: display();
		cout<<"Salary of the Pharmacist = 25000";	
		}

};
class Bill : public HMS
{
	public:
		int amount;
		void display();
};
class Cash : public Bill
{
		public:
		void display 
		{
		Cash :: display();
		cout<<"Cash payement successfull....";	
		}
};
class Card : public Bill
{
		public:
		void display 
		{
		Card :: display();
		cout<<"Card payement successfull....";	
		}
};
class UPI : public Bill
{
		public:
		void display 
		{
		UPI :: display();
		cout<<"UPI payement successfull....";	
		}
};
class Room : public HMS
{
	public:
		int charges;
		void display();
};
class General : public Room
{
		public:
		void display 
		{
		General :: display();
		cout<<"Charges per night = 5000";	
		}
};
class Private : class Room
{
		public:
		void display 
		{
		Private :: display();
		cout<<"Charges per night = 7000";	
		}
};
class ICU : class Room
{
		public:
		void display 
		{
		ICU :: display();
		cout<<"Charges per night = 11000";	
		}
};
int main ()
{
	int ch1,ch2,ch3,ch4;
	cout<<"-----------Hospital Management System---------";
	cout<<"1.Person\n2.Bill\n3.Room\nEnter your choice : ";cin>>ch1;
	
	if (ch1==1)
	{
		cout<<"1.Patient\n2.Doctor\n3.Staff\nEnter your choice : ";cin>>ch2;
		if(ch2==1)
		{
			cout<<"Patient Section";
		}
		else if(ch2==2)
		{
			cout<<"Doctor Section";
		}
		else if(ch2==3)
		{
			cout<<"Staff Section";		
		}
		else
		{
			cout<<"Invalid Choice";
		}
	}
	else if (ch1==2)
	{
		cout<<"1.Cash\n2.Card\n3.UPI\nEnter your choice : ";cin>>ch3;
		if(ch3==1)
		{
			cout<<"Cash Payment successfull ";
		}
		else if(ch3==2)
		{
			cout<<"Card Payment successfull ";
		}
		else if(ch3==3)
		{
			cout<<"UPI Payment successfull ";
		}
		else 
		{
			cout<<"Invalid choice";
		}
	}
	else if (ch1==3)
	{
		cout<<"1.General\n2.Private\n3.ICU\nEnter your choice : ";cin>>ch4;
		if(ch4==1)
		{
			cout<<"General room selected";
		}
		else if(ch4==2)
		{
			cout<<"Private room selected";
		}
		else if(ch4==3)
		{
			cout<<"ICU room selected";
		}
		else
		{
			cout<<"Invalid choice";
		}
	}
	else
	{
		cout<<"Invalid Choice";
	}
}
